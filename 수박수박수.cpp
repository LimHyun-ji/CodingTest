#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(int n) {
	string answer = "";
	string s = "¼ö¹Ú";
	for (int i = 0; i < n; i++) {
		answer += s.substr(3 * (i % 2), 3);
	}

	return answer;
}