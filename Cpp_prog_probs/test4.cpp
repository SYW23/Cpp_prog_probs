// ����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ������ж��ַ����Ƿ���Ч��
// 1. �����ű�������ͬ���͵������űպϡ�
// 2. �����ű�������ȷ��˳��պϡ�
// ע����ַ����ɱ���Ϊ����Ч�ַ�����
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
                cout << "����" << endl;
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
            cout << "��ȷ" << endl;
        else
            cout << "����" << endl;
    }

    return 0;
}