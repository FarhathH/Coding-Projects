#include <iostream>
#include <string>
using namespace std;

class Sweets
{
    public:

        string snacks[2][5] = { //multidimentional array to display snacks and prices.
            {"Marsbars","KitKat", "Bounty", "Galaxy", "Raffelo"},
            {"0.50", "0.65", "0.70", "0.23", "0.19"}
            };

        double prices[5] = {0.50, 0.65, 0.70, 0.23, 0.19};
        double credits = 4.67; //default money for the user
        double currentCredits;
        int choice;

        Sweets()
        {
            cout << "************" << endl; //This is just to let me know that I can instantiate an object with no errors. 
        }

        void viewList()
        {
            cout << "Menu:" << endl;
            
            for(int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    cout << snacks[i][j] << endl;
                }
            }

            cout << "Select your choice" << endl;
        }

        void viewCredits()
        {
            cout << "************" << endl;
            cout << "Credits: " << credits << endl;
        }


        void Transaction(choice)
        {
            switch (choice)
            {
                case 0:
                /* code */
                    cout << "You selected: " << snacks[0][0] << endl;
                    break;
                case 1:
                    cout << "You selected: " << snacks[0][1] << endl;
                    break;
                case 2:
                    cout << "You selected: " << snacks[0][2] << endl;
            
            default:
                break;
            }
            currentCredits = credits - prices[choice];
        }

        void remainingCredits()
        {

            cout << "************" << endl;
            cout << "Credits: " << currentCredits << endl;
        }
};


int main()
{
    int choice;
    //This is where I call the attributes and methods for executing the code.
    Sweets p; //for food
    Sweets d; //for money

    d.viewCredits();
    p.viewList();
    cin >> choice;
    d.Transaction(choice);
    d.viewCredits();
    
    return 0;
}