#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool match(char fist,char last)
{
	if(fist == '(' && last == ')') 
		return 1;
	else return 0;
}
bool IsParantheses(string X)
{
	stack<char>  Str;
	for(int i =0;i<X.length();i++)
	{
		if(X[i] == '(' )
			Str.push(X[i]);
		else if(X[i] == ')' )
		{
			if(Str.empty() || !match(Str.top(),X[i]))
				return false;
			else
				Str.pop();
		}
	}
	if (Str.empty()) return true;
	else 
		return false;
}

int main()
{
	string s;
	cin>>s;
	if(IsParantheses(s))
		cout<<"True";
	else
		cout<<"False";
}
