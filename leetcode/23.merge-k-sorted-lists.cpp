/*
 * @lc app=leetcode id=23 lang=cpp
 *
 * [23] Merge k Sorted Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeList(ListNode* l1 , ListNode* l2) {
        ListNode *l3 = new ListNode(0);
        ListNode* temp=l3;
        while(l1!=NULL and l2!=NULL){
            if(l1->val < l2->val){
                temp->next=l1;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                l2=l2->next;
            }
            // cout<<temp->val<<" ";
            temp = temp->next;
        }
        while(l1!=NULL){
            temp->next=l1;
            l1=l1->next;
            temp=temp->next;
        }
        while(l2!=NULL){
            temp->next=l2;
            l2=l2->next;
            temp=temp->next;
        }
        
        return l3->next;
    }
    
//     void print(ListNode* l){
//         while(l!=NULL){
//             cout<<l->val<<" ";
//             l=l->next;
//         }
//     }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        ListNode* ans;
        if(n==0){
            return ans;
        }
        else if(n==1){
            return lists[0];
        }
        if(n>=2){
            ans= mergeList(lists[0],lists[1]);
        }
        // print(ans);
        for(int i=2;i<n;i++){
            ans=mergeList(ans,lists[i]);
        }
        return ans;
        
    }
};
// @lc code=end

