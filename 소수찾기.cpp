#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int solution(int n) {
	int answer = 0;
	for (int i = 2; i <= n; i++) {
		answer++;
		for (int j = 1; j <= sqrt(i); j++) {
			if (i % j == 0 && j != 1) {
				answer--;
				break;
			}
		}
	}
	return answer;
}

