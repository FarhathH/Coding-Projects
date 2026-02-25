//testing out anything I want to add onto my main file.
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	int n;
    cin >> n; //size of the array
    //your code goes here
    int * nums = new int[n];

    int *max = &nums;
    for(int i=0; i<n; i++) {
        if(nums[i]<max)
            max += nums[i];
    }
    cout << max << endl;
}
