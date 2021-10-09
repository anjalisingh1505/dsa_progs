#include <iostream>
#include <cstring>
using namespace std;
 
char s2[1010];
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(s2,0,sizeof s2);
		int n;
		cin>>n;
		int r1,p1,s1;
		cin>>r1>>p1>>s1;
		string st;
		cin>>st;
		int win=0;
		for(int i=0;i<st.size();i++)
		{
			if(st[i]=='R')
			{
				if(p1>0)
				{
					p1--;
					s2[i]='P';
					win++;
				}
			}
			else if(st[i]=='S')
			{
				if(r1>0)
				{
					r1--;
					s2[i]='R';
					win++;
				}
			}
			else if(st[i]=='P')
			{
				if(s1>0)
				{
					s1--;
					s2[i]='S';
					win++;
				}
			}
		}
		if(win>=(n+1)/2)
		{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++)
			{
				if(!s2[i])
				{
					if(r1>0)
				{
					s2[i]='R';
					r1--;
				}
				else if(p1>0)
				{
					s2[i]='P';
					p1--;
				}
				else if(s1>0)
				{
					s2[i]='S';
					s1--;
				}
				}
				
			}
			cout<<s2<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
