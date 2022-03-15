#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int min=0;
    int max=0;
    int correctNum = 0, zeroNum=0;
    vector<int> answer;

    for (int i = 0; i < lottos.size(); i++) {
        if (lottos[i] == 0)
            zeroNum++;
        for (int j = 0; j < win_nums.size(); j++) {
            if (lottos[i] == win_nums[j]) {
                correctNum++;
            }
        }
    }
    if (correctNum == 0) 
        min = 6;
    else 
        min = 7 - correctNum;
    max = 7 - (correctNum + zeroNum);
   
 
    answer.push_back(7 - max);
    answer.push_back(7 - min);

    return answer;
}