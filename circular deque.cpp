class MyCircularDeque {
public:
   int dp[5000];
    int i=-1,j=-1,f=0;
    MyCircularDeque(int k) {
        f=k;
    }
    
    bool insertFront(int value) {
        if(i==-1 && j==-1){
            i=2500;
            j=2500;
            dp[j]=value;
        }
        else if(j-i>=f-1) return false;
        else{
            i--;
            dp[i]=value;
            
        }
        return true;
    }
    
    bool insertLast(int value) {
        if(i==-1 && j==-1){
            i=2500;
            j=2500;
            dp[i]=value;
        }
        else if(j-i>=f-1) return false;
        else{
            j++;
            dp[j]=value;
            
        }
        return true;
    }
    
    bool deleteFront() {
        if(i==-1 && j==-1) return false;
        else if(i==j){
            i=-1;
            j=-1;
        }
        else{
            i++;
            
        }
        return true;
    }
    
    bool deleteLast() {
        if(i==-1 && j==-1) return false;
        else if(i==j){
            i=-1;
            j=-1;
        }
        else{
            j--;
            
        }
        return true;
    }
    
    int getFront() {
        if(i==-1 && j==-1) return -1;
        return dp[i];
    }
    
    int getRear() {
        if(i==-1 && j==-1) return -1;
        return dp[j];
    }
    
    bool isEmpty() {
        return (i==-1 && j==-1);
    }
    
    bool isFull() {
        return (j-i>=f-1);
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */