/* Ravi has been given two strings named string1 and string 2. He is supposed to find the minimum length substring of the string1 which contains all the characters of string2. Help him to find the substring

Input Format
The first line of the input contains string1. String1 can be a string containing spaces also. The second line of the input contains string2. String2 can be a string containing spaces also.

Constraints
Length of both the strings can be at max 10^4

Output Format
Output the substring in a single line. If no such substring exist then output "No String" without quotes

Sample Input
qwerty asdfgh qazxsw
qas
Sample Output
qazxs
Explanation
The substring "qazxs" is the shortest substring of s1 that contains all the characters of s2.
*/
#include<iostream>
#include<string>
#include <map> 

using namespace std;
int main() {
	string s, t;
	getline(cin,s);
	getline(cin,t);

	int n = s.size();
	int m = t.size();
	int l = 0, r ;
	int resl = -1, resr = 1e9;
	map<char,int> freq_s, freq_t;

	for(auto x: t) freq_t[x]++;

	for(r = 0; r < n; r++){
		freq_s[s[r]]++;
		bool good = true;

		for(auto x: freq_t){
			if((freq_s.count(x.first) == 0) || (freq_s[x.first] < x.second)){
				good = false;
				break;
			}
		}
		if(!good){
			continue;
		}
		while(l < n && l <= r && ( (freq_t.count(s[l]) == 0) || (freq_s[s[l]] > freq_t[s[l]]) )){
			freq_s[s[l]]--;
			if(freq_s[s[l]] == 0) freq_s.erase(s[l]);
			l++;
		}
		if((resr - resl + 1) > (r - l + 1)){
			resl = l;
			resr = r;
		}	
		
	}
	if(resl == -1 ){
		cout<<"No String";
	}else{
		cout<<s.substr(resl, resr - resl + 1);
	}
	return 0;
}