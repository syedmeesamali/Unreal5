// for the online unreal5 code.

#include <iostream>
using namespace std;

int main()
{
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
}
