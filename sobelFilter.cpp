#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace std;
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
int main()
{
    string path = "/home/khaled/CodingWorkspace/CppWorkspace/OpenCV-With-Cpp/Lenna.png";
    cv :: Mat img = cv :: imread(path, cv :: IMREAD_COLOR);
    cv :: namedWindow("Original Image", cv :: WINDOW_NORMAL);
    cv :: namedWindow("Sobel Image", cv :: WINDOW_NORMAL);

    cv :: Mat sobelImg;
    int dx = 1, dy = 1;
    int ksize = 3;
    int scale = 1;
    int delta = 1;
    while (1)
    {
        cv :: Sobel(img, sobelImg, CV_8UC1,dx, dy, ksize, scale, delta, cv :: BORDER_DEFAULT);
        int c = cv :: waitKey(1);
        if ((char)c == 'q')
        {
            cout << "pressed q" << endl;
            break;
        }
        else if ((char)c == 'a')
        {
            cout << "pressed a" << endl;
            if (dx && dy)
                dx = 0;
            else
                dx = 1;
        }
        else if ((char)c == 's')
        {
            cout << "pressed s" << endl;
            if (dx && dy)
                dy = 0;
            else
                dy = 1;
        }
        else if ((char)c == 'd')
        {
            cout << "pressed d" << endl;
            ksize += 2;
        }
        
        else if ((char)c == 'f')
        {
            cout << "pressed f" << endl;
            if (ksize > 1)
                ksize -= 2;
        }
        else if ((char)c == 'z')
        {
            cout << "pressed z" << endl;
            scale++;
        }
        else if ((char)c == 'x')
        {
            cout << "pressed x" << endl;
            scale--;
        }
        else if ((char)c == 'c')
        {
            cout << "pressed c" << endl;
            delta++;
        }
        else if ((char)c == 'v')
        {
            cout << "pressed v" << endl;
            delta--;
        }
        cv :: imshow("Original Image", img);
        cv :: imshow("Sobel Image", sobelImg);
    }
    
    
    
    cv :: waitKey(0);
    return 0;
}