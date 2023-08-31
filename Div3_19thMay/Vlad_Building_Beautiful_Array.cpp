#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool find(vector<int>a){
    if(a[0]%2==0){
            for(int k=1;k<a.size();k++){
                if(a[k]%2!=0)    
                    return false;
            }
            return true;
        }
        
        else
            return true;
}

int main()
{
    int test, n1;
    cin >> test;
    for(int i=0;i<test;i++){
        cin >> n1;
        vector<int>a(n1);
        for(int j=0;j<n1;j++){
            cin >> a[j];
        }
        sort(a.begin(), a.end());

        if(find(a))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        }
    return 0;
}