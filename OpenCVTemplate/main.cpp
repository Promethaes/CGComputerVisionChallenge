//#include <opencv2/core.hpp>
//#include <opencv2/objdetect.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/imgproc.hpp>
//#include <opencv2/highgui.hpp>
//#include <opencv2/videoio.hpp>
//#include <opencv2/video.hpp>
//#include <iostream>
//#include <stdio.h>
//using namespace cv;
//using namespace std;
//
//
//int main(int argc, char** argv)
//{
//	Mat frame,frame2;
//	//--- INITIALIZE VIDEOCAPTURE
//	VideoCapture cap;
//	cap.open(0);
//
//	// check if we succeeded
//	if (!cap.isOpened()) {
//		cerr << "ERROR! Unable to open camera\n";
//		return -1;
//	}
//	//--- GRAB AND WRITE LOOP
//	cout << "Start grabbing" << endl
//		<< "Press any key to terminate" << endl;
//	for (;;)
//	{
//		// wait for a new frame from camera and store it into 'frame'
//		cap.read(frame);
//		// check if we succeeded
//		if (frame.empty()) {
//			cerr << "ERROR! blank frame grabbed\n";
//			break;
//		}
//
//		// show live and wait for a key with timeout long enough to show images
//		imshow("Live", frame);
//		if (waitKey(5) >= 0)
//			break;
//	}
//	// the camera will be deinitialized automatically in VideoCapture destructor
//	return 0;
//}