class UndergroundSystem {
private:
    //e.g. time[{"startStation","endStation"}] = [11,10] means that from "startStation" to "endStation" we have 2 customers,
    //first customer spent 11 and second customer spent 10
    map<pair<string,string>,vector<int>> time;
    //e.g. customer[i] = {1,"startStation"} means that customer with card ID equal to i checkIn at 1 time at "startStation"
    map<int,pair<int,string>> customer; 
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string startTime, int t) {
        customer[id] = {t, startTime};
    }
    
    void checkOut(int id, string endStation, int endTime) {
        int startTime = customer[id].first;
        string startStation = customer[id].second;
        
        time[{startStation, endStation}].push_back(endTime - startTime);
    }
    
    double getAverageTime(string startStation, string endStation) {
        double res = 0.0;
        int size = time[{startStation, endStation}].size();
        
        for (auto x : time[{startStation, endStation}])
            res += x;
        
        res /= size;
                
        return res;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */