#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    string c = "";//n번째 문자

    //n번째 문자를 앞쪽으로 보내기
    for (int i = 0; i < strings.size(); i++) {
        c = (char)(strings[i].at(n));
        cout << c << endl;
        strings[i].erase(n, 1);
        strings[i].insert(0, c);
    }

    sort(strings.begin(), strings.end());

    for (int i = 0; i < strings.size(); i++) {
        c = (char)(strings[i].at(0));
        strings[i].erase(0, 1);
        strings[i].insert(n, c);
    }

    return strings;
}

/*
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int i;

bool compare (string a, string b) {
    return a[i] == b[i] ? a < b : a[i] < b[i];
}

vector<string> solution(vector<string> strings, int n) {
    i = n;
    sort (strings.begin(), strings.end(), compare);
    return strings;
}
*/
