//testing out anything I want to add onto my main file.
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

/*
	void pushX(int num){
		for(int i=0;i<num;i++)
			cout<<" ";
	}
	int main() {
		for(int j=0;j<50;j++){
			system("CLS");
			pushX(j);
			cout<<"Hello";
			Sleep(100);
		}

	}
*/
int main()
{
	string snacks[2][5] = { //multidimentional array to display snacks and prices.
		{"Marsbars","KitKat", "Bounty", "Galaxy", "Raffelo"},
		{"0.50", "0.65", "0.70", "0.23", "0.19"}
		};
	
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cout << snacks[i][j] << endl;
		}
	}

}
