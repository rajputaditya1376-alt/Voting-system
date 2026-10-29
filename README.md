# Voting-system
Voting Management System mini project using C, HTML, CSS and JavaScript.
# 🗳️ Voting Management System

## 📌 Project Overview

The **Voting Management System** is a mini project developed using C, HTML, CSS, and JavaScript. The main purpose of this project is to demonstrate how a simple electronic voting system works.

The system allows users to view candidates, select a candidate, cast a vote, and view voting results. The C program manages candidate information, assigns unique symbols, counts votes, and declares the winner based on the votes received.

The frontend provides a user-friendly interface with candidate cards, voting buttons, and a results section.

## 🎯 Objectives

- To understand the working of a basic voting system.
- To implement candidate registration using the C programming language.
- To count votes and calculate election results.
- To design an attractive and responsive webpage using HTML and CSS.
- To use JavaScript for interactive demo voting functionality.
- To understand the basic concepts of frontend development and programming logic.

## ✨ Features

- Candidate registration with a unique voting symbol.
- Display of candidate names and symbols.
- Voting through a simple user interface.
- Vote counting and result calculation in the C program.
- Winner declaration based on the highest number of votes.
- Tie detection when multiple candidates receive the same highest vote count.
- Input validation for candidate selection and voting choices.
- Responsive frontend design for different screen sizes.
- Interactive demo voting and result visualization using JavaScript.

## 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| C | Candidate management, vote counting, and winner calculation |
| HTML5 | Structure of the webpage |
| CSS3 | Styling and responsive design |
| JavaScript | Interactive demo voting and result updates |
| Visual Studio Code | Code editor |
| GCC Compiler | Compiling and running the C program |
| GitHub | Source code hosting and version control |

## 📂 Project Structure

```text
Voting-system/
│
├── index.html
├── style.css
├── voting.c
└── README.md
```

## 🚀 How to Run the Project

### 1. Run the Frontend

1. Download or clone this repository.
2. Open the project folder in Visual Studio Code.
3. Open `index.html` in a web browser.
4. Alternatively, use the Live Server extension in VS Code.
5. Explore the candidate cards, click the Vote Now buttons, and view the demo results.

### 2. Run the C Program

Make sure GCC is installed on your computer.

Open the terminal in the folder containing `voting.c` and compile the program:

```bash
gcc voting.c -o voting.exe
```

Run the program on Windows using PowerShell:

```powershell
.\voting.exe
```

Follow the on-screen instructions to enter the number of candidates, candidate names, symbols, number of voters, and voting choices.

## ⚙️ Working of the System

1. **Candidate Registration:** The C program accepts candidate details and assigns a unique symbol to each candidate.
2. **Voting Process:** Voters select a candidate using the candidate number in the C program or the Vote Now button in the frontend demo.
3. **Vote Counting:** The program increments the vote count for the selected candidate.
4. **Result Calculation:** The C program compares the votes received by all candidates.
5. **Winner Declaration:** The program announces the candidate with the highest number of votes or reports a tie when applicable.

## 📊 Expected Output

The C program displays:

- Candidate names and their symbols.
- Voting choices for each voter.
- Total votes received by each candidate.
- Total number of votes cast.
- Winner's name, symbol, and vote count.
- Tie information when candidates receive equal highest votes.

The frontend displays candidate cards, interactive voting buttons, and a visual summary of demo voting results.

## 🎓 Learning Outcomes

Through this project, we learn:

- Structures, arrays, loops, conditional statements, and functions in C.
- Input validation and vote-counting logic.
- HTML page structure and CSS styling.
- JavaScript event handling and DOM manipulation.
- Responsive web design.
- Basic software project organization and GitHub repository management.

## 🔮 Future Scope

The project can be improved in the future by adding:

- Integration between the C backend and web frontend.
- User authentication and voter verification.
- A database to store candidates and voting records.
- An administrative dashboard for managing elections.
- Persistent voting results and downloadable reports.
- Improved security and access control.

## ⚠️ Limitations

This project is intended for educational and demonstration purposes only. The JavaScript frontend demo and the C console program currently operate separately and do not share voting data.

The application does not implement secure voter authentication, a persistent database, or the security measures required for real elections. It should not be used for actual elections.

## 👨‍💻 Project Information

**Project Name:** Voting Management System  
**Project Type:** College Mini Project  
**Programming Language:** C  
**Frontend:** HTML, CSS, JavaScript  
**Development Environment:** Visual Studio Code

## 📄 License

This project is provided for educational purposes. No formal open-source license has been specified.

---

**Thank you for visiting this repository!**
