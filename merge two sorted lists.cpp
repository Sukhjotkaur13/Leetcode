class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        while (temp1 != nullptr && temp2 != nullptr) {
            if (temp1->val < temp2->val) {
                dummy->next = temp1;
                temp1 = temp1->next;
            } else {
                dummy->next = temp2;
                temp2 = temp2->next;
            }
            dummy = dummy->next;
        }

        while (temp1 != nullptr) {
            dummy->next = temp1;
            dummy = dummy->next;
            temp1 = temp1->next;
        }

        while (temp2 != nullptr) {
            dummy->next = temp2;
            dummy = dummy->next;
            temp2 = temp2->next;
        }

        return ans->next;
    }
};
