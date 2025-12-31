class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int, float>> cars(position.size());

        for (int i = 0; i < position.size(); i++) {

            float time = (float)(target - position[i]) / speed[i];
            cars[i] = {position[i], time};
        }

        sort(cars.rbegin(), cars.rend());
        stack<float> fleet;

        for(auto& car : cars){

            double t = car.second;
            if(fleet.empty() || t > fleet.top()){

                fleet.push(t);
            }
        }

        return fleet.size();
    }
};