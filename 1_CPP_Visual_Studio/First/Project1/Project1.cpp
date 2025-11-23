// for the online unreal5 code.

#include <iostream>
using namespace std;

int main()
{
    const int MinutesPerSecond{ 60 };
    int TotalSecondsPlayed{ 100 };       //Pascal case naming convention + Braced initializer
    int MinutesPlayed = TotalSecondsPlayed / MinutesPerSecond;
    cout << "Total minutes played: " << MinutesPlayed << endl;
}
