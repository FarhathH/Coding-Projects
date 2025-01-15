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
        double credits = 4.67;

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
                    cout << snacks[i][j];
                }
            }
        }

        void viewCredits()
        {
            cout << "************" << endl;
            cout << "Credits: " << credits << endl;
        }

        void selectChoice()
        {
            cout << "Select your choice" << endl;
            //
        }
};


int main()
{

    Sweets p;
    p.viewList();
    p.viewCredits();
    p.selectChoice();
    

    
    return 0;
}