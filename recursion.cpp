/*double mypower(double d, int p) - return dp, assuming p is an integer >= 0
void hailstone(int n) - if n is 1 stop; if n is even the print n / 2 and call hailstone(n / 2); if n is odd then print 3 * n + 1 and call hailstone(3 * n + 1); assume n >= 1
int fibonacci(n) - return 1 if n is 0 or 1; otherwise return fibonacci(n - 1) + fibonacci(n - 2)
bool isWholeNumber(string s) - return true if s is a string consisting entirely of digits, false otherwise
int linearSearch(int data[], int target) - search data looking for target, return the position at which the target is found; return -1 if the target is not found
int sumDigits(int n) - return the sum of the digits of an integer
bool isPalindrome(string s)) - test the string for reading the same front to backand back to front; ignore case in the comparisons.*/
#include <iostream>
using namespace std; 

const int MAX = 7;

double power(double num, int pow) {
	if (pow == 0) {
		return 1;
	}
	else {
		return (num * power(num, pow - 1));
	}
}

void hailstone(int num){
	if (num <= 1) {
		return; 
	}
	else if ((num % 2) == 0) {
		cout << (num / 2) << endl; 
		hailstone(num / 2);
	}
	else {
		cout << (3 * num + 1) << endl;
		hailstone(3 * num + 1); 
	}
}

int fibo(int num) {
	if (num == 1 || num == 0) {
		return 1; 
	}
	else {
		return (fibo(num - 1) + fibo(num - 2));
	}
}

bool isNum(string s) {

}

int lSearch(int data[], int targ, int count = 0) {
	if (data[count] == targ) {
		return count; 
	}
	else if (count < MAX){
		lSearch(data, targ, count + 1);
	}
	else {
		return -1; 
	}
}

int main() {
	int num, pow, num1; 
	cout << "Enter a number : " << endl;
	cin >> num; 
	cout << "What power woudl you like to use? : " << endl; 
	cin >> pow; 

	cout << power(num, pow) << endl;

	cout << "Enter a hailstone number : " << endl; 
	cin >> num1; 

	hailstone(num1); 

}
