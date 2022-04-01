#include <iostream>

using namespace std;

class Node{

    Node(int x, Node *n)   {data=x; next=n;}

public:int data;     Node *next;
};

int element;

class Stack{

    int max;
public: Node*top;
public: Stack(int data)  {
        max = data;
        top=NULL;
    }

    void push(int val) {

        class Node* newnode = (class Node*) malloc(sizeof(class Node));

        if(element<max)
        {newnode->data = val;
            newnode->next = top;
            top = newnode;
            element++;}
        else{
            cout<<"No place"<<endl;
        }
    }

    Node *top2 = NULL;


    int isEmpty(){

        return top == NULL;
    }

    int upper(){

        if (!isEmpty())
            return top->data;
        else
            exit(1);
    }


    void pop() {

        if(top==NULL)

            cout<<"No element there"<<endl;
        else {

            cout<<"The popped element is "<< top->data <<endl;
            top = top->next;
            element--;
        }
        ;
    }

    void display() {

        class Node* ptr;

        if(top==NULL)
            cout<<"stack is empty";

        else {
            ptr = top;
            cout<<"Stack elements are: ";

            while (ptr != NULL) {
                cout<< ptr->data <<" ";
                ptr = ptr->next;
            }
        }
        cout<<endl;
    }
};


int main() {

    Stack *stack = new Stack(3);
    int choice, value;
    cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Display stack"<<endl;
    cout<<"4) Top of stack"<<endl;
    cout<<"5) Exit"<<endl;

    do {


        cout<<"Enter choice: "<<endl;
        cin>>choice;

        switch(choice) {


            case 1: {
                cout<<"Enter value to be pushed:"<<endl;
                cin>>value;
                stack->push(value);

                break;
            }
            case 2: {
                stack->pop();
                break;
            }
            case 3: {
                stack->display();
                break;
            }

            case 4:{
                stack->upper();
                break;
            }

            case 5: {
                cout<<"Exit"<<endl;
                break;
            }
            default: {
                cout<<"Invalid Choice"<<endl;
            }
        }
    }

    while(choice!=4);

    return 0;
}



