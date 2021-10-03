#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string>sen;
	string str;
	int maxlen=0;
	while(getline(cin,str)){
		if(str.length()>maxlen){
			maxlen=str.length();
		}else{
			int strlen=str.length();
			for(int i=1;i<=maxlen-strlen;i++){
				str.push_back(' ');
			}
		}
		sen.push_back(str);
	}
	for(int i=0;i<maxlen;i++){
		for(int j=sen.size()-1;j>=0;j--){
			if(sen[j].length()>i){   
				cout<<sen[j][i];
			}else{
				break;
			}
		}
		cout<<endl;
	}
}
