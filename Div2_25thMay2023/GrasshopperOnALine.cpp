#include<iostream>

using namespace std;


void solve(int x, int k){
    int temp = x;
    while(x%k==0){
        x--;
    }
    if(temp==x){
        cout << 1 << endl;
        cout << x << endl;
    }
    else{
        cout << 2 << endl;
        cout << x << ' ' << temp-x << endl;
    }
}

int main()
{
    int test, x, k;
    cin >> test;
    for(int i=0;i<test;i++){
        cin >> x;
        cin >> k;

        solve(x,k);
    }
    return 0;
}