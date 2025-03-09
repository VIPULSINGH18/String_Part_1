

#include<iostream>
using namespace std;

bool isEqual(int freq1[],int freq2[]){
	for(int i=0;i<26;i++){
		if(freq1[i]!=freq2[i]){
			return false;
		}
	}
	return true;
}


bool Permutation(string s1,string s2){
	int freq[26]={0};
	for(int i=0;i<s1.length();i++){
		freq[s1[i]-'a']++;
		
	}
	
	int wind_size= s1.length();
	
	for(int j=0;j<s2.length();j++){
		int wind_freq[26]={0};
		int wid_idx=0;
		int idx=j;
		

	
	while(wid_idx<wind_size && idx<s2.length()){
		wind_freq[s2[idx]-'a']++;
		wid_idx++;idx++;
		
		
		}
		
		if(isEqual(freq,wind_freq)){
			return true;
	}
	
}
return false;
	
	
	
}

int main(){
	string s1= "abc";
	string s2= "abbcbaddd";
	bool result=Permutation(s1,s2);
	cout<<result;
	return 0;
}
