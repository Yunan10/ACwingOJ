#define _CRT_SECURE_NO_WARNINGS 1

//ACwing 21 循环和递归
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    int Fibonacci1(int n)
//    {
//        int a = 1;
//        int b = 1;
//        int c;
//        if (n == 0)
//            cout << 0;
//        else if (n == 1 || n == 2)
//            cout << 1;
//        else
//        {
//            for (int i = 2; i < n; i++)
//            {
//                c = a + b;
//                a = b;
//                b = c;
//            }
//        }
//        return c;
//    }
//    // 1 1 2 3 5
//    int Fibonacci2(int n)
//    {
//        if (n <= 1) return n;
//        return Fibonacci2(n - 1) + Fibonacci2(n - 2);
//    }
//};
//int main()
//{
//    Solution sol;
//    int n;
//    cin >> n;
//    cout << sol.Fibonacci1(n) << endl; 
//    cout << sol.Fibonacci2(n) << endl;
//    return 0;
//}

//ACwing 16
//#include <iostream>
//#include <string>
//using namespace std;
//class Solution {
//public:
//    string replaceSpaces(string &str)
//    {
//        string res;
//        for (auto c : str)
//        {
//            if (c == ' ') res += "%20";
//            else res += c;
//        }
//        return res;
//    }
//};
//int main()
//{
//    Solution sol;
//    string str;
//    getline(cin,str);
//    cout << sol.replaceSpaces(str) << endl;
//    return 0;
//}

//ACwing 84
//#include <iostream>
//using namespace std;
//class Solution 
//{
//public:
//    int getSum(int n) 
//    {
//        int res = n;
//        n > 0 && (res += getSum(n - 1));
//        return res; 
//    }
//};

//ACwing 28
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//class Solution {
//public:
//    void deleteNode(ListNode* node) {
//        node->val = node->next->val;//伪装成下一个点
//        node->next = node->next->next;//删除下一个点
//
//        *(node) = *(node->next);//法二：结构体整体赋值
//    }
//};

//ACwing 36
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//class Solution {
//public:
//    ListNode* merge(ListNode* l1, ListNode* l2) {
//        auto dummy = new ListNode(-1);
//        auto tail = dummy;
//        while (l1 && l2)
//        {
//            if (l1->val <= l2->val)
//            {
//                tail->next = l1;
//                l1 = l1->next;
//                tail = tail->next;
//            }
//            else
//            {
//                tail->next = l2;
//                l2 = l2->next;
//                tail = tail->next;
//            }
//        }
//        if (l1)
//        {
//            tail->next = l1;
//            tail = tail->next;
//        }
//        if (l2)
//        {
//            tail->next = l2;
//            tail = tail->next;
//        }
//        return dummy->next;
//    }
//};

//ACwing 78
//#include <iostream>
//#include <cstring>
//using namespace std;
//class Solution 
//{
//public:
//    string leftRotateString(string str, int n) 
//    {
//        return str.substr(n) + str.substr(0, n);
//    }
//};

//ACwing 87
//#include <iostream>
//using namespace std;
//class Solution
//{
//public:
//    int strToInt(string str)
//    {
//        int k = 0;
//        while (k < str.size() && str[k] == ' ') k++;
//        int minus = 1;
//        if (k < str.size())
//        {
//            if (str[k] == '+') k++;
//            if (str[k] == '-') minus = -1, k++;
//        }
//        long long res = 0;
//        while (k < str.size() && str[k] >= '0' && str[k] <= '9')
//        {
//            res = res * 10 + str[k] - '0';
//            if (res > 1e10) break;
//            k++;
//        }
//        res *= minus;
//        if (res > INT_MAX) return INT_MAX;
//        if (res < INT_MIN) return INT_MIN;
//        return res;
//    }
//};

//ACwing 35
//#include<iostream>
//using namespace std;
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        if (!head || !head->next) return head;
//        auto p = head;
//        auto q = p->next;
//        while (q)
//        {
//            auto o = q->next;
//            q->next = p;
//            p = q;
//            q = o;
//        }
//        head->next = NULL;
//        return p;
//    }
//};

//ACwing 66
//#include<iostream>
//using namespace std;
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
// struct ListNode {
//int val;
//ListNode* next;
//ListNode(int x) : val(x), next(NULL) {}
//};
//class Solution {
//public:
//    ListNode* findFirstCommonNode(ListNode* headA, ListNode* headB) {
//        auto p = headA;
//        auto q = headB;
//        while (q != p)
//        {
//            if (!p) p = headB;
//            else p = p->next;
//            if (!q) q = headA;
//            else q = q->next;
//        }
//        return p;
//    }
//};

//ACwing 29
#include<iostream>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//class Solution {
//public:
//    ListNode* deleteDuplication(ListNode* head) {
//        auto dummy = new ListNode(-1);
//        dummy->next = head;
//        auto p = dummy;
//        auto q = head;
//        while (q)
//        {
//            if (q->next && q->val == q->next->val)
//            {
//                int val = q->val;
//                while (q && val == q->val) q = q->next;
//                p->next = q;
//            }
//            else
//            {
//                p = q;
//                q = q->next;
//            }
//        }
//        return dummy->next;
//    }
//};