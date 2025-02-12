//
//
//#include<iostream>
//#include<vector>
//using namespace std;
// void Reverse_Character_Array(vector<char>&vec,int st,int end){
// 	while(st<end){
//	 swap(vec[st],vec[end]);
// 	st++;
// 	end--;
// }
//}
//
//int main(){
//	char a[]={'a','b','c','d'};
//	int n= sizeof(a)/sizeof(a[0]);
//	vector<char>vec(a,a+n);
//	Reverse_Character_Array(vec,0,n-1);
//	for(char x:vec){
//		cout<<x<<" ";
//		
//	}
//	return 0;
//}
//
//
//


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string s= "Hello @ 12345";
	reverse(s.begin(),s.end());
	cout<<s;
	cout<<endl;
	return 0;
}
