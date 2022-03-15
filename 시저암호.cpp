#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
	string answer = "";
	int num = 0;
	for (int i = 0; i < s.length(); i++) {
		if (65 <= (int)s[i] && (int)s[i] <= 90) {//대문자일 때
			if (s[i] + n > 90)
				num = (s[i] + n) % 91 + 65;
			else
				num = s[i] + n;
		}
		else if (97 <= (int)s[i] && (int)s[i] <= 122) {//소문자일 때
			if (s[i] + n > 97)
				num = (s[i] + n) % 123 + 97;
			else
				num = s[i] + n;
		}
		else if ((int)s[i] == 32) {//공백일 때
			num = (int)s[i];
		}
		answer += (char)num;
	}
	return answer;
}