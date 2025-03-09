#include<iostream>
#include<algorithm>
using namespace std;
string character(string s[],int n){
	
	int idx=0;
	for(int i=0;i<n;i++){
	int count=0;
	string ch=s[i];
	while(i<n && s[i]==ch){
	
		if(s[i]==ch){
			count++;i++;
		}
	}
	
	if(count==1){
		s[idx]==ch;
		idx++;
	}
	else{
		s[idx]=ch;
		idx++;
		string str= to_string(count);
		s[idx]=str;
		idx++:
	} 
	i--;

		 
		} 
		return s;
		
		
	}

int main(){
	string s[]={"a","a","b","b","c"};
	int n= sizeof(s)/4;
	string result=character(s,n);
	for(int j=0;j<n;j++){
		cout<<result[j];
	}
	return 0;
}

