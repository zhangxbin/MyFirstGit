#include "cv.h"                          /* OpenCV的基本函数头文件 */
#include "highgui.h"                     /* OpenCV的图像显示函数头文件 */
void  main()
{
	IplImage *img; /* 定义IplImage指针变量src */
	img = cvLoadImage("Fruits.jpg",-1);    /* 将img指向当前工程文件目录下的图像Fruits.jpg */
	cvNamedWindow("Fruits.jpg",0);      /* 定义一个窗口名为img的显示窗口 */
	cvShowImage("Fruits.jpg",img);    /* 在img窗口中，显示img指针所指的图像 */ 
	cvWaitKey(0);                      /* 无限等待，即图像总显示 */
	//cvSaveImage("d:/save.jpg",img);       /* 保存图像到D盘根目录下 */
	cvDestroyWindow("Fruit.jpg");   /* 销毁窗口 */
    cvReleaseImage(&img);               /* 释放IplImage指针img */
}
