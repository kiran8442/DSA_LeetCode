class Node
{
    public:
    Node* next;
    Node* prev;
    int key, val;
    Node(int k, int v)
    {
        key = k;
        val = v;
    }
};
Node* head = new Node(-1,-1);
Node* tail = new Node(-1,-1);

int limit;
int currentlimit;
unordered_map<int, Node*> m;
class LRUCache {
public:
    
    LRUCache(int capacity) {
        limit = capacity;
        currentlimit = 0;
        
        m.clear();

        head->next = tail;
        tail->prev = head;
        tail->next = head;
        head->prev = tail;

    }
    void insertnode(Node* node)
    {
        Node* prev_node = head->next;

        head->next = node;
        prev_node->prev = node;

        node->next = prev_node;
        node->prev = head;
    }
    void deletenode(Node* node)
    {
        Node* prev_node = node->prev;
        Node* next_node = node->next;

        next_node->prev = prev_node;
        prev_node->next = next_node;

        delete node;
    }
    int get(int key) {
        if(m.find(key) == m.end())
            return -1;
        Node* oldnode = m[key];
        int value = oldnode->val;

        m.erase(key);
        deletenode(oldnode);
        currentlimit--;

        Node* newnode = new Node(key, value);
        insertnode(newnode);
        currentlimit++;
        m[key] = newnode;
        return value;
    }

    void put(int key, int value) {
        if (limit <= 0)
            return;
        if(m.find(key) != m.end())
        {
            Node* oldnode = m[key];
            m.erase(key);
            deletenode(oldnode);
            currentlimit--;
        }
        if(limit == currentlimit && limit != 0)
        {
            Node* oldnode = tail->prev;
            m.erase(tail->prev->key);
            deletenode(oldnode);
            currentlimit--;
        }
        Node* new_node = new Node(key, value);
        insertnode(new_node);
        currentlimit++;
        m[key] = new_node;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */