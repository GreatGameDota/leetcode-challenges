class UndergroundSystem
{
public:
    unordered_map<int, pair<string, int>> map;
    unordered_map<string, pair<int, int>> map2;

    void checkIn(int id, string stationName, int t)
    {
        map[id] = {stationName, t};
    }

    void checkOut(int id, string stationName, int t)
    {
        string trip = map[id].first + "-" + stationName;
        map2[trip].first += t - map[id].second;
        map2[trip].second++;
    }

    double getAverageTime(string startStation, string endStation)
    {
        string trip = startStation + "-" + endStation;
        return (double)map2[trip].first / map2[trip].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */