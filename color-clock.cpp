/*
 *	颜色时钟：
 *	时间不一定要用数字化表示，可以依靠感知获取时间
*/
#include <graphics.h>	//	图形库头文件
#include <math.h>

#define High 300	//	设置窗口大小
#define Width 300

int main()
{
	initgraph(Width, High);	
	double Hour, Minute, Second;
	BeginBatchDraw();	//	开始绘图

	while (1)	
	{
		SYSTEMTIME ti;
		GetLocalTime(&ti);		// 获取当前时间
		Hour = ti.wHour*(255/24);
		Minute = ti.wMinute*(255/60);
		Second = ti.wSecond*(255/60);
		setfillcolor(RGB(Hour, Minute, Second));
	//	setfillcolor(RGB(50, 0, 0));
		fillrectangle(0, 0, 300, 300);
		FlushBatchDraw();		//	避免闪烁
//		Sleep(1);
//		cleardevice();
	}

	EndBatchDraw();		//	结束绘图
	closegraph();		// 关闭绘图窗口
	return 0;
}

/************************************************
*												*
*				制作者：keri					*
*			最后修改时间：2020/2/21				*
*				版权：开源						*
*												*
************************************************/
