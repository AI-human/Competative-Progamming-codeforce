#include <iostream>
 
using namespace std;
 
int main()
{
    char X;
    cin>>X;
    if (X>=97 && X<=122){
        X=X-32;
        cout<<X;
    }
    else{
        X=X+32;
        cout<<X;
    }
    return 0;
}