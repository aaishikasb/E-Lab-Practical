#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100], sum=0.0, ave;
    cin >> n;
    for(i = 0; i < n; ++i) {
        cin >> num[i];
        sum += num[i];
    }
    ave = sum / n;
    cout << ave;
    return 0;
}