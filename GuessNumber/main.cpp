#include<iostream>
#include<ctime>
#include<cmath>

using namespace std;

void solve() {
	srand(time(NULL));
	int lowerLimit, highLimit;
	cout << "Enter Lower Limit:";
	cin >> lowerLimit;
	cout << "Enter High Limit:";
	cin >> highLimit;
	if (highLimit < lowerLimit)	return;
	int res = rand() % (highLimit - lowerLimit + 1) + lowerLimit;
	int guess = res - 1;
	clock_t start, end;
	start = clock();
	while (guess != res) {
		cout << "Guess what number I have:";
		cin >> guess;
		if (guess < res) {
			cout << "Your guess is too low" << endl;
		}
		else if (guess > res) {
			cout << "Your guess is too high" << endl;
		}
	}
	end = clock();
	cout << "You got it" << endl;
	double t = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "Total time:" << t * 1000 << "ms" << endl;
	cin >> t;
}

int main(void) {
	solve();
}