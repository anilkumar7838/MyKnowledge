// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     // int sizeL(ListNode* l){
//     //     if(l==NULL){
//     //         return 0;
//     //     }
//     //     int count=0;
//     //     while(l->next!=NULL){
//     //         count++;
//     //         l=l->next;
//     //     }
//     //     return count;
//     // }
//  void print(ListNode* head){
//         if(head==NULL){
//             return;
//         }
//         while(head!=NULL){
//             cout<<head->val<<" ";
//             head=head->next;
//         }
//         cout<<endl;
//     ListNode* merge(ListNode* l1,ListNode* l2){
//         ListNode* temp=NULL;
//         // int n=min(sizeL(l1),sizeL(l2));
//         while(l1->next!=NULL and l2!=NULL){
//             if(l1->val<=l2->val){
//                 if(temp==NULL){
//                     temp=l1;
//                 }else{
//                     temp->next=l1;
//                 }
//                 l1=l1->next;
//             }
//             else if(l1->val>l2->val){
//                 if(temp==NULL){
//                     temp=l2;
//                 }else{
//                     temp->next=l2;
//                 }
//                 l2=l2->next;
//             }
//         }
//         while(l1->next!=NULL){
//             temp->next=l1;
//         }
//         while(l2->next!=NULL){
//             temp->next=l2;
//         }
//         return temp;
//     }
    
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         int n=lists.size(),i=0;
//         ListNode* ans=NULL;
//         while(i<n){
//             if(ans==NULL){
//                 ans=merge(lists[i],lists[i++]);
//             }
//             else{
//                 ans=merge(ans,lists[i]);
//             }
//             i++;
//         }
//         return ans;
//     }
// };