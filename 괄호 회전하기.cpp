#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(string s) {
	int answer = 0;

	for (int j = 0; j < s.size(); j++) {
		stack<char> openChar;
		bool flag = false;//stack�� �ƿ� �� �������� �Ǻ�
	   //���� ��ȣ �����ϱ�
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
		//���ڿ� ȸ���ϱ�
		char c = s[0];
		s.erase(0, 1);
		s += c;
		cout << s;
	}

	return answer;
}