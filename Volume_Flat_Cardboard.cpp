#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calc_Vol(double l, double w, double& s_length) {
    double max_Vol = 0.0;
    s_length = 0.0;

    for (double i = 0.0; i <= min(l / 2, w / 2); i += 0.001) {
        double volume = i * (l - 2 * i) * (w - 2 * i);

        if (volume > max_Vol) {
            max_Vol = volume;
            s_length = i;
        }
    }

    return max_Vol;
}

int main() {
    double area;

    cout << "Enter the area of the flat cardboard: ";
    cin >> area;

    double length = sqrt(area);
    double width = area / length;

    double sideLength;
    double maxVolume = calc_Vol(length, width, sideLength);

    cout << "---------------------------Cardboard dimensions----------------------------" << endl;
    cout << "Length: " << length << " inches" << endl;
    cout << "Width: " << width << " inches" << endl;
    cout << "Side length of square to be cut: " << sideLength << " inches" << endl;
    cout << "Maximum volume: " << maxVolume << " cubic inches" << endl;

    return 0;
}
