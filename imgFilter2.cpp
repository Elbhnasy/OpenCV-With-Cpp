#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace std;

int main()
{
    string path = "/home/khaled/CodingWorkspace/CppWorkspace/OpenCV-With-Cpp/Lenna.png";
    cv :: Mat img = cv :: imread(path, cv :: IMREAD_COLOR);
    cv :: Mat erodeImg, dilateImg;
    /*
    erode	(	InputArray 	src,
    OutputArray 	dst,
    InputArray 	kernel,
    Point 	anchor = Point(-1,-1),
    int 	iterations = 1,
    int 	borderType = BORDER_CONSTANT,
    const Scalar & 	borderValue = morphologyDefaultBorderValue() 
    )	
    */
    cv :: Mat kernel = cv :: getStructuringElement(cv :: MORPH_RECT, cv :: Size(5, 5), cv :: Point(-1, -1));
    cv :: erode(img, erodeImg, kernel, cv :: Point(-1, -1), 1, cv :: BORDER_CONSTANT, cv :: morphologyDefaultBorderValue());
    cv :: dilate(img, dilateImg, kernel, cv :: Point(-1, -1), 1, cv :: BORDER_CONSTANT, cv :: morphologyDefaultBorderValue());
    cv :: imshow("Original Image", img);
    cv :: imshow("Erode Image", erodeImg);
    cv :: imshow("Dilate Image", dilateImg);
    cv :: waitKey(0);
    return 0;
}