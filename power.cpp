#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
string power(int x) {
    if((x>INT_MAX)||(x<INT_MIN))
    return "false"; 
    else if(x&1==1)
    return "false";
    else{
        int f=0;
        while(pow(2,f)<=x){
            if(pow(2,f)==x)
            return "true";
            f+=1;
        }
        return "false";
    }
}

int main(){
    int size; // LOOP HOW MANY TIMES
    cin>>size;
    for(int i=size;i>0;i--){
        int x; cin>>x; cout<<power(x)<<endl;}
}
