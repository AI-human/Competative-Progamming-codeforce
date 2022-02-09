#include <iostream>
 
using namespace std;
 
int main()
{
    long long N, M;
    cin>>N>>M;
    N%=10;
    M%=10;
    cout<<N+M<<endl;
    return 0;
}