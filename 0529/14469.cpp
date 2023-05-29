#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

int main()
{
    int n;
    cin >> n;

    int a, b; // 소 도착, 검문 시간

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(pair<int, int>(a, b));
    }

    // 입장시간순서로 배열 정렬
    sort(v.begin(), v.end());

    // for (int i = 0; i < n; i++)
    // 	cout << v[i].first << " " << v[i].second << endl;

    int total = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // 지금까지 걸린 시간이 지금 도착한 소의 시간보다 길다면
        if (total > v[i].first) // 지금 도착한 소의 검문시간만 합치기
            total += v[i].second;
        else
            total = v[i].first + v[i].second;
    }

    cout << total;
}