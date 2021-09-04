#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t,c;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        while(n!=0)
        {
            if(n%10==4)
            {
                c++;
            }
            n=n/10;
        }
        cout<<c<<endl;
    }

	// your code goes here
	return 0;
}
