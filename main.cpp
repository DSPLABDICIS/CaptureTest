/*Proyecto de pruebas sobre la captura de imágenes.
 * No neccesario para el funcionamiento del proyecto principal
 */

#include "../Capture/include/kinectCapturer.h"
#include "../Capture/include/StereoCapturer.h"
#include "../Capture/include/MonoCamera.h"


using namespace std;
using namespace cv;
int main(int argc, char** argv)
{

	int keypress;
	double dt;

 	Mat imgr, imgl,imgd;
//capture::Capturer *capturer = new capture::kinectCapturer;
// capture::Capturer *capturer = new capture::MonoCamera("images/testStereoLeft","png",0,16,1); //Monocamera

//  capture::Capturer *capturer = new capture::kinectCapturer("aaa/colortest1_","tiff","aaa/positiontest1_","M3D",29,29,1);
//	capture::Capturer *capturer = new capture::StereoCapturer("images/testStereoLeft","png","testStereoRight","png",0,24,1);
//	capture::Capturer *capturer = new capture::StereoCapturer("left0","jpg","depthImage","DMX",1,2,1);											//Retrieve stereo
//  capture::StereoCapturer *capturer = new capture::StereoCapturer("CalibrationPatterns/testStereoRight","png","CalibrationPatterns/testStereoLeft","png",0,1,1,"intrinsics.yml","extrinsics.yml");		//Compute Stereo Images
//	capture::StereoCapturer *capturer = new capture::StereoCapturer("../../../../../TestsTesis/singleDaniStereo/images/testStereoNearRight","png","../../../../../TestsTesis/singleDaniStereo/images/testStereoNearLeft","png",0,254,1,"intrinsics.yml","extrinsics.yml");		//Compute Stereo Images
//	capture::StereoCapturer *capturer = new capture::StereoCapturer("../../../../../TestsTesis/stereo2Dani1/images/testStereoNearRight","png","../../../../../TestsTesis/stereo2Dani1/images/testStereoNearLeft","png",292,416,1,"intrinsics.yml","extrinsics.yml"); //compute stereo 2 dani 1
	capture::StereoCapturer *capturer = new capture::StereoCapturer("../../../../../TestsTesis/stereo2Dani2/images/testStereoNearRight","png","../../../../../TestsTesis/stereo2Dani2/images/testStereoNearLeft","png",255,367,1,"intrinsics.yml","extrinsics.yml"); //compute stereo 2 dani 2

//	capture::StereoCapturer *capturer = new capture::StereoCapturer("../../../../../TestsTesis/singleDaniStereo/images/testStereoNearRight","png","../../../../../TestsTesis/singleDaniStereo/disparity/depthImage","DMX",0,0,1,"intrinsics.yml","extrinsics.yml");		//Stereo Tests
//	capture::StereoCapturer *capturer = new capture::StereoCapturer(false); 																			//Capture Stereo Images

	if(!capturer->initilize(0.0666f))
		return 0;

	capturer->computeStereo(0.015,true, true);
	//***************************************************Section for kinect*********************************//
//	Mat bgrImage,depth;


//	cvNamedWindow("Frame",cv::WINDOW_AUTOSIZE);
//	while(capturer->get_frame(bgrImage,&dt)==capture::CAPTURE_SUCESSFUL)
	{
//		capturer
//		imshow("Frame",bgrImage);
//		cv::normalize(capturer->positionFrameStored,depth,0,255,NORM_MINMAX,CV_8UC1); //Depth frame

//		capturer->project(true);
//		capturer->positionFrameStored.convertTo(depth,CV_8UC1);
//		imshow("depth",depth);
//		cv::waitKey(0);
//		cout<<"Time since last Capture"<<dt<<endl;
//		keypress = cv::waitKey(1);
//		if(keypress == 'q')
//			break;
//		if(keypress == 's')
//			capturer->saveFeed("images2Dani/colortest1_","images2Dani/positiontest1_",5);
//
}
	//***************************************************End Section for kinect*********************************//

//	cout<<"0 Seconds"<<endl;
//	for(int n=1;n<10;n++){
//	boost::this_thread::sleep(boost::posix_time::seconds(1));
//	cout<<n<<" Seconds"<<endl;
//	}
//
//	for(int n=1;n<5;n++){
//	boost::this_thread::sleep(boost::posix_time::seconds(1));
//	cout<<n<<" Seconds"<<endl;
//	}

	delete capturer;
	cout << "finished :) yay"<<endl;

}
