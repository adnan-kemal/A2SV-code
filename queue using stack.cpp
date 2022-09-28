class MyQueue {
public:
    MyQueue() {
        
    }
    
  stack<int> input, output;
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty() == false){
            int n = output.top();
            output.pop();
            return n;
        }
        else{
            while(input.empty() == false){
                output.push(input.top());
                input.pop();
            }
            int n = output.top();
            output.pop();
            return n;
        }
    }
    
    int peek() {
        if(output.empty() == false){
            return output.top();
        }
        else{
            while(input.empty() == false){
                output.push(input.top());
                input.pop();
            }
            return output.top();
        }
    }
    
    bool empty() {
        return input.empty() && output.empty();
      }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */