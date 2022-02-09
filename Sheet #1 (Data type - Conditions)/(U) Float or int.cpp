#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
    double x;
    cin>>x;
    if (x == (int) x){
        cout<<"int "<<x<<endl;
    }
    else {
        cout<<"float "<<(int)x<<" "<<x -(int)x <<endl;
    }
 
    return 0;
}