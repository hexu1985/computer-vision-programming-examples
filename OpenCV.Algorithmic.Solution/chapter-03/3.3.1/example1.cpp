#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // 以(11,13)及(3,5)为中心进行极坐标变换 
    double r = sqrt(pow(11.0-3.0, 2)+pow(13.0-5.0, 2));
    double theta = atan2(13-5, 11-3)/3.14159*180;
    cout << r << ", " << theta << endl;
}

