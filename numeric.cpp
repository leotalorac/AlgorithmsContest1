#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string word;
    cin>>word;
    string res = "-1";
    bool chan = false;
    int fin =0;
    int sta=0;
    for(int i =0;i<word.length();i++){
        if((word[i]>= 48 &&((int)word[i])<=57)){
            fin = i+1;
        }else{
            if(fin-sta != 0){
                res = word.substr(sta,fin);    
            }
            break;
        }
    }
    if(fin-sta != 0){
        res = word.substr(sta,fin);    
    }
    cout<<res<<endl;
    return 0;
}
