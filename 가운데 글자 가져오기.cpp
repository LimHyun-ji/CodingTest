#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int i = 0;//��� �� �ε���

    i = s.size() / 2;
    if (s.size() % 2 == 0) {
        answer = s.at(i);
        answer.push_back(s.at(i + 1));
    }
    else
        answer = s.at(i);

    return answer;
}