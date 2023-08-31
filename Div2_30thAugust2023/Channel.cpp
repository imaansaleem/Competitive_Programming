/* Link:
https://codeforces.com/contest/1863/problem/A */

#include<bits/stdc++.h>

using namespace std;

string decision(vector<char>x, int n, int a, int q){
    int countplus = a;
    for(int i=0;i<x.size();i++){        
        if(x[i]=='+'){
            countplus++;
            a++;
        }

        if(a==n)
            return "YES\n";

        if(x[i]=='-')
            a--;
    }

    if(countplus >= n)
        return "MAYBE\n";

    return "NO\n";
    
}

int main()
{
    int testcases, n, a, q;
    cin >> testcases;
    for(int i=0;i<testcases;i++){
        cin >> n;
        cin >> a;
        cin >> q;
        vector<char>x(q);
        for(int j=0;j<q;j++){
            cin >> x[j];
        }
        cout << decision(x,n,a,q);
    }
    return 0;
}


