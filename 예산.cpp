#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//테스트 케이스 3번 오류
int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());

    for (int i = 0; i < d.size(); i++) {
        budget -= d[i];
        if (budget < 0)
            break;
        answer++;
        if (budget < d[i + 1])
            break;
    }
    return answer;
}