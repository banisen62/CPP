// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M +1 ] .
// Now, in the given array/list, 'M' numbers are present twice and one number is present
// only once.
// You need to find and return that number which is unique in the array/list.

// Sample Input 1:
// 1
// 7
// 2 3 1 6 3 6 2
// Sample Output 1:
// 1
// Sample Input 2:
// 2
// 5
// 2 4 7 2 7
// 9
// 1 3 1 3 6 6 7 10 7
// Sample Output 2:
// 4
// 10


#include<climits>
#include<iostream>
#include<math.h>
using namespace std;
void elemination(){
    int arsize,ans=0;
    cin>>arsize;
    int arr[arsize];
    for(int i=0;i<arsize;i++)
    cin>>arr[i];
    for(int i=0;i<arsize;i++)
    ans^=arr[i];
    cout<<ans;

}
int main(){
    int size;
    cin>>size;  // LOOP HOW MANY TIMES
    for(;size>0;size--){
        elemination();
    }
}
