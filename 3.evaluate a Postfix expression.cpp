//7.	Write a program to evaluate a Postfix expression.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<int>v;
    cout<<"postfix: ";
    cin>>s;
    for(int i=0; s[i]; i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            v.push_back(s[i]-48);
        }
        else
        {
            int x=v.back();
            v.pop_back();
            int y=v.back();
            v.pop_back();
            if(s[i]=='+')
            {
                int z=x+y;
                v.push_back(z);
            }
            if(s[i]=='-')
            {
                int z=y-x;
                v.push_back(z);
            }
            if(s[i]=='*')
            {
                int z=x*y;
                v.push_back(z);
            }
            if(s[i]=='/')
            {
                int z=y/x;
                v.push_back(z);
            }
        }
    }
    cout<<v[0]<<endl;


}
