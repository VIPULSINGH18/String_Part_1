// this code is used to check whether the string is palindrome or not using function and boolean concept

//#include<iostream>
//using namespace std;
//
//		bool isAlphaNum(char ch){
//		if((ch>='0' && ch<='9') || (tolower (ch)>='a' && tolower (ch)<='z')){ // we use tolower to change into lower case
//			return true;
//		}
//		else{
//			return false;
//		}
//	}
//	
//	bool String_pal(string str,int st,int end){
//	
//	while(st<end){
//	
//	if(!isAlphaNum(str[st])){
//		st++;
//	}
//	if(!isAlphaNum(str[end])){
//		end--;
//	}
//	if(tolower(str[st])!= tolower (str[end])){
//		return false;
//	}
//	
//	st++;
//	end--;
//	
//	
//}
//
//return true;
//
//}
//
//int main(){
//	string s= "abc12cba";
//	int n= s.length();
//	int result=String_pal(s,0,n-1);
//	cout<<result;
//	cout<<endl;
//	return 0;
//	
//
//}




// to check whether the string is palindrome or not using reverse function


//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//string pal(string s){
//	reverse(s.begin(),s.end());
//	return s;
//}
//
//int main(){
//	string a = "aba";
//	string result=pal(a);
//	if(a==result){
//		cout<<"Palindrome";
//	}
//	else{
//		cout<<"Not palindrome";
//	}
//	return 0;
//	
//}




//to remove all the occurence of substring from string

//
//#include<iostream>
//using namespace std;
//string Remove(string s,string part){
//	while(s.find(part)<s.length() && s.length()>0 ){
//	
//	s.erase(s.find(part),part.length());
//	return s;
//}
//}
//int main(){
//	string a="aabbccdd";
//	string p= "bbc";
//	string result=Remove(a,p);
//	cout<<result;
//	return 0;
//}
//






