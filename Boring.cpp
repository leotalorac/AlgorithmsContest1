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
	string toadd = "";
	bool pal;
	int pos;
	cin >>word;
    int n = word.size()-1;
	pos = n - 1;
    
	for (int i = 0; i <= n; i++) { 
		
		pal = true;
		for (int j = i; j <= i + (n - i) / 2; j++) {
            //cout<<word[j]<<" "<<word[n - (j - i)]<<endl;
			if (word[j] != word[n - (j - i)]) {
				pal = false;
				break;
			}
		}
		
		if (pal) {
			pos = i;
			break;
		}
	}
	
	for (int i = pos - 1; i >= 0; i--){ 
		toadd += word[i];
	}
    cout<<word<<toadd<<endl;
    return 0;
}