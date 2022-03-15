#include <string>
#include <vector>


using namespace std;
bool answer = true;

bool checkNum(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i]) == 0)
            return true;
        else
            return false;
    }
}
bool solution(string s) {
 
    if ((s.size() == 4 || s.size() == 6) && checkNum(s))
        answer = true;
    else
        answer = false;

    return answer;
}