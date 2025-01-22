#include<iostream>
#include<opencv2/highgui.hpp>
using namespace std;

int main()
{
    string path = "/home/khaled/CodingWorkspace/CppWorkspace/openCV_with_cpp/Lenna.png";
    cv:: Mat img = cv:: imread(path, cv::IMREAD_COLOR);
    if (img.empty())
    {
        cout << "Image not found" << endl;
        return 1;
    }
    cv :: imshow("Image", img);
    cv :: waitKey(0);
    return 0;
}