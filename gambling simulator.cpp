#include <iostream>
using namespace std;

//making the budget
int budget = rand() % 5000 + 3000;

//RGG loop
void RandomGambleGame(){

    //game set up
int WagerAmount;
    cout << "Welcome to the random gamble game! \n";
    cout << "how much will you wager? \n";
    cin >> WagerAmount;

    //checking the money amount
    if (WagerAmount <= 0) {
        cout << "to little money \n";
        RandomGambleGame();
    } else if (WagerAmount > budget) {
        cout << "not enough money \n";
        RandomGambleGame();
    } else {
        //the game
        int rggNum = rand() % 50 + 0;
        int rggNumGuess;
        cout << "whats your guess for the number? \n";
        cin >> rggNumGuess;

        //processing results
        if (rggNumGuess == rggNum) {
            int fBudget = WagerAmount + budget;
            budget = fBudget;
            cout << "WINNER!!! \n";


        } else {
            int fBudget = budget - WagerAmount;
            budget = fBudget;
            cout << "wrong! \n";

        }
    }

}

void Menu() {

    //game set up
    bool game = true;
    while (game = true){
        char GameChoice;

        //game menu
        cout << "this is your budget! \n";
        cout << budget << "\n";
        cout << "what would you like to do? \n";
        cout << "---------------------------\n";
        cout << "0 = random gamble game \n";
        cout << "---------------------------\n";
        cin >> GameChoice;

        //processing choice
        if (GameChoice == '0') {

            RandomGambleGame();

        }
    }


}



int main() {
 Menu();
}
