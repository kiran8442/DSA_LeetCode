class MyLinkedList {
public:
    MyLinkedList *next;
    int val;
    MyLinkedList() {
        next = nullptr;
        val = -1;
    }
    MyLinkedList(int value) {
        val = value;
        next = nullptr;
    }
    int get(int index) {
        if(next == nullptr)
            return -1;
        if(index == 0)
            return next->val;
        MyLinkedList* run = next;
        while(run != nullptr && index > 0) {
            run = run->next;
            index--;
        }
         return run ? run->val : -1;
    }
    
    void addAtHead(int val) {
        MyLinkedList* newnode = new MyLinkedList(val);
        newnode->next = next;
        next = newnode;
    }
    
    void addAtTail(int val) {
        MyLinkedList* newnode = new MyLinkedList(val);
        if(next == nullptr)
        {
            next = newnode;
            return;
        }
        MyLinkedList* run = next;
        while(run->next != nullptr)
        {
            run = run->next;
        }
        run->next = newnode;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0)
             return;
        if(index == 0)
        {
            addAtHead(val);
            return;
        }
        int i = 0;
        MyLinkedList* run = next;
        for(int i = 0; run != nullptr && i < index - 1; i++) {
            run = run->next;
        }
        if(run == nullptr)
            return;
        MyLinkedList* new_node = new MyLinkedList(val);
        new_node->next = run->next;
        run->next = new_node;
    }
    
    void deleteAtIndex(int index) {
        
        if(index < 0 || next == nullptr)
            return;
        if(index == 0)
        {
            MyLinkedList* delete_node = next;
            next = delete_node->next;
            delete delete_node;
            return;
        }
        int i = 0;
        MyLinkedList* run = next;
        for(int i = 0; run != nullptr && i < index - 1; i++) {
            run = run->next;
        }
        if(run == nullptr || run->next == nullptr)
            return;
        MyLinkedList* delete_node = run->next;
        run->next = delete_node->next;
        delete delete_node;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */