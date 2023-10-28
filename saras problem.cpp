class Solution {
public:
    int maxChocolates(ListNode* head) {
        int totalBoxes = 0;
        ListNode* current = head;
        
        while (current != nullptr) {
            totalBoxes++;
            current = current->next;
        }
        
        current = head;
        int chocolatesReceived = 0;
        int maxChocolatesReceived = 0;
        
        for (int i = 0; i < totalBoxes / 2; i++) {
            chocolatesReceived += current->val + current->next->val;
            current = current->next->next;
            
            maxChocolatesReceived = std::max(maxChocolatesReceived, chocolatesReceived);
        }
        
        return maxChocolatesReceived;
    }
};
