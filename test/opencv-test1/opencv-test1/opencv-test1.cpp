// opencv-test1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main()
{
	Mat img = imread("C:\\Users\\Administrator\\Desktop\\下载.jpg");
	namedWindow("pic");
	imshow("pic", img);
	waitKey(6000);
    return 0;
}

