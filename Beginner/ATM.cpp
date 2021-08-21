#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int x;
    double y;
    cin>>x>>y;
    if(x%5==0)
    {
        if(y>=(x+0.50))
        {
            cout<<y-x-0.50<<endl;
        }
        else
        {
            cout<<y;
        }
    }
    else
    {
        cout<<y<<endl;
    }
    
	return 0;
}