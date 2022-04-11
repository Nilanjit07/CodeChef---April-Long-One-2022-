#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int m,n;
        cin>>m>>n;
        if(m==1 || n==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            long long int x = gcd(m,n);
            if(x!=1)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
    }
	return 0;
}
