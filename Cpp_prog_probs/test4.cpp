// 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
// 1. 左括号必须用相同类型的右括号闭合。
// 2. 左括号必须以正确的顺序闭合。
// 注意空字符串可被认为是有效字符串。
// "()": true  "()[]{}": true  "(]": false  "([)]": false  "{[]}": true

# include <iostream>
# include <string>
# include <stack>
# include "main.h"
using namespace std;

int test4()
{
    string s;
    getline(cin, s);

    stack<char> tmp;
    int flag = 0;
    for (auto& i : s)
    {
        if (i == '(' || i == '[' || i == '{')
        {
            tmp.push(i);
        }
        else
        {
            if ((i == ')' and tmp.empty()) or
                (i == ']' and tmp.empty()) or
                (i == '}' and tmp.empty()) or 
                (i == ')' and tmp.top() != '(') or
                (i == ']' and tmp.top() != '[') or
                (i == '}' and tmp.top() != '{'))
            { 
                cout << "错误" << endl;
                flag = 1;
                break;
            }
            else
                tmp.pop();
        }
    }
    if (not flag)
    {
        if (tmp.empty())
            cout << "正确" << endl;
        else
            cout << "错误" << endl;
    }

    return 0;
}