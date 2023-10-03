class LRUCache {
public:
    class node{
        public:
        int val;
        int key;
        node*prev;
        node*next;
        node(int keys,int vali){
         this->key=keys;
         this->val=vali;
        }

    };
    node* head=new node(-1,-1);
    node* tail=new node(-1,-1);
    int cap;
    unordered_map<int,node*>mpp;

    LRUCache(int capacity){
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }

    void addnode(node* newnode){
        node* temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        temp->prev=newnode;
    }
     
    void deletenode(node* delnode){
        node* delprev=delnode->prev;
        node* delnext=delnode->next;
        delprev->next=delnext;
        delnext->prev=delprev;
    }

    int get(int keys){
        if(mpp.find(keys)!=mpp.end()){
            node* resnode=mpp[keys];
            int res=resnode->val;
            mpp.erase(keys);
            deletenode(resnode);
            addnode(resnode);
            mpp[keys]=head->next;
            return res;
        }
        return -1;
    }

    void put(int keys,int vali){
        if(mpp.find(keys)!=mpp.end()){
            node*exist=mpp[keys];
            mpp.erase(keys);
            deletenode(exist);
        }
        if(mpp.size()==cap){
            mpp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(keys,vali));
        mpp[keys]=head->next;
    }
    
    
        
    
};
