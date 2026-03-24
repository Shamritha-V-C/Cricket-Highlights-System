#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    
    cout << "Enter total number of balls: ";
    cin >> n;

    cout << "Enter target score: ";
    cin >> target;

    vector<int> balls(n);

    cout << "Enter runs for each ball (-1 for wicket):\n";
    for (int i = 0; i < n; i++) {
        cin >> balls[i];
    }

    int totalRuns = 0, wickets = 0;
    int dotBalls = 0, consecutiveDots = 0;
    int overRuns = 0;

    cout << "\n--- Cricket Highlights ---\n";

    for (int i = 0; i < n; i++) {

        cout << "Ball " << i + 1 << ": ";

        // WICKET CASE
        if (balls[i] == -1) {
            wickets++;
            cout << "WICKET! \n";
            consecutiveDots = 0;
        }
        else {
            totalRuns += balls[i];
            overRuns += balls[i];

            // DOT BALL CASE
            if (balls[i] == 0) {
                dotBalls++;
                consecutiveDots++;
                cout << "Dot Ball\n";

                if (consecutiveDots == 3) {
                    cout << "  -> Pressure Situation! (3 consecutive dot balls)\n";
                }
            }
            else {
                consecutiveDots = 0;

                // BOUNDARY CASE
                if (balls[i] == 4) {
                    cout << "FOUR!  (Highlight)\n";
                }
                else if (balls[i] == 6) {
                    cout << "SIX!  (Highlight)\n";
                }
                else {
                    cout << balls[i] << " runs\n";
                }
            }
        }

        // MILESTONE CASE
        if (totalRuns == 50) {
            cout << "  -> Half Century Reached! \n";
        }
        if (totalRuns == 100) {
            cout << "  -> Century Reached! \n";
        }

        // OVER CASE (every 6 balls)
        if ((i + 1) % 6 == 0) {
            cout << "  Over " << (i + 1) / 6 << " Runs: " << overRuns;

            if (overRuns >= 15) {
                cout << "  High Scoring Over!";
            }
            cout << endl;

            overRuns = 0;
        }

        // WINNING MOMENT
        if (totalRuns >= target) {
            cout << "\n Match Won on Ball " << i + 1 << "! (Winning Highlight)\n";
            break;
        }
    }

    // FINAL SUMMARY
    cout << "\n--- Match Summary ---\n";
    cout << "Total Runs: " << totalRuns << endl;
    cout << "Total Wickets: " << wickets << endl;
    cout << "Dot Balls: " << dotBalls << endl;

    float runRate = (float)totalRuns / (n / 6.0);
    cout << "Run Rate: " << runRate << endl;

    return 0;
}