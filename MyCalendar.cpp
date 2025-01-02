#include <iostream>
#include <utility>
#include <vector>
using namespace std;

class MyCalendar
{
public:
    vector<std::pair<int, int>> cal;
    MyCalendar()
    {
    }

    bool book(int startTime, int endTime)
    {
        for (auto i : this->cal) {
            if ((i.first <= startTime) and (i.second > startTime)) {
                return false;
            }
            if ((i.first < endTime) and (i.second >= endTime)) {
                return false;
            }
            if ((i.first <= startTime) and (i.second >= endTime)) {
                return false;
            }
            if ((i.first >= startTime) and (i.second <= endTime)) {
                return false;
            }
        }
        this->cal.push_back(pair(startTime, endTime));
        return true;
    }
};

int main()
{
    vector<pair<int, int>> to_try = {{97, 100}, {33, 51}, {89, 100}, {83, 100}, {75, 92}, {76, 95}, {19, 30}, {53, 63}, {8, 23}, {18, 37}, {87, 100}, {83, 100}, {54, 67}, {35, 48}, {58, 75}, {70, 89}, {13, 32}, {44, 63}, {51, 62}, {2, 15}};
    MyCalendar *obj = new MyCalendar();
    for (auto i : to_try) {
        if (obj->book(i.first, i.second)) {
            cout << "true " << i.first << " " << i.second << endl;
        } else {
            cout << "false " << i.first << " " << i.second << endl;
        }
    }
    return 0;
}