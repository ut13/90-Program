#include<bits/stdc++.h>
using namespace std;
int reversDigits(int num) 
{ 
	static int rev_num = 0; 
	static int base_pos = 1; 
	if(num > 0) 
	{ 
	    reversDigits(num/10); 
	    rev_num += (num%10)*base_pos; 
	    base_pos *= 10; 
	} 
	return rev_num; 
} 
int main(){
	int num,cp,res=0;
	cin>>num;
	cp = num;
//	iterative print
	cout<<"1. Iterative: ";
	while(num > 0){
		res = res * 10 + num%10;
		num /= 10;
	}
	cout<<res<<endl;
//	Recursive function to reverse digits of num
	num = cp;
	cout<<"2. Recursive: "<<reversDigits(num)<<endl;
	return 0;
}
