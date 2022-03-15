#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(string s) {
	int answer = 0;

	for (int j = 0; j < s.size(); j++) {
		stack<char> openChar;
		bool flag = false;//stack에 아예 안 들어갔었는지 판별
	   //열린 괄호 저장하기
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
				openChar.push(s[i]);
				flag = true;
			}
			else {
				if (s[i] == ')' && openChar.top() == '(')
					openChar.pop();
				if (s[i] == ']' && openChar.top() == '[')
					openChar.pop();
				if (s[i] == '}' && openChar.top() == '{')
					openChar.pop();
			}
		}
		if (openChar.empty() && flag) {
			answer++;
		}
		//문자열 회전하기
		char c = s[0];
		s.erase(0, 1);
		s += c;
		cout << s;
	}

	return answer;
}