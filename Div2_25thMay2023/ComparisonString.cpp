#include<bits/stdc++.h>

using namespace std;


int solve(string a){
    int count = 2;
    unordered_set<int> s;
    int v1, v2;
    if(a[0]=='>'){
        v1 = 998;
        s.insert(v1+1);
        s.insert(v1);
    }
    else{
        v1 = 2;
        s.insert(v1-1);
        s.insert(v1);
    }

    for(int i=1;i<a.size();i++){
        if(a[i]=='<'){
            v1 = v1+1;
            if(!s.count(v1)){
                count++;
                s.insert(v1);
            }
        }
        else{
            v1 = v1-1;
            if(!s.count(v1)){
                count++;
                s.insert(v1);
            }
        }
    }
    return count;
}

int main()
{
    int test, x, k, c;
    cin >> test;
    string a;
    for(int i=0;i<test;i++){
        cin >> x;
        cin.ignore();
        getline(cin,a);
        c = solve(a);
        cout << c << endl;
    }
    return 0;
}
