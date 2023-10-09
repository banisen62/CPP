// Sample Input 1:
// 2
// 4
// 6
// Sample Output 1:
// 2
// 2
// Explanation Of Sample Input 1:
// In the first test case, the square root of the given number 4 is 2.

// In the second test case, the square root of the given number 6 lies between 2 and 3, so the floor value is 2.
// Sample Input 2:
// 2
// 10
// 100
// Sample Output 2:
// 3
// 10



// Example 1:

// Input: num = 16
// Output: true
// Example 2:

// Input: num = 14
// Output: false


#include<climits>
#include<iostream>
#include<math.h>
#include <bits/stdc++.h> // for sort it has to be there.
using namespace std;

void square(long long int num){

    cout<<floor(sqrt(num));
}

bool perfectsq(long long int num){
    for(long long int i=0;i*i<=num;i++)
        if(i*i==num)
        return true;
    return false;
}
int main(){
    int size;
    cin>>size;
    for(;size>0;size--){
        int num;
        cin>>num;
        square(num);
        if(perfectsq(num))
            cout<<"  Perfect Square"<<endl;
            else
            cout<<"  Not Perfect Square"<<endl;

    }
    return 0;
}
