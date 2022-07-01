//8.	Write a program to convert an Infix expression into its equivalent Postfix expression.
#include<bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}
void infixToPostfix(string s)
{
    stack<char> st;
    st.push('L');
    string ans;
    for(int i = 0; s[i]; i++)
    {

        if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
        ans+=s[i];


        else if(s[i] == '(')

        st.push('(');


        else if(s[i] == ')')
        {
            while(st.top() != 'L' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
               ans += c;
            }
            if(st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }
        else{
            while(st.top() != 'L' && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                ans += c;
            }
            st.push(s[i]);
        }
    }
    while(st.top() != 'L')
    {
        char c = st.top();
        st.pop();
        ans += c;
    }
    cout <<"PostFix: "<< ans << endl;
}
int main()
{
    string s;
    cout<<"Infix: ";
    cin>>s;
    infixToPostfix(s);
    return 0;
}
//C191101
//Sayed Tahsinoor Rahman
