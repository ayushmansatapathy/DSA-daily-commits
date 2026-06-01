#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<int> scores;

    scores.push(100);
    scores.push(250);
    scores.push(180);
    scores.push(300);
    scores.push(150);
    scores.push(220);

    cout << "Top 3 Scores:\n";

    for (int i = 0; i < 3; i++) {
        cout << scores.top() << endl;
        scores.pop();
    }

    return 0;
}