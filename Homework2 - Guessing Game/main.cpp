#include <iostream>

using namespace std;

int main()
{
    char answer;
    int minRange = 1;
    int maxRange = 10;
    bool guess = false;

    cout << "Welcome to Number Guess!" << endl;
    cout << "I'll guess your number!" << endl;
    cout << "Choose a number between 0 and 10, and don't tell me! Please.." << endl;

    top:
    cout << "Okay! Ready? (y/n)" << endl;
    cin >> answer;
    if (answer == 'n' || answer =='N')
    {
        cout << "Okaay... I'm waiting." << endl;
        goto top;
    }
    else if (answer == 'y' || answer == 'Y')
    {
        while(!guess)
        {
            cout << "Is it " << (minRange + maxRange) / 2 << "? (y/n)" << endl;
            cin >> answer;
            if (answer == 'y' || answer == 'Y')
            {
                cout << "You chose " << (minRange + maxRange) / 2 << "!!" << endl;
                guess = true;
                cout << endl;
                cout << "Wanna playy again? (y/n)" << endl;
                cin >> answer;
                if (answer == 'y' || answer == 'Y')
                {
                    guess = false;
                    minRange = 1;
                    maxRange = 10;
                    goto top;
                }
                else if(answer == 'n' || answer == 'N')
                {
                    cout << "Okayy byee! Was nice playing with you!" << endl;
                    break;
                }
            }
            else if(answer == 'n' || answer == 'N')
            {
                cout << "Hmm.. Higher or lower? (h/l)" << endl;
                cin >> answer;
                if (answer == 'h' || answer == 'H')
                {
                    cout << "Ohh should be higher.." << endl;
                    minRange = (maxRange + minRange)/2;
                }
                else if (answer == 'l' || answer == 'L')
                {
                    cout << "Ohh should be lower.." << endl;
                    maxRange = (maxRange + minRange)/2;
                }
            }
        }
    }
    else
    {
        cout << "Invalid letter, try again." << endl;
        goto top;
    }

    return 0;
}
