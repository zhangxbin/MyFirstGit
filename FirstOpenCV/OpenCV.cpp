#include "cv.h"                          /* OpenCV�Ļ�������ͷ�ļ� */
#include "highgui.h"                     /* OpenCV��ͼ����ʾ����ͷ�ļ� */
void  main()
{
	IplImage *img; /* ����IplImageָ�����src */
	img = cvLoadImage("Fruits.jpg",-1);    /* ��imgָ��ǰ�����ļ�Ŀ¼�µ�ͼ��Fruits.jpg */
	cvNamedWindow("Fruits.jpg",0);      /* ����һ��������Ϊimg����ʾ���� */
	cvShowImage("Fruits.jpg",img);    /* ��img�����У���ʾimgָ����ָ��ͼ�� */ 
	cvWaitKey(0);                      /* ���޵ȴ�����ͼ������ʾ */
	//cvSaveImage("d:/save.jpg",img);       /* ����ͼ��D�̸�Ŀ¼�� */
	cvDestroyWindow("Fruit.jpg");   /* ���ٴ��� */
    cvReleaseImage(&img);               /* �ͷ�IplImageָ��img */
}
