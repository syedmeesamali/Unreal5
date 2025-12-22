// for the online unreal5 code.
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    /*
    const int SecondsPerMin{ 60 };
    int TotalSecondsPlayed{ 100 };       //Pascal case naming convention + Braced initializer
    int MinutesPlayed = TotalSecondsPlayed / SecondsPerMin;
    int SecondsPlayed = TotalSecondsPlayed % SecondsPerMin;
    cout << "Total minutes played: " << MinutesPlayed << endl;
    cout << "Total seconds played: " << SecondsPlayed << endl;

    int Score{ 1360 };
    int SecondsPlayedNew { 10000 };
    float PointsPerSecond = static_cast<float> (Score) / SecondsPlayedNew;
    cout << "Points per second: " << PointsPerSecond << endl;
    */
    float angle = 0;
    cout << "Enter angle in degrees: " << endl;
    cin >> angle;
    angle = angle * (M_PI / 180);
    cout << "Sine of angle is: " << sinf(angle) << endl;
    cout << "Cosine of angle is: " << cosf(angle) << endl;
    return 0;
}
