#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

string NToB(int num, int b) {
    //10진수 N을 역B진수으로 변환하기
    string result;
    for (int i = 0; num > 0; i++) {
        int remainder = num % b;
        result += (char)(remainder + 48);
        num = num / b;

    }
    return result;
}

int solution(int n) {
    int answer = 0;
    string temp = NToB(n, 3);

    for (int i = 0; i < temp.length(); i++) {
        answer += ((int)(temp.at(temp.length() - 1 - i)) - 48) * pow(3, i);
    }

    return answer;
}