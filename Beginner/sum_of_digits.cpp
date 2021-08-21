#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int s=0,n;
        cin>>n;
        while(n!=0)
        {
            s=s+n%10;
            n=n/10;
        }
        cout<<s<<endl;
    }
	return 0;
}
