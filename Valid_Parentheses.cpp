#include <iostream>
#include <stack>
using namespace std;
bool isvalid(string value){
	stack<char> st;
	for(int i=0;i<value.length();i++){
		char v = value[i];
		if(v == '(' || v == '{' || v =='['){
			st.push(v);
		}else if(st.empty()){
			return false;
		}else if(v == ')' && st.top() == '('  || v == '}' && st.top() == '{' || v == ']' && st.top() == '[' ){
					st.pop();
		}else{
			return false;
		}
	}
	return st.empty();
}
int main(){
	string value;
	cout<<"Enter your Pair of Parenthesis"<<endl;
	cin>>value;
	if(isvalid(value)){
		cout<<"Closing of every bracket is there"<<endl;
	}else{
		cout<<"Closing of every bracket is not there"<<endl;
	}
}
