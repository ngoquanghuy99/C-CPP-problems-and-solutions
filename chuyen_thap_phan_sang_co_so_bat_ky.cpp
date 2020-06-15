#include <iostream>
#include <cstring>
using namespace std;
 
void chuyenDoiCoSo(char s[], int n) {
 
	int coSo = 0, soDu = 0;
	cin >> coSo;
 
	int i = 0;
	while (n > 0) {
		soDu = n % coSo;
		if (soDu < 10) {
			s[i] = '0' + soDu;        
		}
		else {
			s[i] = 'A' + (soDu - 10);    
		}
		i++;
		n = n / coSo;
	}
        s[i] = '\0';
	for (int i = strlen(s) - 1; i >= 0; i--) {
		cout << s[i];
	}
}
 
int main(int argc, char const *argv[]) {
 
	int n = 0;
	char s[100000];
	cin >> n;
 
	chuyenDoiCoSo(s, n);
 
	return 0;
}
