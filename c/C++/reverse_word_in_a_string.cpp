#include<iostream>
#include<algorithm>
using namespace std;

void rev(string &s, int st,int e){
    while(st<=e){
        swap(s[st],s[e]);
        st++;
        e--;
    }
}
int main(){
    string s="the sky is";
    int n=s.size();
    rev(s,0,n-1);
   
    int st=0;
    for(int i=0;i<=n;i++){
        if ( i == n || s[i] == ' ') {
            rev(s, st, i - 1);
            st = i + 1;
        }
    }

    cout << s << endl;
    return 0;
}