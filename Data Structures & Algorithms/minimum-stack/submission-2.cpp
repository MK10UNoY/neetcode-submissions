class MinStack {
public:
    MinStack() {

    }
    
    void push(int val) {
        stack.push_back(val);
        if(min_tracker.empty() || val<=min_tracker.back())
            min_tracker.push_back(val);
        else
            min_tracker.push_back(min_tracker.back());
    }
    
    void pop() {
         if (!stack.empty()) {
            stack.pop_back();
            min_tracker.pop_back();
        }
    }
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return min_tracker.back();
    }
    private:
        std::vector<int> stack;
        std::vector<int> min_tracker;
};
