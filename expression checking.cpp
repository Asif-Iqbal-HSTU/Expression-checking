#include<bits/stdc++.h>
using namespace std;

int main()
{
    string expression;
    stack<char> st;
    cin >> expression;

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

            cout << "\njaha peyechi: " << chGot << endl;

            if(st.empty())
            {
                cout << "\nINVALID EXPRESSION!!! : opening nai (prothomei vul)";
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
                        cout << "\nINVALID EXPRESSION!!! : ) er opening nai";
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
                        cout << "\nINVALID EXPRESSION!!! : } er opening nai";
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
                        cout << "\nINVALID EXPRESSION!!! : ] er opening nai";
                    }
                }
            }
        }
    }

    if(!st.empty())
    {
        cout << "\nINVALID EXPRESSION!!! : stack khali hoy nai : karo na karo closing nai";
    }
    else
    {
        cout << "\nThe expression is correct";
    }
}
