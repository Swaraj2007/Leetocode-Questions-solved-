class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>ans;
        double temp = celsius  + 273.15;
        ans.push_back(temp);
        temp = celsius * 1.80 + 32.00;
        ans.push_back(temp);
        return ans;

    }
};