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


        int Transaction(int choice)
        {
            cout << "You have selected" << endl; 
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
    int c;
    //This is where I call the attributes and methods for executing the code.
    Sweets p; //for food
    Sweets d; //for money

    d.viewCredits();
    p.viewList();
    cin >> c;
    d.Transaction(c);
    d.viewCredits();
    
    return 0;
}