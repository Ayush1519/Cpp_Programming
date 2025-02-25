#include<iostream>
using namespace std;
class Node{//node class created
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){//node constructor
        this -> data = data;
        this -> next = NULL;
    }

    void insertAtHead(Node* &head, int d){

        //
    }
};

int main(){

    Node* Node1 = new Node(10);

    cout<< Node1 -> data << endl;
    cout<< Node1 -> next << endl;

}