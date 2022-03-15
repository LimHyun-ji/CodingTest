#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int monthNum[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    string day[] = { "FRI","SAT","SUN", "MON", "TUE", "WED","THU" };
    int passedDay = 0;
    string answer = "";

    for (int i = 0; i < a - 1; i++)
        passedDay += monthNum[i];
    passedDay += b;
    answer = day[(passedDay - 1) % 7];

    return answer;
}