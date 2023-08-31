#include<stdio.h>
#include<iostream>
#include <unordered_set>

using namespace std;

int find(string str){
    int count = 0;
    unordered_set<string> a;
    string s;
    for(int i=0;i<str.size()-1;i++){
        s = str[i];
        s += str[i+1];
        if(!a.count(s)){
            a.insert(s);
            count++;
        }
    }
    return count;
}

int main()
{
    int test = 1, num = 4, count;
    string str;
    cin >> test;
    for(int i=0;i<test;i++){
        cin >> num;
        cin >> str;
        count = find(str);
        cout << count << endl;
    }
    return 0;
}
