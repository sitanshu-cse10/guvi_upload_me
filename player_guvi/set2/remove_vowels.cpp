#include <iostream>
using namespace std;
void remove_vowels(char s[]) {
	if (s[0] == '\0') {
		return;
	}

	if (s[0] != 'a' && s[0] != 'A' && s[0] != 'e' && s[0] != 'E' &&s[0] != 'i' && s[0] != 'I' &&s[0] != 'o' &&s[0] != 'O' && s[0] != 'u' &&s[0] != 'U') 
    {
		remove_vowels(s + 1);
	} else {
		int i = 1;
		for (; s[i] != '\0'; i++) {
			s[i - 1] = s[i];
		}
		s[i - 1] = s[i];
		remove_vowels(s);
	}
}


int main() {
    char s[100000];
    cin>>s;
    remove_vowels(s);
    cout<<s;
}
