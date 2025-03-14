#include <bits/stdc++.h>
using namespace std;
void calculateSteps(int i, int j, int steps, set<pair<int, int>> &final, int total, int dir)
{
    if (steps == total)
    {
        final.insert({i, j});
        return;
    }
    if (steps == 0)
    {
        calculateSteps(i + 1, j, steps + 1, final, total, 1);
        calculateSteps(i - 1, j, steps + 1, final, total, 1);
        calculateSteps(i, j + 1, steps + 1, final, total, 2);
        calculateSteps(i, j - 1, steps + 1, final, total, 2);
    }
    else
    {
        if (dir == 1)
        {
            calculateSteps(i, j + 1, steps + 1, final, total, 2);
            calculateSteps(i, j - 1, steps + 1, final, total, 2);
        }
        else
        {
            calculateSteps(i + 1, j, steps + 1, final, total, 1);
            calculateSteps(i - 1, j, steps + 1, final, total, 1);
        }
    }
}

int main()
{

    int n;
    cin >> n;
    set<pair<int, int>> final;
    calculateSteps(0, 0, 0, final, n, -1);
    cout << final.size() << endl;
}
