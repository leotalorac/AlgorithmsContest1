#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
    
    while (true)
    {
        int l;
        cin>>l;
        if(l==0)
            break;
        string street;
        cin>>street;
        int strd = -1;
        int strr = -1;        
        int dis = -1;
        int dis2;
        for (int i = 0; i < street.length(); i++)
        {
            if(street[i] == 'R'){
                if(strd!=-1){
                    dis2 = i-strd;
                    if(dis2<dis || dis ==-1){
                        dis = dis2;
                    }
                }
                strr = i;
            }else if(street[i] == 'D'){
                if(strr!=-1){
                    dis2 = i-strr;
                    if(dis2<dis || dis ==-1){
                        dis = dis2;
                    }
                }
                strd = i;
            }else if(street[i] == 'Z'){
                dis=0;
                break;
            }
        }
        cout<<dis<<endl;
    }    
    return 0;
}