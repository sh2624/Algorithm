#include <iostream>
using namespace std;

class Stack
{
private:
    int data[10001];
    int topIndex = -1;

public:
    void push(int x)
    {
        data[++topIndex] = x;
    }

    int pop()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            return data[topIndex--];
        }
    }

    int size()
    {
        return topIndex + 1;
    }

    bool empty()
    {
        if (topIndex == -1)
            return 1;
        else
            return 0;
    }

    int top()
    {
        if (empty())
            return -1;
        else
            return data[topIndex];
    }
};

int main()
{
    Stack s;
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "push")
        {
            int num;
            cin >> num;
            s.push(num);
        }
        else if (cmd == "pop")
        {
            cout << s.pop() << endl;
        }
        else if (cmd == "size")
        {
            cout << s.size() << endl;
        }
        else if (cmd == "empty")
        {
            cout << s.empty() << endl;
        }
        else
        {
            cout << s.top() << endl;
        }
    }

    return 0;
}