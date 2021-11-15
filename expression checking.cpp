#include<bits/stdc++.h>
using namespace std;

int main()
{
    string expression;
    stack<char> st;
    getline(cin, expression);

    for(int i = 0; i < expression.size(); i++)
    {
        char ch = expression.at(i);
        if(ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }

        if(ch == ')' || ch == '}' || ch == ']')
        {
            char chGot = expression.at(i);

            if(st.empty())
            {
                cout << "\nINVALID EXPRESSION!!!\nA closing parenthesis/brace/bracket does not have its corresponding opening parenthesis/brace/bracket";
                return 0;
            }
            else
            {
                char chStack = st.top();
                if(chGot == ')')
                {
                    if(chStack == '(')
                    {
                        st.pop();
                    }

                    if(chStack != '(')
                    {
                        cout << "\nINVALID EXPRESSION!!!\nA closing parenthesis does not have its corresponding opening parenthesis";
                        return 0;
                    }
                }

                else if(chGot == '}')
                {
                    if(chStack == '{')
                    {
                        st.pop();
                    }

                    if(chStack != '{')
                    {
                        cout << "\nINVALID EXPRESSION!!!\nA closing brace does not have its corresponding opening brace";
                        return 0;
                    }
                }

                else if(chGot == ']')
                {
                    if(chStack == '[')
                    {
                        st.pop();
                    }

                    if(!chStack == '[')
                    {
                        cout << "\nINVALID EXPRESSION!!!\nA closing bracket does not have its corresponding opening bracket";
                        return 0;
                    }
                }
            }
        }
    }

    if(!st.empty())
    {
        cout << "\nINVALID EXPRESSION!!!\nAn opening parenthesis/brace/bracket does not have its corresponding closing parenthesis/brace/bracket";
        return 0;
    }
    else
    {
        cout << "\nThe expression is correct";
    }
}
