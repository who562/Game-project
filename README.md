# Street Craps 🎲

## Overview

Street Craps is a streamlined version of the traditional casino game Craps, designed to be played without a dedicated banker or table. Implemented in C++, this project highlights essential programming concepts such as arrays, vectors, functions, and file I/O, offering both an engaging game and a learning experience.

## Game Rules

- **Player and Wager:**  
  A player (the shooter) challenges an opponent by placing a wager.

- **Dice Roll Outcomes:**  
  - **Immediate Win:** Rolling a **7** or **11** on the first roll wins the game instantly.  
  - **Immediate Loss:** Rolling a **2**, **3**, or **12** on the first roll results in an immediate loss.  
  - **Point Establishment:** Any other number establishes a "point." The shooter must roll this number again before rolling a **7** to win. If a **7** appears first, the shooter loses the bet.

- **Game Continuation:**  
  The game continues until one of these conditions is met.

## Project Details

- **Total Lines of Code:** ~343  
- **Number of Variables Used:** ~23

**Key Programming Concepts:**

- **Conditional Statements:**  
  (if, if-else, switch)
- **Loops:**  
  (while, do-while, for)
- **Functions:**  
  Both pass-by-value and pass-by-reference implementations
- **Data Structures:**  
  Arrays and vectors for storing and manipulating data
- **File I/O:**  
  For recording game statistics and logs

## Features

- ✅ User-friendly interface with structured menus
- ✅ Input validation for betting
- ✅ Realistic dice rolls using `rand()`
- ✅ Statistical tracking of win/loss percentages
- ✅ File logging for game history and dice roll records

## Challenges & Learning Outcomes

This project significantly deepened my understanding of C++ fundamentals, particularly with arrays, vectors, functions, and file handling. The challenges faced during debugging and game logic refinement greatly enhanced my problem-solving skills and confidence in structured programming techniques.

## How to Play

1. **Compile and Run:**  
   Compile the program in your C++ development environment and execute it.
2. **Main Menu:**  
   Choose to play, review the game rules, or view game statistics.
3. **Player Setup:**  
   Enter the number of players and place your bets accordingly.
4. **Gameplay:**  
   Follow the prompts to roll the dice and track your wins and losses.

## Future Enhancements

- 🔹 **Graphical Interface:**  
  Integrate a GUI using a C++ library.
- 🔹 **Enhanced AI Opponents:**  
  Develop smarter AI for a more engaging single-player mode.
- 🔹 **Expanded Betting Options:**  
  Introduce additional betting mechanisms for a richer game experience.
