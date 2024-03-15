#include <iostream>
#include <string>
using namespace std;

/*
    This trying to redo the vending machine concept again as my 
    file has gone either corrupted or faulty.
*/
class Treats //main class and containing the bare minimum essentials.
{

    protected:
        string chocoList[5] = {"Mars Bars", "KitKat", "Bounty", "Snickers", "Ferrero Roche"};
        double chocoPrices[10] = {};
    public:
        Treats()
        {
            cout << "Sweet treats" << endl;
            cout << "Pick any treat you want by pressing the corresponding" << endl;
        }
};

class Gummies : Treats
{
    
};

int main()
{
    
    string sweets[5] = {"Mars Bars", "KitKat", "Bounty", "Snickers", "Ferrero Roche"};
    
    cout << sweets[0] << endl;
    return 0;
}