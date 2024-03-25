#include<iostream>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
}

class LinkedList
{
public:
    Node* head;

    LinkedList(){
        head = NULL;
    }
}

int main(){
    
    return 0;
}