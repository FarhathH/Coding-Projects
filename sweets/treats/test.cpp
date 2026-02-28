#include <iostream>
using namespace std;

int main() {
    int n;
    int size = n;
    int no1, no2, no3, no4;
    cin >> n; //size of the array
    //your code goes here
    cin >> no1, no2, no3, no4;
    int * nums = new int[size];
    no1 = nums[0];
    no2 = nums[1];
    no3 = nums[2];
    no4 = nums[3];

    

    int max = nums[0];
    for(int i=0; i<n; i++) {
        if(nums[i]>max)
            max = nums[i];
    }
    cout << max;
    return 0;
}