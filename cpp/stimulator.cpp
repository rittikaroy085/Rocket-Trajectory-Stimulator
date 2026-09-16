#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main () {
double velocity;
const double g = 9.81;
double angle;
const double PI = 3.141592653589793;

cout <<"Rocket Trajectory Stimulator" << endl;
cout <<"Enter Initial Velocity(m/s):" << endl;
cin>>velocity;

cout << "Enter launch angle (degrees): ";
cin >> angle;

cout << "Velocity = " << velocity << " m/s" << endl;
cout << "Angle = " << angle << " degrees" << endl;

double angleRadians = angle * PI / 180.0;
double vx = velocity * cos(angleRadians);
double vy = velocity * sin(angleRadians);
cout << "Horizontal velocity = " << vx << " m/s" << endl;
cout << "Vertical velocity = " << vy << " m/s" << endl;

double maxHeight = (vy * vy) / (2 * g);
cout << "Maximum height = " << maxHeight << " m" << endl;

double flightTime = (2 * vy) / g;
cout << "Flight time = " << flightTime << " seconds" << endl;

double range = vx * flightTime;
cout << "Horizontal range = " << range << " m" << endl;

double time = 0;

ofstream file("data/trajectory.csv");
file << "Time,X,Y\n";
while (time <= flightTime) {

    double x = vx * time;
    double y = vy * time - 0.5 * g * time * time;

    cout << "Time: " << time
         << " s | X: " << x
         << " m | Y: " << y
         << " m" << endl;
    file << time << "," << x << "," << y << "\n";

    time +=0.1;
}
file.close();
return 0;
}
