#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int currentWeight = 0;
    int truckIndex = 0;
    queue <int> time;
    queue <int> currentTruck;


    while (1) {
        answer++;

        //트럭 빼기
        if (answer - time.front() == bridge_length) {
            currentWeight -= currentTruck.front();
            time.pop();
            currentTruck.pop();
        }

        //트럭 삽입
        if (currentWeight + truck_weights[truckIndex] <= weight) {

            //마지막 트럽삽입시 종료
            if (truckIndex == truck_weights.size() - 1) {
                answer += bridge_length;//마지막 트럭 도착시간
                break;
            }
            currentTruck.push(truck_weights[truckIndex]);
            time.push(answer);
            currentWeight += truck_weights[truckIndex];
            truckIndex++;
        }
    }
    return answer;
}
