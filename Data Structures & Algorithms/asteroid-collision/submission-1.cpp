class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for (int num : asteroids) {
            bool destroyed = false;

            // Collisions only occur when stack top moves right (> 0) and current moves left (< 0)
            while (!st.empty() && st.back() > 0 && num < 0) {
                if (st.back() < -num) {
                    st.pop_back(); // Stack top destroyed, continue loop to check previous asteroids
                } else if (st.back() == -num) {
                    st.pop_back(); // Both destroyed
                    destroyed = true;
                    break;
                } else {
                    destroyed = true; // Current asteroid destroyed
                    break;
                }
            }

            if (!destroyed) {
                st.push_back(num);
            }
        }

        return st;
    }
};