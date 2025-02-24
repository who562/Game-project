**Street Craps 🎲**

**Overview**

Street Craps is a simplified version of traditional casino Craps, designed without a banker or a 
table. This project implements the game in C++, incorporating key programming concepts such as 
arrays, vectors, functions, and file I/O.

**Game Rules**

* A player (shooter) challenges an opponent and places a wager.
* The shooter rolls the dice under the following conditions:
    o	Win Condition: Rolling a 7 or 11 on the first attempt results in an immediate win.
    o	Lose Condition: Rolling a 2, 3, or 12 on the first attempt results in an immediate loss.
    o	Point System: Any other number becomes the point. The shooter must roll the 
        same point before rolling a 7 to win. If a 7 appears first, the shooter loses the bet.
* The game continues until one of these conditions is met.

**Project Details**

* Total Lines of Code: ~343
* Number of Variables Used: ~23
* Key Programming Concepts:
o    Conditional statements (if, if-else, switch)
o	Loops (while, do-while, for)
o	Functions with pass-by-value and pass-by-reference
o	Arrays and vectors for data storage and manipulation
o	File I/O for recording game statistics

**Features**

✅ User-friendly interface with structured menus
✅ Bet validation to ensure proper input handling
✅ Randomized dice rolls using rand() for realistic gameplay
✅ Statistical tracking of win/loss percentages
✅ File storage for game logs and dice roll history

**Challenges & Learning Outcomes**

Developing this project improved my understanding of C++ fundamentals, particularly in using 
arrays, vectors, functions, and file handling. Debugging and refining the game logic strengthened 
my problem-solving skills, making me more confident in working with structured programming 
techniques.

**How to Play**

1. Compile and run the program in a C++ environment.
2. Choose between playing, viewing rules, or analyzing game statistics.
3. Enter the number of players and place bets accordingly.
4. Follow the game prompts and track your wins/losses!


**Future Enhancements**

🔹 Implement a graphical interface using a C++ GUI library.
🔹 Improve AI-based opponents for single-player mode.
🔹 Expand betting options for a more dynamic experience.
