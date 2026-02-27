#include <iostream>
using namespace std;

int main()
{
    // 각 시간 입력
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // 거리 계산에 따른 결과 출력
    if ((a + c) > (b + d))
        cout << "Yongdap";
    else if ((a + c) < (b + d))
        cout << "Hanyang Univ.";
    else
        cout << "Either";
}