#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string r;
	string t;
    cout << "Input text: ";
	cin >> t;
    cout << "Reversed text: " << func1(t) << "\n";
	r = func1(t);
	if(func2(t)==func2(r) and func3(t)==func3(r)){
    	cout << "Palindrome: " << "Yes";
	} else{
		cout << "Palindrome: " << "No";
	}
    return 0;
}
