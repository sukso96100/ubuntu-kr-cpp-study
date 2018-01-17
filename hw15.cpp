#include<iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};
class list {
private:
    node *head, *tail;
    bool del_last(){
      node *temp = head;
      if(temp==NULL){
        return false;
      }else if(temp->next==NULL){
        delete temp;
        head = NULL;
        return true;
      }else{
        while (temp->next->next!=NULL)
        {
          temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        tail = temp;
        return true;
      }
    }
public:
    list() {
        // 링크드리스트를 초기화하는 코드를 작성합니다.
        head = NULL;
        tail = NULL;
    }
    void display() {
        node *temp = head;
        while (temp!=NULL)
        {
            cout <<"|"<< temp->data << "|" ;
            temp = temp->next;
        }
        cout << endl;
    }
    void create(int value) {
        node *temp = new node;
        temp->data = value;
        temp->next = NULL;
        if (head == NULL) {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    void del_all() {
        // 모든 노드를 지우는 코드를 작성합니다.
        bool is_del = true;
        while(is_del){
          is_del = del_last();
        }
    }
};
int main() {
    list a;
    a.create(5);
    a.create(10);
    a.create(15);
    a.create(20);
    a.display();
    a.del_all(); //ASSIGNMENT "del_all()"
    a.display();

    return 0;
}
