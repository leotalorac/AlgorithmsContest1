#include <bits/stdc++.h>

using namespace std;

void reverse(string str) 
{ 
   for (int i=str.length()-1; i>=0; i--) 
      cout << str[i];  
} 
int main(){
    //read the variable of the text
    string word;
    cin>>word;
    int pos = 0;
    int n = word.length();
    string toadd ="";
    string toadd2 ="";
    for (int i = n-1; i>0; i--)
    {
        //cout<<word[pos]<<" "<<word[i]<<" "<<i<<"\n";
        if(word[pos] != word[i]){
            //cout<<"diferent"<<endl;
            i=n;
            if(toadd2 == "")
                toadd = word[pos]+toadd;
            else{
                toadd = word[pos]+toadd2+toadd;
                toadd2="";
            }
        }else{
            toadd2 = word[pos]+toadd2;
        }
        if(pos==(n-1)){
            break;
        }
        pos++;
    }
    cout<<(word+toadd);
    return 0;
}