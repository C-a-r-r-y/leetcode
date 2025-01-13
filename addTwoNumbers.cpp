#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *l3 = new ListNode();
        ListNode *begin = l3;
        int carry = 0;
        while (1) {
            if (l1 == nullptr && l2 == nullptr) {
                return begin;
            } else if (l1 == nullptr) {
                l3->val = l2->val + carry;
                l2 = l2->next;
                if (l3->val > 10) {
                    carry = 1;
                    l3->val -= 10;
                } else {
                    carry = 0;
                }
                if (l2->next == nullptr) {
                    return begin;
                } else {
                    l3->next = new ListNode();
                    l3 = l3->next;
                }
            } else if (l2 == nullptr) {
                l3->val = l1->val + carry;
                l1 = l1->next;
                if (l3->val > 10) {
                    carry = 1;
                    l3->val -= 10;
                } else {
                    carry = 0;
                }
                if (l1->next == nullptr) {
                    return begin;
                } else {
                    l3->next = new ListNode();
                    l3 = l3->next;
                }
            } else {
                l3->val = l1->val + l2->val + carry;

                if (l3->val >= 10) {
                    carry = 1;
                    l3->val -= 10;
                } else {
                    carry = 0;
                }
                
                l1 = l1->next;
                l2 = l2->next;
                l3->next = new ListNode();
                l3 = l3->next;
            }
        }
    }
};

int main()
{
}