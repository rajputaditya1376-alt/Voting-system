
#include <stdio.h>
#include <string.h>

#define MAX_C 10

typedef struct Candidate {
    char name[50];
    int votes;
    char symbol;
} Candidate;

Candidate allCandidates[MAX_C];

char symbols[MAX_C] = {
    '!', '@', '#', '$', '%',
    '^', '&', '*', '~', '+'
};

int symbolTaken[MAX_C] = {0};
int candidateCount = 0;

void fillCandidate(int index);
void displayAllCandidates(void);
void getVotes(int voterIndex);
void getResults(void);

int main(void)
{
    int numVoters;

    printf("===== VOTING MANAGEMENT SYSTEM =====\n");
    printf("Enter number of candidates (1-10): ");

    if (scanf("%d", &candidateCount) != 1 ||
        candidateCount < 1 || candidateCount > MAX_C) {
        printf("Invalid candidate count.\n");
        return 1;
    }

    for (int i = 0; i < candidateCount; i++) {
        fillCandidate(i);
    }

    printf("\nEnter number of voters: ");

    if (scanf("%d", &numVoters) != 1 || numVoters < 0) {
        printf("Invalid number of voters.\n");
        return 1;
    }

    for (int i = 0; i < numVoters; i++) {
        getVotes(i);
    }

    getResults();

    return 0;
}

void fillCandidate(int index)
{
    int choice;

    while (1) {
        printf("\nAvailable symbols:\n");

        for (int i = 0; i < MAX_C; i++) {
            if (!symbolTaken[i]) {
                printf("%d. %c\n", i + 1, symbols[i]);
            }
        }

        printf("Choose symbol for candidate %d: ", index + 1);

        if (scanf("%d", &choice) != 1) {
            printf("Enter a valid number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}

            continue;
        }

        if (choice < 1 || choice > MAX_C ||
            symbolTaken[choice - 1]) {
            printf("Symbol unavailable. Try again.\n");
            continue;
        }

        break;
    }

    symbolTaken[choice - 1] = 1;
    allCandidates[index].symbol = symbols[choice - 1];

    printf("Enter candidate name (one word): ");

    if (scanf("%49s", allCandidates[index].name) != 1) {
        strcpy(allCandidates[index].name, "Candidate");
    }

    allCandidates[index].votes = 0;
}

void displayAllCandidates(void)
{
    printf("\n----- CANDIDATES -----\n");

    for (int i = 0; i < candidateCount; i++) {
        printf("%d. %-20s Symbol: %c\n",
               i + 1,
               allCandidates[i].name,
               allCandidates[i].symbol);
    }
}

void getVotes(int voterIndex)
{
    int choice;

    while (1) {
        displayAllCandidates();

        printf("Voter %d, enter choice (1-%d): ",
               voterIndex + 1, candidateCount);

        if (scanf("%d", &choice) != 1) {
            printf("Enter a valid number.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}

            continue;
        }

        if (choice < 1 || choice > candidateCount) {
            printf("Invalid choice. Try again.\n");
            continue;
        }

        allCandidates[choice - 1].votes++;
        break;
    }
}

void getResults(void)
{
    int totalVotes = 0;
    int maxVotes = 0;
    int winnerIndex = -1;
    int winnerCount = 0;

    printf("\n===== ELECTION RESULTS =====\n");

    for (int i = 0; i < candidateCount; i++) {
        printf("%-20s Symbol: %c | Votes: %d\n",
               allCandidates[i].name,
               allCandidates[i].symbol,
               allCandidates[i].votes);

        totalVotes += allCandidates[i].votes;

        if (allCandidates[i].votes > maxVotes) {
            maxVotes = allCandidates[i].votes;
        }
    }

    for (int i = 0; i < candidateCount; i++) {
        if (allCandidates[i].votes == maxVotes) {
            winnerCount++;
            winnerIndex = i;
        }
    }

    printf("Total votes cast: %d\n", totalVotes);

    if (totalVotes == 0) {
        printf("No votes were cast. No winner declared.\n");
    }
    else if (winnerCount > 1) {
        printf("Election is tied between %d candidates.\n",
               winnerCount);
    }
    else {
        printf("Winner: %s\n",
               allCandidates[winnerIndex].name);
        printf("Symbol: %c\n",
               allCandidates[winnerIndex].symbol);
        printf("Votes: %d\n", maxVotes);
    }
}
