#include<bits/stdc++.h>
using namespace std;
int main(){
	string str,cp;
	cin>>str;
	cp = str;
//	using function
	str = cp;
	cout<<"1. Using Function: ";
	reverse(str.begin(),str.end());
	if(str.compare(cp) == 0)
		cout<<"strig is palindrome"<<endl;
	else
		cout<<"strig is not palindrome"<<endl;
// Check character starting from two corner
	str = cp;
	bool flag = true;
	cout<<"2. Check character starting from two corner: ";
	for (int i = 0; i < str.length() / 2; i++){
		if(str[i] != str[str.length() - i - 1]){
			flag = false;break;}
	}
	if(flag)
		cout<<"strig is palindrome"<<endl;
	else
		cout<<"strig is not palindrome"<<endl;
	return 0;
}
