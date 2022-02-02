#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    cout << "       ==============================\n" << endl;
    cout << "        WELCOME TO THE MAGIC 8-BALL! \n" << endl;
    cout << "       ==============================\n" << endl;

    string question;
    string restart;
    string answer[] = {"It is certain.", "It is decidedly so.", "Without a doubt.",
    "Yes - definitely.", "You may rely on it.", "As I see it, yes.", "Most likely.",
    "Outlook good.", "Yes.", "Signs point to yes.", "Reply hazy, try again.",
    "Ask again later.", "Better not tell you now.", "Cannot predict now.",
    "Concentrate and ask again.", "Don't count on it.", "My reply is no.",
    "My sources say no.", "Outlook not so good.", "Very doubtful."};

    do {

        cout << "\nWhat would you like to ask the Magic 8-Ball?" << endl;
        cin.ignore();
        getline(cin, question);


        if (question == "") {
            srand(time(NULL)); //Seed the rand();
            cout << "\n" << "The Magic 8-Ball says, " << "\"" << answer[rand() % 20] << "\"\n" << endl;
        } else {
            srand(time(NULL)); //Seed the rand();
            cout << "\n" << "The Magic 8-Ball says, " << "\"" << answer[rand() % 20] << "\"\n" << endl;
        }

        cout << "=====================================================" << endl;

        do {

            cout << "\nDo you want to ask the Magic 8-Ball another question?\nInput Y for yes or N for no and press Enter." << endl;
            getline(cin, restart);

            cout << "\n=====================================================" << endl;

            if (restart == "Y" || restart == "y") {
                cout << "\n\nClearing the Magic 8-Ball...\n" << endl;
                break;
            } else if (restart == "N" || restart == "n") {
                break;
            } else {
                cout << "Invalid input. Try again." << endl;
            }
        } while (restart != "Y" || restart != "y");

    } while (restart == "Y" || restart == "y");

        cout << "\n\nPutting the Magic 8-Ball out of its misery in 3..." << endl;
        Sleep(1000);
        cout << "2..." << endl;
        Sleep(1000);
        cout << "1..." << endl;
        Sleep(1000);

    return 0;
}
