#include <string>
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int i, j, k;
    vector<int> temp;

    //i, j, k 구하기
    for (int a = 0; a < commands.size(); a++) {
        temp.clear();
        i = commands[a][0];
        j = commands[a][1];
        k = commands[a][2];
        cout << endl<<"정렬 전" ;
        for (int b = i; b <= j; b++) {
            temp.push_back(array[b - 1]);  
        }
        for (int c = 0; c < temp.size(); c++) {
            cout << temp[c] << " ";
        }
        cout << endl<<"정렬 후";
        sort(temp.begin(), temp.end());
        for (int c = 0; c < temp.size(); c++) {
            cout << temp[c] << " " ;
        }
              
        answer.push_back(temp[k - 1]);
    }


    return answer;
}
