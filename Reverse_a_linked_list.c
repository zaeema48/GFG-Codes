// Given a linked list of N nodes. The task is to reverse this list.

//User function Template for C

struct Node* reverseList(struct Node *head)
    {
        struct Node *ptr=head, *prvs=NULL;
        while(head!=NULL){
            ptr=head->next;
            head->next=prvs;
            prvs=head;
            head=ptr;
        }
        head=prvs;
    return head;
    }