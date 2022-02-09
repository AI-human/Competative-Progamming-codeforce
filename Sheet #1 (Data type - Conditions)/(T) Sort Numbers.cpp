#include <iostream>
 
using namespace std;
 
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
        
    if (a>=b && b>=c && a>=c){
        cout<<c<<"\n"<<b<<"\n"<<a<<"\n\n"<<a<<"\n"<<b<<"\n"<<c;
    }
    else if (a>=c && c>=b && a>=b){
        cout<<b<<"\n"<<c<<"\n"<<a<<"\n\n"<<a<<"\n"<<b<<"\n"<<c;
    }
    else if (b>=a && a>=c && b>=c){
        cout<<c<<"\n"<<a<<"\n"<<b<<"\n\n"<<a<<"\n"<<b<<"\n"<<c;
    }
    else if (b>=c && c>=a && b>=a){
        cout<<a<<"\n"<<c<<"\n"<<b<<"\n\n"<<a<<"\n"<<b<<"\n"<<c;
    }
    else if (c>=b && b>=a && c>=a){
        cout<<a<<"\n"<<b<<"\n"<<c<<"\n\n"<<a<<"\n"<<b<<"\n"<<c;
    }
    else if (c>=a && a>=b && c>=b) {
        cout<<b<<"\n"<<a<<"\n"<<c<<"\n\n"<<a<<"\n"<<b<<"\n"<<c;
    }
    return 0;
}