#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include <map>

using namespace std;
int main()
{
    int test, num1, num2, n, n2;
    string str;
    cin >> test;
    for(int i=0;i<test;i++){
        vector<pair<int, int>> a;
        vector<pair<int, int>> a1;
        cin >> num1;
        cin >> num2;
        vector<int> b(num1);
        for(int i=0;i<num1;i++){
            cin >> n;
            a.push_back(make_pair(n,i));
        }

        sort(a.begin(), a.end());

        for(int i=0;i<num1;i++){
            cin >> n2;
            b[i] = n2;
        }
        sort(b.begin(), b.end());

        for(int i=0;i<num1;i++){
            a1.push_back(make_pair(a[i].second, b[i]));
        }
        sort(a1.begin(), a1.end());

        for(int i=0;i<a.size();i++){
            cout << a1[i].second << ' ';
        }
        cout << '\n';
    }
    return 0;
}
