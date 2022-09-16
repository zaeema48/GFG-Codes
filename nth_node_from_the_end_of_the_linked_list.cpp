// Given a linked list consisting of L nodes and given a number N. 
// The task is to find the Nth node from the end of the linked list.



/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       struct Node *ptr=head;
       
       int count=0;
       while(ptr!=NULL){
           ptr=ptr->next;
           count++;
       }
       if(n>count)
       return -1;
       n=count-n;
      
       for(int i=1; i<=n; i++){
          head=head->next;
       }
       
       return head->data;
}