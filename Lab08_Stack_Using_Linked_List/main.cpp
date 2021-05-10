#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"

//Name: Mahbuba Rahman Hridi
//ID: 2013373642
//Course: CSE225lab Section:10
//Date: 11-04-2021

using namespace std;

int precedence(char op)
{
    if(op == '+'||op == '-')
        return 1;
    if(op == '*'||op == '/')
        return 2;
    return 0;
}

double applyOp(double a, double b, char op)
{
    switch(op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    }
}

double evaluate(string tokens)
{
    int i;
    StackType <double> values;
    StackType <char> ops;
    for(i = 0; i < tokens.length(); i++)
    {
        if(tokens[i] == ' ')
            continue;
        else if(tokens[i] == '(')
        {
            ops.push(tokens[i]);
        }
        else if(isdigit(tokens[i]))
        {
            double val =0;
            while(i < tokens.length() &&
                    isdigit(tokens[i]))
            {
                val = (val*10.0) + (tokens[i]-'0');
                i++;
            }
            values.push(val);
            i--;
        }
        else if(tokens[i] == ')')
        {
            while(!ops.IsEmpty() && ops.top() != '(')
            {
                double val2 = values.top();
                values.pop();
                if(values.IsEmpty())
                {
                    cout<<"Invalid expression"<<endl;
                    return 0;
                }
                double val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }
            if(!ops.IsEmpty())
                ops.pop();
        }
        else
        {
            while(!ops.IsEmpty() && precedence(ops.top())
                    >= precedence(tokens[i]))
            {
                double val2 = values.top();
                values.pop();

                if(values.IsEmpty())
                {
                    cout<<"Invalid expression"<<endl;
                    return 0;
                }
                double val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }
            ops.push(tokens[i]);
        }
    }
    while(!ops.IsEmpty())
    {
        double val2 = values.top();
        values.pop();

        if(values.IsEmpty())
        {
            cout<<"Invalid expression"<<endl;
            return 0;
        }
        double val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(applyOp(val1, val2, op));
    }
    return values.top();
}

int main()
{
    cout << evaluate("10 + 3 * 5 / (16 - 4)")<< endl;
    cout << evaluate("(5 + 3) * 12 / 3")<< endl;
    cout << evaluate("3 + 4 / (2 - 3) * / 5")<< endl;
    cout << evaluate("7 / 5 + (4 - (2) * 3")<< endl;
    return 0;
}
