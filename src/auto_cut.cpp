#include <opencv2\opencv.hpp>
#include "utils.h"
#include "option_list.h"
#include <string.h>


int main(int argc, char* argv[])
{
	char* filename = find_char_arg(argc,argv,"-video","a.mp4");
	int step = find_int_arg(argc, argv, "-step", 20);
	cv::VideoCapture cap(0);
	cv::Mat frame;
	
}