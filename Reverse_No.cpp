#include <bits/stdc++.h> 
using namespace std; 

int rev(int n) 
{ 
	int new_n = 0; 
	while (n > 0) { 
		new_n = new_n * 10 + n % 10; 
		n = n / 10; 
	} 
	return new_n; 
} 

int main() 
{ 
	int n = 4562; 
	cout << "Reverse of num is " << rev(n); 
	return 0; 
}
