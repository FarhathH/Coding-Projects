#include <iostream>
#include <string>
using namespace std;

/*
    This trying to redo the vending machine concept again as my 
    file has gone either corrupted or faulty.
*/
class Treats //main class and containing the bare minimum essentials.
{    
    public:
        
        Treats()
        {
            cout << "******************************************" << endl;
        }

        void viewTreats();
        void selectTreats();
};

class Gummies : Treats
{

    void selectTreat()
    {
        
    }
    
};

class Chocolate : Treats
{
    public:
        string chocoList[5] = {"Mars Bars", "KitKat", "Bounty", "Snickers", "Ferrero Roche"};
        double chocoPrices[5] = {0.10, 0.57, 0.45, 0.39, 0.21};
        int treat;

        void viewTreats()
        {
            cout << "Pick any treat you want by pressing the corresponding" << endl;
            cout << chocoList << endl;
        }

        void selectTreat()
        {

        }
        
};

int main()
{
    
   cout << "Hello World" << endl;

   Chocolate c1;
   Gummies c12;

   c1.viewTreats();

   
    
    
    return 0;
}