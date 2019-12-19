#include<bits/stdc++.h>
using namespace std;
// MORSE CODE DECODER AND ENCODER 

string morse[26] = { "._" , "_..." , "_._." , "_.." ,".",".._.","_ _ .","....",
                            "..","._ _ _","_._","._..","_ _","_.","_ _ _","._ _.","_ _._",
                            			"._.", "..." , "_" , ".._" , "..._" , "._ _" , "_.._" , "_._ _" , "_ _.." };
 
 void encode()
 {
 	string s;
 	cout<<"enter the message you want to be encoded in CAPS"<<endl;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		int z=s[i]-65;
		cout<<morse[z]<<"    ";
	}
	cout<<endl;
 }
 
 void decode()
 {
 	cout<<endl;
 	cout<<"enter the length of the message you want to decode"<<endl;
 	int len;
 	cin>>len;
 	vector <char> main;
 	for(int i=0;i<len;i++)
 	{
 		string literal;
 		int p=0;
 		char ch;
 		cout<<"enter the "<<i+1<<" term"<<endl;
 		cin>>literal;
 		for(int j=0;j<26;j++)
 		{
 			if(morse[j]==literal)
 			{
 				p=j;
 			}
 		}
 		ch=p+65;
 		main.push_back(ch);
 	}
 	// here is the decoded message //
 	cout<<"the decoded message is"<< endl;
 	for(int i=0;i<len;i++)
 	{
 		cout<<main[i]<<"  ";
 	}
 	
 }
 
int main(void)
{
cout<<"welcome to the morse code encoder/decoder"<<endl;
cout<<"press 1 for encode"<<endl;
cout<<"press 2 for decode"<<endl;

int n;
cin>>n;

switch(n)
{
	case 1 :
		encode();
		break;
		
	case 2:
		decode();
		break;
}

}


