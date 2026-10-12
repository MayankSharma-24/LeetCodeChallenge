class Solution {
public:
    int dayOfYear(string date) {
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));
        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
            days[1] = 29;

        for (int i = 0; i < m - 1; i++)
            d += days[i];

        return d;
    }
};
