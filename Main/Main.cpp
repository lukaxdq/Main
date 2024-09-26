#include <cstdlib> 
#include <ctime> 
#include <iostream> 
using namespace std;

// opp potez
char getComputerMove()
{
    int move;
    // generacija brojeva 
    srand(time(NULL));
    move = rand() % 3;

    // potes na osnovu broja 
    if (move == 0) {
        return 'p';
    }
    else if (move == 1) {
        return 's';
    }
    return 'r';
}

// uzimanje rezultata 
int getResults(char playerMove, char computerMove)
{
    // izjednaceno  
    if (playerMove == computerMove) {
        return 0;
    }

    // Pravila 
    if (playerMove == 's' && computerMove == 'p') {
        return 1;
    }
    if (playerMove == 's' && computerMove == 'r') {
        return -1;
    }
    if (playerMove == 'p' && computerMove == 'r') {
        return 1;
    }
    if (playerMove == 'p' && computerMove == 's') {
        return -1;
    }
    if (playerMove == 'r' && computerMove == 'p') {
        return -1;
    }
    if (playerMove == 'r' && computerMove == 's') {
        return 1;
    }

    return 0;
}

// Nači Main
int main()
{

    char playerMove;

    cout << "\n\n\n\t\t\tDobrodosao U papir kamen makaze "
        "igra\n";

    cout << "\n\t\tUnesi r za Kamen, p for Ppir, and S za Makaze "
        "for SCISSOR\n\t\t\t\t\t";

    // unos usera  
    while (1) {
        cin >> playerMove;
        if (playerMove == 'p' || playerMove == 'r' || playerMove == 's') {
            break;
        }
        else {
            cout << "\t\t\tAlo ba nemoze to." << endl;
        }
    }



    // Sta compjuter radi
    char computerMove = getComputerMove();

    int result = getResults(playerMove, computerMove);

    // Ko je Pobjedio 
    if (result == 0) {
        cout << "\n\t\t\tGame Draw!\n";
    }
    else if (result == 1) {
        cout << "\n\t\t\tCongratulations! Player won the "
            "game!\n";
    }
    else {
        cout << "\n\t\t\tOh! Computer won the game!\n";
    }

    // Naci Svi Potezi
    cout << "\t\t\tYour Move: " << playerMove << endl;
    cout << "\t\t\tComputer's Move: " << computerMove << endl;


    /*
    * Made by Lukxdq
    * jebiga
    */
    return 0;
    
}
