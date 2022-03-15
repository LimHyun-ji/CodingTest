#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    answer = (a + b) * abs(b - a + 1) / 2;

    return answer;
}
/*
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    if (a == b)
        answer = a;
    else if (a < b) {
        for (int i = a; i <= b; i++)
            answer += i;
    }
    else if (a > b) {
        for (int i = a; i >= b; i--)
            answer += i;
    }
    return answer;
}
*/