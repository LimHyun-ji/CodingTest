#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;

    int min = n - lost.size();
    for (int i = 0; i < lost.size(); i++) {
        for (int k = 0; k < reserve.size(); k++) {
            if (lost[i] + 1 == reserve[k] || lost[i] - 1 == reserve[k] && lost[i] == reserve[k]) {
                min++;
                lost.erase(lost.begin() + i);
                reserve.erase(reserve.begin() + k);
                i--;
                break;
            }
        }
        answer = min;

        return answer;
    }
}