#include<bits/stdc++.h>
using namespace std;
int main(){
	string str,cp;
	cin>>str;
	cp = str;
//	directly print
	cout<<"1. Directly Print: ";
	for(int i=str.length()-1;i>-1;i--)
		cout<<str[i];
	cout<<endl;
//	using function
	str = cp;
	cout<<"2. Using Function: ";
	reverse(str.begin(),str.end());
	cout<<str<<endl;
// Swap character starting from two corners 
	str = cp;
	cout<<"3. Swap character starting from two corners: ";
	for (int i = 0; i < str.length() / 2; i++) 
        swap(str[i], str[str.length() - i - 1]);
	cout<<str<<endl; 
	return 0;
}
