#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;

int main() {
	Mat src,img,dst_1,dst_2,dst_3,dst_4;
	src = imread("C://Users//1234//Desktop//1.jpg");
	threshold(src, img, 100, 255, THRESH_BINARY);    //��ֵ��

	Mat element = getStructuringElement(MORPH_RECT,Size(3, 3),Point(-1,-1));

	erode(img, dst_1, element);               //��ʴ
	dilate(img, dst_2, element);                //����
	morphologyEx(img, dst_3, MORPH_OPEN,element);  //������
	morphologyEx(img, dst_4, MORPH_CLOSE, element);   //������

	imshow("��ʴ", dst_1);
	imshow("����", dst_2);
	imshow("������",dst_3);
	imshow("������",dst_4);
	waitKey(0);
	return 0;
}

