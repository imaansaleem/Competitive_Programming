#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int checkEven(int neg, int pos){
    if(neg == 0 || neg%2==0)
        return 0;
    else
        return 1;
}

int operations(int neg, int pos){
    int op=0;
    if(pos>neg)
        return checkEven(neg, pos);

    else{
        op = ceil((neg-pos)/2.0);
        neg = neg-op;
        op+=checkEven(neg,pos);
    }
    return op;
}

int main()
{
    int tests, num;
    cin >> tests;
    for(int i=0;i<tests;i++){
        cin.ignore();
        cin >> num;
        vector<int>a(num);
        int pos=0, neg=0;
        for(int j=0;j<num;j++){
            cin >> a[j];
            if(a[j]>0)
                pos++;
            else
                neg++;
        }

        int ans = operations(neg, pos);
        cout << ans << endl;
    }

    return 0;
}