#include <string>
#include <vector>
#include <iostream>
using namespace std;


//	"ABAAAAAAAAABB" �� ���̽� ����..
int solution(string name) {
    int answer = 0;


    for (int i = 0; i < name.size(); i) {
        bool flag = false;
        //���� �Ǻ��ϱ�
        if (int(name[i]) - 64 > 14)//�ں��� ����
            answer += 26 - (int(name[i]) - 64) + 1;
        else//�պ���
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