//testing out anything I want to add onto my main file.
using namespace std;
#include <string>
#include <iostream>

int main()
{
    cout << "Hello world" << endl;

    string Choco[2][3] = 
    { 
    {"Mars", "Milkyway", "Lion"},
    {"0.60", "0.45", "1.83"}
    };

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << Choco[i][j] << endl;
        }
    }
    
    return 0;
}