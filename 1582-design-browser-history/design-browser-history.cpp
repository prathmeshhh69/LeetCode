class Node {
public:
    string val;
    Node* prev;
    Node* next;

    Node(string url) {
        val = url;
        prev = nullptr;
        next = nullptr;
    }
};
class BrowserHistory {
public:
    Node* current; 
    BrowserHistory(string homepage) {
        current=new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode=new Node(url);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }
    
    string back(int steps) {
        while(steps){
           if(current->prev){
             current=current->prev;
            steps--;
           }
           else break;
        }
        return current->val;
    }
    
    string forward(int steps) {
        while(steps){
            if(current->next){
                current=current->next;
                steps--;
            }
            else break;
        }
        return current->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */