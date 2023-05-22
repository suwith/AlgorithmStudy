#include <iostream>
using namespace std;

// 백준 1094번 막대기

int chop(int x)
{
    int init = 64; // 처음 막대기 길이
    int cnt = 0;   // 붙이는 막대기 갯수
    while (x != 0)
    {  
        if (x >= init)
        {
            // 현재 막대기 길이가 가지고 싶은 막대기보다 크다면 자르기
            x -= init;
            cnt++;
        }
        else
        {
            // 현재 막대기 길이보다 더 작은 막대기가 필요하다면
            init /= 2;
        }
    }
    return cnt;
}

int main()
{
    int x; // 가지고 싶은 막대기 길이
    cin >> x;
    cout << chop(x);
    
	return 0;
}