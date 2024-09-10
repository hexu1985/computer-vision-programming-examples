#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main()
{
    {
        Mat m;
        m.create(2, 3, CV_32FC1); 
        cout << m << endl;
    }

    {
        Mat m;
        m.create(Size(3,2), CV_32FC1); 
        cout << m << endl;
    }

    {
        Mat o = Mat::ones(2, 3, CV_32FC1);
        cout << o << endl;
    }

    {
        Mat m = Mat::zeros(Size(3,2), CV_32FC1);
        cout << m << endl;
    }

    {
        Mat m = (Mat_<int>(2, 3) << 1, 2, 3, 4, 5, 6);
        cout << m << endl;
    }

    return 0;
}
