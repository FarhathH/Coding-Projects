//testing out anything I want to add onto my main file.
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
    cin >> n; //size of the array
    int size = n;
    //your code goes here
    int *nums = new int[size];

    
    int max;
    for(int i=0; i<size; i++) {
        if(nums[i]<max)
            max = nums[i];
    }
    cout << max << endl;
    
    return 0;
}
