#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string>sentence;
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
			if(sen[j].length()>i){  //不用 >=  因為是索引值 
				cout<<sen[j][i];
			}else{
				break;
			}
		}
		cout<<endl;
	}
}
