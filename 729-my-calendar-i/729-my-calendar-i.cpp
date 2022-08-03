class MyCalendar {
public:
    map<int,int>myCalendar;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        auto prev = myCalendar.upper_bound(start);
        if(prev != myCalendar.end() && prev -> second < end) return false;
        
        myCalendar.insert({end,start});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */