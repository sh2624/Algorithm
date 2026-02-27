#include <iostream>
using namespace std;

class Queue
{
private:
    int data[10001];          // 큐 용량
    int head = -1, tail = -1; // 스택의 시작과 끝

public:
    void push(int x)
    {
        data[++tail] = x; // 큐의 끝에 요소 추가
    }
    int pop()
    {
        if (empty()) // 비어있을 때
            return -1;
        else
            return data[++head]; // 큐의 맨 앞 요소 제거
    }
    int size()
    {
        return tail - head; // 현재 요소 개수
    }
    bool empty()
    {
        if (head == tail) // 비어있을 경우
            return true;
        else
            return false;
    }
    int front()
    {
        if (empty()) // 비어있을 때
            return -1;
        else
            return data[head + 1]; // 맨 앞 요소 반환
    }
    int back()
    {
        if (empty()) // 비어있을 때
            return -1;
        else
            return data[tail]; // 맨 뒤 요소 반환
    }
};

int main()
{
    Queue q;
    int t;
    cin >> t; // 테스트 케이스 입력

    for (int i = 0; i < t; i++)
    {
        string cmd;
        cin >> cmd; // 명령어 입력

        // 각 명령어에 따른 결과 출력
        if (cmd == "push")
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (cmd == "pop")
            cout << q.pop() << endl;
        else if (cmd == "size")
            cout << q.size() << endl;
        else if (cmd == "empty")
            cout << q.empty() << endl;
        else if (cmd == "front")
            cout << q.front() << endl;
        else
            cout << q.back() << endl;
    }

    return 0;
}