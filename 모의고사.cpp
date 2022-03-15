#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {

    int a[] = { 1, 2, 3, 4, 5 };
    int b[] = { 2, 1, 2, 3, 2, 4, 2, 5 };
    int c[] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    vector<int> answer;
    int maxScore;
    int score[3] = {};

    for (int i = 0; i < answers.size(); i++) {
        int ai = i % (sizeof(a) / sizeof(int));
        int bi = i % (sizeof(b) / sizeof(int));
        int ci = i % (sizeof(c) / sizeof(int));

        if (a[ai] == answers[i])
            score[0]++;
        if (b[bi] == answers[i])
            score[1]++;
        if (c[ci] == answers[i])
            score[2]++;
    }
    // cout << sizeof(a) / sizeof(int); 

    maxScore = max(max(score[0], score[1]), score[2]);
    for (int i = 0; i < 3; i++) {
        if (score[i] == maxScore)
            answer.push_back(i + 1);
    }
    return answer;
}