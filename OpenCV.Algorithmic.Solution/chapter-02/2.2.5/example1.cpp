#include <iostream>
#include <opencv2/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Vec<int, 3> vi(21, 32, 14);

    cout << "向量的行数: " << vi.rows << endl;
    cout << "向量的列数: " << vi.cols << endl;

    cout << "访问第0个元素: " << vi[0] << endl;
    cout << "访问第1个元素: " << vi(1) << endl;

    return 0;
}
