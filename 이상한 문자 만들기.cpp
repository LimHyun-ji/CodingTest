/*
#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
	string answer = "";
	int spaceNum = 0;
	istringstream ss(s);
	string stringBuffer;
	vector<string> v;

	while (getline(ss, stringBuffer, ' ')) {//나누려는 문자열, 구분자 앞, 구분자
		v.push_back(stringBuffer);
		spaceNum++;
	}

	for (int i = 0; i < v.size(); i++) {

		for (int j = 0; j < v[i].length(); j++) {
			if (j % 2 == 0)
				v[i][j] = toupper(v[i][j]);
			else
				v[i][j] = tolower(v[i][j]);
		}
		answer += v[i] + " ";
	}

	answer.erase(answer.length() - 1, 1);
	return answer;
}
*/
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	int index = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ')
			index = 0;
		if (index % 2 == 0)
			s[i] == toupper(s[i]);
		else
			s[i] == tolower(s[i]);
		index++;
	}
	return answer;
}