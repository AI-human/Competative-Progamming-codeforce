#include <iostream>
 
using namespace std;
 
int main()
{
    int A, B;
    char X;
    cin>>A>>X>>B;
    if (X=='+'){
        cout<<A+B;
    }
    else if(X=='-'){
        cout<<A-B;
    }
    else if(X=='*'){
        cout<<A*B;
    } 
    else{
        cout<<A/B;
    }
    return 0;
}