/*
 *	��ɫʱ�ӣ�
 *	ʱ�䲻һ��Ҫ�����ֻ���ʾ������������֪��ȡʱ��
*/
#include <graphics.h>	//	ͼ�ο�ͷ�ļ�
#include <math.h>

#define High 300	//	���ô��ڴ�С
#define Width 300

int main()
{
	initgraph(Width, High);	
	double Hour, Minute, Second;
	BeginBatchDraw();	//	��ʼ��ͼ

	while (1)	
	{
		SYSTEMTIME ti;
		GetLocalTime(&ti);		// ��ȡ��ǰʱ��
		Hour = ti.wHour*(255/24);
		Minute = ti.wMinute*(255/60);
		Second = ti.wSecond*(255/60);
		setfillcolor(RGB(Hour, Minute, Second));
	//	setfillcolor(RGB(50, 0, 0));
		fillrectangle(0, 0, 300, 300);
		FlushBatchDraw();		//	������˸
//		Sleep(1);
//		cleardevice();
	}

	EndBatchDraw();		//	������ͼ
	closegraph();		// �رջ�ͼ����
	return 0;
}

/************************************************
*												*
*				�����ߣ�keri					*
*			����޸�ʱ�䣺2020/2/21				*
*				��Ȩ����Դ						*
*												*
************************************************/
