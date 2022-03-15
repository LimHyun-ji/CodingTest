#include <string>
#include <vector>
#include <iostream>
using namespace std;


//	"ABAAAAAAAAABB" 이 케이스 오답..
int solution(string name) {
    int answer = 0;


    for (int i = 0; i < name.size(); i) {
        bool flag = false;
        //상하 판별하기
        if (int(name[i]) - 64 > 14)//뒤부터 세기
            answer += 26 - (int(name[i]) - 64) + 1;
        else//앞부터
            answer += int(name[i]) - 65;
        name[i] = 'A';
        for (int j = 0; j < name.size(); j++) {

            if (name[j] != 'A' && j - i > i + name.size() - j) {
                i--;
                flag = true;
                break;
            }
            else if (name[j] != 'A' && j - i <= i + name.size() - j) {
                i++;
                flag = true;
                break;
            }
        }
        if (flag == false)
            break;
        answer++;
    }
    return answer;
}