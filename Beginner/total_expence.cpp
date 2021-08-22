#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int q;
        long double price,answer = 0.000000;
        cin>>q>>price;
        if(q>1000)
        {
            answer = q*(price*0.9);
            
            cout<<fixed<<setprecision(6)<<answer<<endl;
            
        }
        else
        {
            answer = price * q;
            cout<<fixed<<setprecision(6)<<answer<<endl;
        }
    }
	// your code goes here
	return 0;
}
