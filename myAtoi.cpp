#include <iostream>
#include <math.h>
#include <memory>
#include <string>

using namespace std;

string test = "-91283472332";

class Solution
{
public:
    int myAtoi(string s)
    {
        auto i = s.begin();
        long long toReturn = 0;
        while (*i == ' ') {
            i++;
        }
        auto head = i;
        i++;
        while ((('0' <= *i) and (*i <= '9'))) {
            i++;
        }
        auto end = i++;
        i = head;
        if ((('0' <= *i) and (*i <= '9')) or (*i == '-')) {
            while ('0' <= *i <= '9') {
                i++;
                if (i == end) {
                    break;
                }
            }
            i--;
            long long carry = 0;
            while (i != head) {
                toReturn += pow(10, carry) * ((*i) - 48);
                i--;
                carry++;
            }
            if (*i == '-') {
                return -toReturn;
            } else {
                return toReturn + pow(10, carry) * ((*i) - 48);
            }
        } else {
            return 0;
        }
    }
};

int main()
{
    Solution s;
    cout << s.myAtoi(test) << endl;
    return 0;
}