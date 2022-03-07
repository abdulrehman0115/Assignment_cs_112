#include<iostream>
using namespace std;
char mystrucpy(char s1[], const char s2[]) {
	s1[100];
	s2[100];
	for (int i = 0; s2[i] != '\0'; i++) {
		s1[i] = s2[i];
	}
	return s1[100];
}
char Mystrncpy(char s1[100], const char s2[100], size_t n) {
	for (int i = 0; i < n && s2[100] != '\0'; i++) {
		s1[i] = s2[i];
	}
	return s1[100];

}
char Mystrcat(char s1[100], const char s2[100]) {
	
	int i;
	for (i = 0; s2[i] != '\0'; i++);
		for (int t = 0; s1[t] != '\0'; t++,i++) {
			s1[i] = s2[t];
		}
		s1[i] = '\0';

		return s1[100];
	

}
char Mystrncat(char s1[100], const char s2[100], size_t n) {
	
	int i;
	for (i = 0; s2[i] != '\0'; i++);
	for (int t = 0; t<n || s1[t] != '\0'; t++, i++) {
		s1[i] = s2[t];
	}
	s1[i] = '\0';

	return s1[100];
}
char input(char s1[100]) {
	cout << "Enter the Second String S1 : ";
	cin >> s1;
	return s1[100];
}
int Mystrcmp(const char s1[100], const char s2[100]) {
	int z = 0, x = 0;
	int y;
	for (int i = 0; s1[i] != '\0'; i++) {
		z++;
	}
	for (int j = 0; s2[j] != '\0'; j++) {
		x++;
	}
	if (z == x) {
		cout << "S1 is equal to S2" << endl;
		y = 0;
	}
	if (z < x) {
		cout << "S1 is less than S2" << endl;
		y = -1;
	}
	if (z > x) {
		cout << "S1 is greater than S2" << endl;
		y = 1;
	}
	return y;
}
int Mystrncmp(const char s1[100], const char s2[100], size_t n) {
	int z = 0, x = 0;
	int y;
	for (int i = 0;i<n && s1[i] != '\0'; i++) {
		z++;
	}
	for (int j = 0; s2[j] != '\0'; j++) {
		x++;
	}
	if (z == x) {
		cout << "S1 is equal to S2" << endl;
		y = 0;
	}
	if (z < x) {
		cout << "S1 is less than S2" << endl;
		y = -1;
	}
	if (z > x) {
		cout << "S1 is greater than S2" << endl;
		y = 1;
	}
	return y;
}
size_t Mystrlen(const char s[100]) {
	size_t y = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		y = y + 1;
	}
	 cout << "The length of string is : ";
	 return y;
}
char Mystrtok(char s1, const char s2[100]) {
	for (int i = 0; s2[i] != '\0'; i++) {
		if (s2[i] == s1)
			break;
		else
			return s2[i];
	}

}

int main() {
	char r1[100], r2[100];
	int r;
	cout << "Enter the string S2 : ";
	cin.getline(r2, 100);
	cout << "Press 1 : For Strucpy " << endl;
	cout << "Press 2 : For Strncpy " << endl;
	cout << "Press 3 : For Strcat " << endl;
	cout << "Press 4 : For Strncat " << endl;
	cout << "Press 5 : For Strcmp " << endl;
	cout << "Press 6 : For Strncmp " << endl;
	cout << "Press 7 : For Strtok " << endl;
	cout << "Press 8 : For Strlen " << endl;
	cout << "Press 9 : For Exist " << endl;
	cout << "Enter the number : ";
	cin >> r;

	
	switch (r) {
	case 1: mystrucpy(r1, r2);
		cout << "The New String is : ";
		for (int i = 0; r2[i] != '\0'; i++) {
			cout << r1[i];
		
		}
		break;
	case 2:int p;
		cout << "Enter the character you want to copy : ";
		cin >> p;
		cout << "The New String is : ";
		Mystrncpy(r1, r2,p);
		for (int i = 0; i<p; i++) {
			cout << r1[i];
		}
		break;
	case 3:
		input(r1);
		Mystrcat(r1, r2);
		cout << "The New String is : " << r1;
		break;
	case 4:int n;
		cout << "Enter the charater tou want to Append in string : ";
		cin >> n;
		input(r1);
		Mystrncat(r1, r2, n);
		cout << "The New String is : " << r1;
		break;
	case 5:
		input(r1);
		cout << "The Compares is : " << Mystrcmp(r1, r2);
		break;
	case 6: input(r1);
		int a;
		cout << "Enter the character from s1 you want to campare with s2 ";
		cin >> a;

		cout << "The campares is : " << Mystrncmp(r1, r2,a);
		break;
	case 7:
		char d;
		cout << "Enter the character you want to break : ";
		cin >> d;
		Mystrtok(d, r2);
		for (int i = 0; r2[i] != d; i++) {
			cout << r2[i];
		}
		
		break;
	case 8:
		cout<<Mystrlen(r2);
		break;
	case 9:  
		cout << "       Thank you!          " << endl;
		cout << "   Press button to exit         ";
		break;
	default:
		cout << "invaid input";

	}



	}