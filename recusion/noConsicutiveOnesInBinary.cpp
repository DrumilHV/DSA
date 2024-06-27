#include <bits/stdc++.h>
using namespace std;

// int f(int n){
//     if(n<=2){
//         return 3;
//     }
//     if(n==3)return 5;
//     return f(n-1)+f(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     int sum = 0;
//     cout<<f(n);
//     return 0;
// }
// int c = 0;
// string makeStrings(int n , char s[], int i){

//     if(i==n){
//         for(int i =0;i<n;i++){
//             cout<<s[i];
//         }
//         cout<<endl;
//         c++;
//         return s;
//     } 
//     if(i>0 && s[i-1]=='1'){
//         s[i] = '0';
        
//         return makeStrings(n, s, i+1);
//     }
//     s[i] = '0';
//     makeStrings(n, s, i+1);
//     s[i] = '1';
//     return makeStrings(n, s, i+1);   

// }

// int main(){
//     int n;
//     cin>>n;
//     char s[n];
//     s[0] = '0';
//     makeStrings( n, s, 0);
//     s[0] = '1';
//     makeStrings( n, s, 0);
//     cout<<c<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int c= 0;
void All_Binary_Strings(string str,int num)
{
	int len=str.length();
	if(len==num)
	{
        c++;
		cout<<str<<" ";
		return;
	}
	else if(str[len-1]=='1')
		All_Binary_Strings(str+'0',num);
	else
	{
		All_Binary_Strings(str+'0',num);
		All_Binary_Strings(str+'1',num);
	}
}

void print(int& num)
{
	string word;
	word.push_back('0');
	All_Binary_Strings(word,num);
	word[0]='1';
	All_Binary_Strings(word,num);
}

//driver's code
int main()
{
	int n;
    cin>>n;
	print(n);
    cout<<c<<endl;
	return 0;
}
