#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; // 테스트 케이스 입력

    string n;
    for (int i = 0; i < t; i++)
    {
        int v = 0;
        bool isVPS = true;

        cin >> n; // 괄호 문자열 입력
        for (int j = 0; j < n.length(); j++)
        {
            // '('면 +1, ')'면 -1
            if (n[j] == '(')
                v++;
            else
            {
                v--;
                if (v < 0) // ')'가 더 많아지면 즉시 탈락
                {
                    isVPS == false;
                    break;
                }
            }
        }
        if (isVPS && v == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}