
#include <iostream>
const int maxn = 30;
using namespace std;
int a[maxn];

int main()
{
    a[1] = 3;
    a[2] = 8;
    int N;
    cin >> N;

    for (int i = 3; i <= N;i++) {
        a[i] = (a[i-2] + a[i -1])*2;
    }
    cout << a[N];
}
