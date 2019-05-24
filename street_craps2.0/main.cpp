    /* 
    * File:   main.cpp
    * Author: Alejandro Bravo
    * Created on April 15th, 2019, 10:50 AM
    * Purpose:  project 1
    */

    //system libraries
    #include <iostream>//Input/Output Library
    #include <string>  // String Library
    #include<fstream>  // File IO Library
    #include <cstdlib> // Random Number Generator Library
    #include <ctime>   // Time function
    #include <iomanip> // format function
    #include <cmath>   // math libary
    using namespace std;

    //Global Constants, no Global Variables are allowed
    //Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

    //Function Prototypes

    //Execution Begins Here!

    int main(int argc, char** argv) {
    //seed random number generator
    srand(static_cast<unsigned int> (time(0))); //seed random number generator
    //Declare Variables/Open Files
    ifstream inFile("craps.txt");
    ofstream outFile;
    outFile.open("craps.txt");
    inFile.open("craps.txt");
    char ans, ans1; //the option for user to restart the game 
    char opt; //the option for user at main menu 
    string P1, P2, line; //the names of players
    float bet, total; //the bet for the  game
    int lucky = 7, lucky2 = 11, win, lost; // values 
    const float perCov = 100.0f; // convert decimal to percent
    //The main menu of the game
    cout << "🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟" << endl;
    cout << setw(4) << " 🎲 Welcome to Bravo street craps.🎲" << endl;
    cout << "🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟🌟" << endl;
    cout << "1. Play the Game" << endl;
    cout << "2. Display the Rules and about" << endl;

    cin>>opt; //Gets to choose to show the rules or not
    cout << endl;
    while (opt < '1' || opt > '2') //Input validation. Can only enter 1 or 2.
    {
        cout << "Invalid Input. Please try again" << endl;
        cin>>opt;
        cout << endl;
    }
    cin.ignore(1000, '\n'); //Clears anything after player entered their value
    switch (opt) { //Menu with the 2 choices
        case '2': //Displays the rules if 2 is selected
        {
            cout << "--------------------------" << endl;
            cout << "~ Rules of Street Craps. ~" << endl;
            cout << "--------------------------" << endl;
            cout << "1.The game is played with 2 six-sided dices" << endl;
            cout << "2.The game is similar to casino craps but slight difference." << endl;
            cout << "3.This version of craps does not have a banker and a table." << endl;
            cout << "4.If the shooter rolls the dices and the sums 7 and 11 then they win bet."
                    << endl;
            cout << "5.If the shooter rolls the dices and the sums is 2,3,and 12 then shooter lose."
                    << endl;
            cout << "6.If any other number lands then it becomes point." << endl;
            cout << "7.Point must be match in order for shooter to win" << endl;
            cout << "8.if shooter lands on 7 after the first row then they lose" << endl;
            cout << "9.the games continues until point is match or a seven is roll" << endl;
            cout << "10.The most important rule is not getting caught by Police 😉" << endl;
            cout << "-----------------------" << endl;
            cout << "~ about Street Craps. ~" << endl;
            cout << "-----------------------" << endl;
            cout << "This version of Craps is popular in the Ghetto and is illegal to play in the street" << endl;
            cout << "The game has different names like shooting dice and Ghetto Craps." << endl;
            cout << "Its a fun game to play with friends and family 👍" << endl;
            cout << "Press Enter to Play." << endl; //Allows player to read rules then press enter to play
            cin.get();
        }
        default: //Will always end up here, no breaks before this. This is the actual game part
        {
            // The code for the game
            cout << "Enter player 1 and players 2 a.k.a the shooter Names" << endl;
            cin>>P1; // the name of player 1
            cin>>P2; // the name of player 2
            cout << "\n"; // add a new line
            do // start of the loop/restart game
            {
                cout << "shooter make bet" << endl;
                cin>>bet; // the money that is being bet
          while(cin.fail()) {
        cout<< "please enter a interger" <<endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin>>bet;
              }                         
                while (cin && bet < 1.00f){ // checks if the money being bet is more than a dollar 

                    cout << "The minimum bet is $1.00 Please place a higher bet." << endl;
                }

                // declare value
                int die1 = rand() % 6 + 1; //[1,6] dice 1
                int die2 = rand() % 6 + 1; //[1,6] dice 2
                int sum = die1 + die2; // adds both dice to get sum
                // write to the file 
                outFile << "\n";
                outFile << "first roll Dices is: " << die1 << " second roll dices is: " << die2 << endl;
                outFile << "the point was: " << sum << "\n";
                // the logic of the game
                if (sum == lucky || sum == lucky2) {
                    win++; // checks the sum of dice roll 7 or 11
                    cout << endl; //  makes format better looking
                    cout << P2 << "  wins $" << fixed << setprecision(2) << bet << endl;
                } else if (sum == 2) {
                    lost++; // checks if the sum of the eyes roll 2
                    cout << endl; //  makes format better looking
                    cout << P1 << "  wins $" << fixed << setprecision(2) << bet << endl;
                } else if (sum == 3) {
                    lost++; // checks if the sum of the eyes roll 3
                    cout << endl; //  makes format better looking
                    cout << P1 << "  wins $" << fixed << setprecision(2) << bet << endl;
                } else if (sum == 12) {
                    lost++; // checks if the sum of the eyes roll 12
                    cout << endl; //  makes format better looking
                    cout << P1 << "  wins $" << fixed << setprecision(2) << bet << endl;
                } else { // checks if the dice roll any other number
                    bool rollAgn; // make dice roll again if any other number is chosen
                    do {
                        die1 = rand() % 6 + 1; //[1,6] dice 1
                        die2 = rand() % 6 + 1; //[1,6] dice 2
                        int sumAgn = die1 + die2; // the sum of the dice being roll again
                        // write to the file
                        outFile << "\n";
                        outFile << "dice one roll: " << die1 << " dice two roll: " << die2 << endl;
                        outFile << "the sum of both dices is: " << sumAgn << endl;
                        if (sumAgn == 7) {
                            lost++; // checks if sum of dice if 7
                            rollAgn = false;
                            cout << endl; //  makes format better looking
                            cout << P1 << "  wins $" << fixed << setprecision(2) << bet << endl;
                        } else if (sum == sumAgn) {
                            win++; // checks if the sum and the roll again is the same
                            rollAgn = false;
                            cout << endl; //  makes format better looking
                            cout << P2 << "  wins $" << fixed << setprecision(2) << bet << endl;
                        } else rollAgn = true; // makes the dice roll again if the sum of the dice roll any other dice
                    } while (rollAgn);
                }
                inFile.close(); // close the file 
                cout << endl; //  makes format better looking
                cout << "Do you want to see what the dice roll? Y(es) or N(o)" << endl;
                cin>>ans1;
                if ((ans1 == 'y') || (ans1 == 'Y')) { // checks the user input
                    inFile.open("craps.txt"); // opens the file again

                if (inFile.is_open()){ // checks if the file is open
                    while (getline(inFile, line)) // reads what the file has
                    {
                        cout << line << '\n' << endl;
                    }
                }
                }
                cout << "Another game? Y(es) or N(o)" << endl;
                cin >> ans;
            } while (ans == 'y' || ans == 'Y'); // restart the game
        }
            total = win + lost; // amounts of games play
            cout << endl; //  makes format better looking
            cout << "Thanks for playing" << endl;
            cout << "Total number of games = " << win + lost << endl;
            cout << P2 << "  won about " << round(perCov * (win / total)) << "%" << endl;
            cout << P1 << "  won about " << round(perCov * (lost / total)) << "%" << endl;
    }
    //Close files
    outFile.close(); // close the outfile
    inFile.close(); // close the infile
    //Exit stage right or left!
    return 0;
    }


