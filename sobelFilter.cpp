#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace std;

int main()
{
    string path = "/home/khaled/CodingWorkspace/CppWorkspace/OpenCV-With-Cpp/Lenna.png";
    cv :: namedWindow("Original Image", cv :: WINDOW_NORMAL);
    cv :: Mat img = cv :: imread(path, cv :: IMREAD_COLOR);
    /*
    Sobel	(	InputArray 	src,
    OutputArray 	dst,
    int 	ddepth,
    int 	dx,
    int 	dy,
    int 	ksize = 3,
    double 	scale = 1,
    double 	delta = 0,
    int 	borderType = BORDER_DEFAULT 
    )	
    */
    cv :: Mat sobelImg;
    cv :: Sobel(img, sobelImg, CV_8U, 1, 1, 3, 1, 0, cv :: BORDER_DEFAULT);
    cv :: imshow("Original Image", img);
    cv :: imshow("Sobel Image", sobelImg);
    cv :: waitKey(0);
    return 0;
}