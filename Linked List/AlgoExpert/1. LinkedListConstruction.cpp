#include<iostream>
#include<algorithm>
using namespace std;

class node{
    public:
        int data;
        node *next;
// Constructor for the node
        node(int d){
            data = d;
            next = NULL;
        }
};
//Passed By reference
void insert_at_begining(node* &head,int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void insert_at_tail(node* &head, int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node* newNode = new node(data);
    node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
}

int length(node* head){
    int len = 0;
    while(head != NULL){
        head = head->next;
        len++;
    }
    return len;
}

void insert_at_position(node* &head, int data, int pos){
    if(head == NULL || pos == 0){
        insert_at_begining(head, data);
    }else if(pos > length(head)){
        insert_at_tail(head, data);
    }else{
        node* newNode = new node(data);
        node* temp = head;
        for(int i = 0; i < pos - 1; i++)
            temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

//Passed By Value
void traverse(node* head){
    while(head != NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
}

int main(){
    node* head = NULL;
    insert_at_begining(head,3);
    insert_at_begining(head,4);
    insert_at_begining(head,5);
    insert_at_begining(head,7);
    insert_at_begining(head,8);
    traverse(head);
    cout<<endl;
    insert_at_tail(head,10);
    traverse(head);
    cout<<endl;
    insert_at_position(head,55,2);
    traverse(head);
    return 0;
}
