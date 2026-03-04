#include <iostream>
using namespace std;

int arr1[20000001] = {0}; // 전체 배열 생성 (음수 대비)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; // 가지고 있는 숫자 카드의 개수 입력
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;             // 숫자 카드에 적혀있는 정수 입력
        arr1[num + 10000000]++; // 배열에 저장 (음수 대비)
    }

    int m;
    cin >> m; // 정수 입력
    for (int j = 0; j < m; j++)
    {
        int num;
        cin >> num;                          // 몇 개 가지고 있는 숫자 카드인지 구해야 할 정수 입력
        cout << arr1[num + 10000000] << " "; // 해당 숫자가 배열에서 몇 번 카운트됐는지 출력
    }

    return 0;
}