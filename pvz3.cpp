// pvz3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <Easyx.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"Winmm.lib")
#include <time.h>
#include <io.h>
#include <direct.h>
#include <math.h>

#define width 800
#define length 600

IMAGE dark;//
IMAGE op, op1, op2, sun, sun_1;
IMAGE sunF, sunF_1, sunFpng, sunFace;
IMAGE Pshtr, Pshtr_1, PshtrPng;
IMAGE shv, shv_1, shvMoving;
IMAGE peashot;
IMAGE plbk0;
IMAGE bank;
IMAGE plantcrd, plantcrd_d, plantcrd1, plantcrd1_d, plantcrd2, plantcrd2_d;
IMAGE carPng, car, car_1;
IMAGE zom00;
IMAGE zombie00, zombie00_1;
IMAGE zombieEating;
IMAGE goCha;
IMAGE pauseBut, pausePage, pausePage_1;
IMAGE shadow, peaShade;
IMAGE shadow_0, shadow_1;
IMAGE blackCov;
//loginBox
IMAGE dave;
IMAGE bk_d;//
//opening
IMAGE Log, lginbox;
//choosing
IMAGE exiting, helping, option;
IMAGE optionPage, optionPage_1;
IMAGE tag;
//map
IMAGE mapBK;
IMAGE backButt_L, backButtOn_L;
IMAGE route;
IMAGE Zomflag, flagB, Zomflag_d, flagB_d;
IMAGE note, noteBlack;
//pause page
IMAGE backButt, backButt_d;
IMAGE menu, menu_d;
IMAGE yes, yes_d, no, no_d;
IMAGE best, best_d;
IMAGE bestRec;
//showSunFlow
IMAGE sunF_0, sunF_111, sunF_2, sunF_3, sunF_4, sunF_5, sunF_6, sunF_7, sunF_8, sunF_9, sunF_10, sunF_11, sunF_12, sunF_13, sunF_14;
IMAGE sunF_15, sunF_16, sunF_17;
//showPshooter
IMAGE p00, p01, p02, p03, p04, p05, p06, p07, p08, p09, p10, p11, p12;
//plant chooser
IMAGE choser;
IMAGE bkRight;
IMAGE choserBut, choserBut_d;
IMAGE backButt_R, backButtOn_R;
//standing zom
IMAGE stZ00, stZ01, stZ02, stZ03, stZ04, stZ05, stZ06, stZ07, stZ08, stZ09, stZ10;
//nut
IMAGE nut;
IMAGE nut_m[11], nut_g[16], nut_b[15];
IMAGE eating[21], walking[21], wlk_c[21];
IMAGE che00;
IMAGE bomb[7];
void CharToTchar(const char* _char, TCHAR* tchar);

void startup() {
	int i;
	char path1[50];
	TCHAR path[50];
	for (i = 0; i < 7; i++) {
		sprintf_s(path1, "Pics\\gameplant\\cherryBomb\\0%d.png", i);
		CharToTchar(path1, path);
		loadimage(&bomb[i], path);
	}
	loadimage(&sunF, L"Pics\\gameplant\\sunFlower\\sunF.jpg");
	loadimage(&sunF_1, L"Pics\\gameplant\\sunFlower\\sunFcov.jpg");
	loadimage(&Pshtr, L"Pics\\gameplant\\Pshooter\\peashooter.jpg");
	loadimage(&Pshtr_1, L"Pics\\gameplant\\Pshooter\\peashootercov.jpg");

	loadimage(&shvMoving, L"Pics\\shovel.jpg");
	loadimage(&shv_1, L"Pics\\shovelcov.jpg");
	loadimage(&peashot, L"Pics\\gameplant\\Pshooter\\pea.png");
	loadimage(&sun, L"Pics\\sunsc.jpg");
	loadimage(&sun_1, L"Pics\\sunsccov.jpg");
	loadimage(&zom00, L"Pics\\zombie\\normZom\\normZom00.png");
	loadimage(&zombie00, L"Pics\\zombie\\normZom\\normZom.jpg");
	loadimage(&zombie00_1, L"Pics\\zombie\\normZom\\normZomcov.jpg");
	loadimage(&peashot, L"Pics\\gameplant\\Pshooter\\pea.png");
	loadimage(&op, L"Pics\\opening.png", width, length);
	loadimage(&carPng, L"Pics\\car.png");
	loadimage(&op1, L"Pics\\button\\startAd.png", 340, 150);
	loadimage(&op2, L"Pics\\button\\startAd_d.png", 340, 150);
	//cards
	loadimage(&plantcrd_d, L"Pics\\crd\\00_d.png", 48, 70);
	loadimage(&plantcrd1_d, L"Pics\\crd\\01_d.png", 48, 70);
	loadimage(&plantcrd, L"Pics\\crd\\00.png", 48, 70);
	loadimage(&plantcrd1, L"Pics\\crd\\01.png", 48, 70);
	loadimage(&plantcrd2, L"Pics\\crd\\02.png", 48, 70);
	loadimage(&plantcrd2_d, L"Pics\\crd\\02_d.png", 48, 70);

	loadimage(&plbk0, L"Pics\\playbkg00.jpg", width, length);
	loadimage(&bank, L"Pics\\headbk.png");
	loadimage(&sunFpng, L"Pics\\gameplant\\sunFlower\\00.png");
	loadimage(&PshtrPng, L"Pics\\gameplant\\Pshooter\\peashooter.png");
	loadimage(&shv, L"Pics\\shvbk.jpg", 87, 87);
	loadimage(&goCha, L"Pics\\zombie\\eatBrain.png");
	loadimage(&pauseBut, L"Pics\\button\\pauseButt.png");
	loadimage(&pausePage, L"Pics\\gamepause00.jpg");
	loadimage(&car, L"Pics\\car.jpg");
	loadimage(&car_1, L"Pics\\carcov.jpg");
	loadimage(&sunFace, L"Pics\\gameplant\\sunFlower\\sunFlow_light.png", 45, 34);
	loadimage(&shadow, L"pics\\gameplant\\shadow.png");
	loadimage(&peaShade, L"pics\\gameplant\\shadow.png", 34, 14);
	loadimage(&blackCov, L"Pics\\blackcov.png", width, length);
	loadimage(&sunF_0, L"Pics\\gameplant\\sunFlower\\00.png");
	loadimage(&shadow, L"pics\\gameplant\\shadow.png");
	loadimage(&sunF_111, L"Pics\\gameplant\\sunFlower\\01.png");
	loadimage(&sunF_2, L"Pics\\gameplant\\sunFlower\\02.png");
	loadimage(&sunF_3, L"Pics\\gameplant\\sunFlower\\03.png");
	loadimage(&sunF_4, L"Pics\\gameplant\\sunFlower\\04.png");
	loadimage(&sunF_5, L"Pics\\gameplant\\sunFlower\\05.png");
	loadimage(&sunF_6, L"Pics\\gameplant\\sunFlower\\06.png");
	loadimage(&sunF_7, L"Pics\\gameplant\\sunFlower\\07.png");
	loadimage(&sunF_8, L"Pics\\gameplant\\sunFlower\\08.png");
	loadimage(&sunF_9, L"Pics\\gameplant\\sunFlower\\09.png");
	loadimage(&sunF_10, L"Pics\\gameplant\\sunFlower\\10.png");
	loadimage(&sunF_11, L"Pics\\gameplant\\sunFlower\\11.png");
	loadimage(&sunF_12, L"Pics\\gameplant\\sunFlower\\12.png");
	loadimage(&sunF_13, L"Pics\\gameplant\\sunFlower\\13.png");
	loadimage(&sunF_14, L"Pics\\gameplant\\sunFlower\\14.png");
	loadimage(&sunF_15, L"Pics\\gameplant\\sunFlower\\15.png");
	loadimage(&sunF_16, L"Pics\\gameplant\\sunFlower\\16.png");
	loadimage(&sunF_17, L"Pics\\gameplant\\sunFlower\\17.png");
	loadimage(&pausePage, L"Pics\\gamepause00.jpg");//,306,362
	loadimage(&pausePage_1, L"Pics\\gamepause00cov.jpg");
	loadimage(&backButt, L"Pics\\button\\goBackBut.png", 300, 90);
	loadimage(&backButt_d, L"Pics\\button\\goBackBut_d.png", 300, 90);
	loadimage(&mapBK, L"Pics\\map.png", width, length);
	loadimage(&backButt_L, L"Pics\\button\\leftBack.png");
	loadimage(&backButtOn_L, L"Pics\\button\\leftBack.png", 72, 72);
	loadimage(&route, L"Pics\\route1.png", 128, 352);
	loadimage(&Zomflag, L"Pics\\zombie\\flag2.png", 37, 43);
	loadimage(&flagB, L"Pics\\zombie\\flag2.png");
	loadimage(&dark, L"pics\\opening_d.jpg", width, length);
	loadimage(&exiting, L"Pics\\exit.png", 48, 18);
	loadimage(&helping, L"Pics\\helping.png", 50, 20);
	loadimage(&option, L"Pics\\option.png", 60, 23);
	loadimage(&lginbox, L"Pics\\loginbox.jpg", 300, 200);
	loadimage(&Log, L"Pics\\login.jpg", width, length);
	loadimage(&dave, L"Pics\\Dave.png");
	loadimage(&bk_d, L"Pics\\login_d.jpg", width, length);
	loadimage(&p00, L"Pics\\gameplant\\Pshooter\\shooter00.png");
	loadimage(&p01, L"Pics\\gameplant\\Pshooter\\shooter01.png");
	loadimage(&p02, L"Pics\\gameplant\\Pshooter\\shooter02.png");
	loadimage(&p03, L"Pics\\gameplant\\Pshooter\\shooter03.png");
	loadimage(&p04, L"Pics\\gameplant\\Pshooter\\shooter04.png");
	loadimage(&p05, L"Pics\\gameplant\\Pshooter\\shooter05.png");
	loadimage(&p06, L"Pics\\gameplant\\Pshooter\\shooter06.png");
	loadimage(&p07, L"Pics\\gameplant\\Pshooter\\shooter07.png");
	loadimage(&p08, L"Pics\\gameplant\\Pshooter\\shooter08.png");
	loadimage(&p09, L"Pics\\gameplant\\Pshooter\\shooter09.png");
	loadimage(&p10, L"Pics\\gameplant\\Pshooter\\shooter10.png");
	loadimage(&p11, L"Pics\\gameplant\\Pshooter\\shooter11.png");
	loadimage(&p12, L"Pics\\gameplant\\Pshooter\\shooter12.png");
	loadimage(&zombieEating, L"Pics\\zombie\\normZom\\eating.png");
	loadimage(&Zomflag_d, L"Pics\\zombie\\flag_d.png", 37, 43);
	loadimage(&flagB_d, L"Pics\\zombie\\flag_d.png");
	loadimage(&note, L"Pics\\note.png", 165, 60);
	loadimage(&menu, L"Pics\\button\\menu.png", 300, 80);
	loadimage(&menu_d, L"Pics\\button\\menu_d.png", 300, 80);
	loadimage(&yes, L"Pics\\button\\yes.png", 140, 80);
	loadimage(&yes_d, L"Pics\\button\\yes_d.png", 140, 80);
	loadimage(&no, L"Pics\\button\\no.png", 140, 80);
	loadimage(&no_d, L"Pics\\button\\no_d.png", 140, 80);
	loadimage(&best, L"Pics\\button\\bR.png", 280, 80);
	loadimage(&best_d, L"Pics\\button\\bR_d.png", 280, 80);
	loadimage(&bestRec, L"Pics\\button\\bestRec.png");
	loadimage(&bkRight, L"Pics\\bkRight.png");
	loadimage(&choser, L"Pics\\choser.png", 465, 500);
	loadimage(&stZ00, L"Pics\\zombie\\normZom\\standing\\standing00.png");
	loadimage(&stZ01, L"Pics\\zombie\\normZom\\standing\\standing01.png");
	loadimage(&stZ02, L"Pics\\zombie\\normZom\\standing\\standing02.png");
	loadimage(&stZ03, L"Pics\\zombie\\normZom\\standing\\standing03.png");
	loadimage(&stZ04, L"Pics\\zombie\\normZom\\standing\\standing04.png");
	loadimage(&stZ05, L"Pics\\zombie\\normZom\\standing\\standing05.png");
	loadimage(&stZ06, L"Pics\\zombie\\normZom\\standing\\standing06.png");
	loadimage(&stZ07, L"Pics\\zombie\\normZom\\standing\\standing07.png");
	loadimage(&stZ08, L"Pics\\zombie\\normZom\\standing\\standing08.png");
	loadimage(&stZ09, L"Pics\\zombie\\normZom\\standing\\standing09.png");
	loadimage(&stZ10, L"Pics\\zombie\\normZom\\standing\\standing10.png");
	loadimage(&choserBut, L"Pics\\button\\choserBut.png");
	loadimage(&choserBut_d, L"Pics\\button\\choserBut_d.png");
	loadimage(&backButt_R, L"Pics\\button\\rightBack.png");
	loadimage(&backButtOn_R, L"Pics\\button\\rightBack.png", 72, 72);
	loadimage(&tag, L"Pics\\tag.png");
	loadimage(&nut, L"Pics\\gameplant\\wllNut\\00.png");
	loadimage(&che00, L"Pics\\gameplant\\cherryBomb\\00.png");
	for (i = 0; i < 20; i++) {
		sprintf_s(path1, "Pics\\zombie\\normZom\\eating\\%d.png", i + 1);
		CharToTchar(path1, path);
		loadimage(&eating[i], path);
	}
	for (i = 0; i < 11; i++) {
		sprintf_s(path1, "Pics\\gameplant\\wllNut\\mid_%d.png", i + 1);
		CharToTchar(path1, path);
		loadimage(&nut_m[i], path);
		*path = NULL;
	}
	for (i = 0; i < 16; i++) {
		sprintf_s(path1, "Pics\\gameplant\\wllNut\\good_%d.png", i);
		CharToTchar(path1, path);
		loadimage(&nut_g[i], path);
		*path = NULL;
	}
	for (i = 0; i < 15; i++) {
		sprintf_s(path1, "Pics\\gameplant\\wllNut\\bad_%d.png", i + 1);
		CharToTchar(path1, path);
		loadimage(&nut_b[i], path);
		*path = NULL;
	}
	for (i = 0; i < 21; i++) {
		sprintf_s(path1, "Pics\\zombie\\normZom\\walking\\%d.jpg", i);
		CharToTchar(path1, path);
		loadimage(&walking[i], path);
		*path = NULL;
	}
	for (i = 0; i < 21; i++) {
		sprintf_s(path1, "Pics\\zombie\\normZom\\walking\\%dCov.jpg", i);
		CharToTchar(path1, path);
		loadimage(&wlk_c[i], path);
		*path = NULL;
	}
}
int field[45][4] = {
		{200, 100, 260, 175},
		{260, 100, 323, 175},
		{323, 100, 385, 175},
		{385, 100, 447, 175},
		{447, 100, 517, 175},
		{517, 100, 578, 175},
		{578, 100, 635, 175},
		{635, 100, 695, 175},
		{695, 100, 765, 175},
		{200, 175, 257, 273},
		{257, 175, 321, 273},
		{321, 175, 385, 273},
		{385, 175, 445, 273},
		{445, 175, 510, 273},
		{510, 175, 578, 273},
		{578, 175, 633, 273},
		{633, 175, 695, 273},
		{695, 175, 765, 273},
		{200, 273, 259, 385},
		{259, 273, 321, 385},
		{321, 273, 385, 385},
		{385, 273, 448, 385},
		{448, 273, 510, 385},
		{510, 273, 578, 385},
		{578, 273, 633, 385},
		{633, 273, 698, 385},
		{698, 273, 769, 385},
		{197, 385, 260, 470},
		{260, 385, 323, 470},
		{323, 385, 385, 470},
		{385, 385, 447, 470},
		{447, 385, 511, 470},
		{511, 385, 578, 470},
		{578, 385, 633, 470},
		{633, 385, 697, 470},
		{697, 385, 769, 470},
		{190, 470, 259, 570},
		{259, 470, 321, 570},
		{321, 470, 386, 570},
		{386, 470, 448, 570},
		{448, 470, 512, 570},
		{512, 470, 578, 570},
		{578, 470, 633, 570},
		{633, 470, 699, 570},
		{699, 470, 769, 570},
};
int map[45] = { 0 };
typedef struct _acc {
	char id[16];
	char psw[16];
	int bestTime[10];
	int bestSun[10];
	int plants[12];
}acc;

typedef struct _Pshooter {
	int blood;//10
	struct _Pshooter* next;
	int fieldN;
	int x;
	int y;
	double time2;

}Pshooter;
Pshooter* shooter = NULL;
typedef struct _sunFlow {
	int blood;//10
	struct _sunFlow* next;
	int fieldN;
	int time1;
	double time2;
	int lightup;
	double dalta;
	int showSun;
	int x;
	int y;

}sunFlow;
sunFlow* sF = NULL;
typedef struct _nut {
	int blood;//600
	struct _nut* next;
	int fieldN;
	double time2;
	int x;
	int y;
}Nut;
Nut* nutt = NULL;
typedef struct _cB {
	struct _cB* next;
	int fieldN;
	int part;
	double time2;
	int killing;
	int x;
	int y;

}cherry;
cherry* cheBomb = NULL;
typedef struct _zombie {
	int blood;//10
	float x;
	int y;
	float v;//1
	int pea_x[10];
	int pea_y;
	int pea_v;//15
	int stopField;
	int stop;
	int Pshooter_x[10];
	int row;
	int isShooting[10];//0
	int burning;
	double time;
	struct _zombie* next;
}zombie;
zombie* zom = NULL;
typedef struct _crd {
	int num;
	int No;
	int x, y;
	IMAGE* crd;
	IMAGE* crd_d;
	IMAGE* plant;
	IMAGE* plant_cov;
	int sun;
	int isMoving;
	int moveToX, moveToY;
	double movingX, movingY;
	int isChosen;
	struct _crd* next;
}card;
card* crd = NULL;
typedef struct _LAWN {
	int x;
	int y;
	int row;
	int isMoving;
	_LAWN* next;
}LAWN;
LAWN* lawn = NULL;
LAWN* initLawn() {
	int i;
	for (i = 0; i < 5; i++) {
		LAWN* l = (LAWN*)malloc(sizeof(LAWN));
		l->next = NULL;
		l->row = i;
		l->x = 135 - 5 * i;
		l->y = 100 + 95 * i;
		l->isMoving = 0;
		LAWN* last = lawn;
		if (!last) {
			lawn = l;
		}
		else {
			while (last->next) {
				last = last->next;
			}
			last->next = l;
		}
	}
	return lawn;
}
int confirm(acc user) {
	FILE* fp;
	acc temp;
	if (fopen_s(&fp, "users\\user.txt", "r")) {
		printf("failed to open\n");
	}
	else {
		printf("open successfully\n");
	}
	while (1) {
		if (!feof(fp)) {
			fscanf_s(fp, "%s %s ", temp.id, 16, temp.psw, 16);
			printf("id: %s psw: %s\n", temp.id, temp.psw);
			if (strcmp(user.id, temp.id) == 0) {
				printf("found the user\n");
				if (strcmp(user.psw, temp.psw) == 0) {
					fclose(fp);
					printf("Log in\n");
					return 1;
				}
				else {
					printf("Wrong passwords\n");
					return 0;
				}
				//printf("same name %s", temp.id);

			}
		}
		else {
			break;
		}
	}
	printf("does not find user\n");
	return -1;
}
int registers(acc user) {
	FILE* fp;
	acc temp;
	char path[50] = { '0' };
	char path2[50] = { '0' };
	if (fopen_s(&fp, "users\\user.txt", "r")) {
		printf("failed to open\n");
	}
	else {
		printf("open successfully\n");
	}
	while (1) {
		if (!feof(fp)) {
			fscanf_s(fp, "%s %s ", temp.id, 16, temp.psw, 16);
			if (strcmp(user.id, temp.id) == 0) {
				fclose(fp);
				return 0;
			}
		}
		else {
			break;
		}
	}
	fclose(fp);
	fopen_s(&fp, "users\\user.txt", "a");
	fprintf(fp, " %s %s", user.id, user.psw);
	fclose(fp);

	sprintf_s(path, "users\\%s\\%s.txt", user.id, user.id);
	sprintf_s(path2, "users\\%s", user.id);
	_mkdir(path2);
	fopen_s(&fp, path, "a");
	fprintf(fp, "%d %d \n", 1, 2);
	fclose(fp);
	return 1;
}
void CharToTchar(const char* _char, TCHAR* tchar) {
	int iLength;
	iLength = MultiByteToWideChar(CP_ACP, 0, _char, strlen(_char) + 1, NULL, 0);
	MultiByteToWideChar(CP_ACP, 0, _char, strlen(_char) + 1, tchar, iLength);
}
void typeandPrt(int left, int top, int right, int bttm, char psw, char** ret, IMAGE* temp) {
	char words[50] = { '0' };
	TCHAR words1[50];
	MOUSEMSG m;
	char empty[50] = { '0' };
	char tempchar;
	char tempStr[50];
	bool isTyping = true;
	int cnt = 0;
	*ret = (char*)malloc(30);
	//strcpy_s(words, strlen(*ret) + 1, *ret);
	//cnt = strlen(words);
	while (isTyping) {
		getimage(temp, left, top, right - left, bttm - top);
		if (MouseHit()) {
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN) {
				if (m.x > right || m.x < left || m.y > bttm || m.y < top) {
					strcpy_s(*ret, strlen(words) + 1, words);
					isTyping = false;
				}
			}
		}
		while (_kbhit()) {
			if (cnt > 16) {
				break;
			}
			tempchar = _getch();
			tempStr[cnt] = tempchar;
			if (tempStr[0] != 8) {
				if (tempchar == 8) {
					cnt -= 2;
					words[cnt + 1] = '0';
					words[cnt + 1] = '\0';
				}
				if (tempchar == 13) {
					strcpy_s(*ret, strlen(words) + 1, words);
					isTyping = false;
					setlinecolor(LIGHTGRAY);
					rectangle(left, top, right, bttm);
					break;
				}
				else {
					for (int i = 0; i < cnt + 1; i++) {
						words[i] = tempStr[i];
					}
					words[cnt + 1] = '\0';
					cnt++;
					CharToTchar(words, words1);
					words1[cnt + 1] = '\0';
					if (psw == 'y') {
						BeginBatchDraw();
						setfillcolor(WHITE);
						fillrectangle(left, top, right, bttm);
						setlinecolor(BLACK);
						rectangle(left, top, right, bttm);
						for (int i = 0; i < cnt; i++) {
							outtextxy(left + 8 + 8 * i, top + 13, '*');
						}
						EndBatchDraw();
					}
					else {
						BeginBatchDraw();
						setfillcolor(WHITE);
						fillrectangle(left, top, right, bttm);
						setlinecolor(BLACK);
						rectangle(left, top, right, bttm);
						outtextxy(left + 8, top + 7, words1);
						EndBatchDraw();
					}
				}
				break;
			}
		}
	}
}
void drawAlpha(IMAGE* picture, int  picture_x, int picture_y) //x为载入图片的X坐标，y为Y坐标
{
	// 变量初始化
	DWORD* dst = GetImageBuffer();    // GetImageBuffer()函数，用于获取绘图设备的显存指针，EASYX自带
	DWORD* draw = GetImageBuffer();
	DWORD* src = GetImageBuffer(picture); //获取picture的显存指针
	int picture_width = picture->getwidth(); //获取picture的宽度，EASYX自带
	int picture_height = picture->getheight(); //获取picture的高度，EASYX自带
	int graphWidth = getwidth();       //获取绘图区的宽度，EASYX自带
	int graphHeight = getheight();     //获取绘图区的高度，EASYX自带
	int dstX = 0;    //在显存里像素的角标

	// 实现透明贴图 公式： Cp=αp*FP+(1-αp)*BP ， 贝叶斯定理来进行点颜色的概率计算
	for (int iy = 0; iy < picture_height; iy++)
	{
		for (int ix = 0; ix < picture_width; ix++)
		{
			int srcX = ix + iy * picture_width; //在显存里像素的角标
			int sa = ((src[srcX] & 0xff000000) >> 24); //0xAArrggbb;AA是透明度
			int sr = ((src[srcX] & 0xff0000) >> 16); //获取RGB里的R
			int sg = ((src[srcX] & 0xff00) >> 8);   //G
			int sb = src[srcX] & 0xff;              //B
			if (ix >= 0 && ix <= graphWidth && iy >= 0 && iy <= graphHeight && dstX <= graphWidth * graphHeight)
			{
				dstX = (ix + picture_x) + (iy + picture_y) * graphWidth; //在显存里像素的角标
				int dr = ((dst[dstX] & 0xff0000) >> 16);
				int dg = ((dst[dstX] & 0xff00) >> 8);
				int db = dst[dstX] & 0xff;
				draw[dstX] = ((sr * sa / 255 + dr * (255 - sa) / 255) << 16)  //公式： Cp=αp*FP+(1-αp)*BP  ； αp=sa/255 , FP=sr , BP=dr
					| ((sg * sa / 255 + dg * (255 - sa) / 255) << 8)         //αp=sa/255 , FP=sg , BP=dg
					| (sb * sa / 255 + db * (255 - sa) / 255);              //αp=sa/255 , FP=sb , BP=db
			}
		}
	}
}
int SignupBox(acc* admin) {													//注册
	IMAGE tempU, tempP;
	LOGFONT f;
	TCHAR usr[] = _T("Username");
	TCHAR psw[] = _T("Password");
	TCHAR back[] = _T("Back");
	TCHAR signup[] = _T("Sign up");
	TCHAR idE[] = _T("The user exists, try again!");
	TCHAR idEmp1[] = _T("The username or password is empty");
	TCHAR idEmp2[] = _T("try again!");
	MOUSEMSG m;
	acc theUser = { '0','0' };
	char* user;
	char* pwd;
	char empty[16] = { '0' };
	int regFlag = 0;
	BeginBatchDraw();
	while (1) {
		m = GetMouseMsg();
		putimage(0, 0, &bk_d);
		putimage(250, 200, &lginbox);
		gettextstyle(&f);
		f.lfHeight = 25;
		f.lfWidth = 8;
		settextstyle(&f);
		settextcolor(BLACK);
		outtextxy(255, 235, usr);
		outtextxy(257, 314, psw);
		setfillcolor(WHITE);
		fillrectangle(350, 225, 525, 265);//box1 left up right down
		fillrectangle(350, 305, 525, 345);

		setfillcolor(WHITE);
		setlinecolor(BLACK);
		//right 
		rectangle(420, 360, 500, 390);
		fillrectangle(420, 360, 500, 390);
		settextcolor(BLACK);
		outtextxy(431, 363, signup);
		//left button
		rectangle(300, 360, 380, 390);
		fillrectangle(300, 360, 380, 390);
		outtextxy(320, 363, back);
		BeginBatchDraw();
		putimage(350, 225, &tempU);
		putimage(350, 305, &tempP);
		setlinecolor(LIGHTGRAY);
		rectangle(350, 225, 525, 265);
		rectangle(350, 305, 525, 345);
		drawAlpha(&dave, 0, 82);
		FlushBatchDraw();
		if (m.x >= 420 && m.x <= 500 && m.y >= 360 && m.y <= 390) {//sign up
			setfillcolor(YELLOW);
			fillrectangle(420, 360, 500, 390);
			settextcolor(BLACK);
			outtextxy(431, 363, signup);
			FlushBatchDraw();
			if (m.uMsg == WM_LBUTTONDOWN) {
				if (strcmp(theUser.id, empty) == 0 || strcmp(theUser.psw, empty) == 0) {
					BeginBatchDraw();
					setfillcolor(WHITE);
					fillrectangle(350, 225, 525, 265);
					fillrectangle(350, 305, 525, 345);//pass
					getimage(&tempU, 350, 225, 525, 265);
					getimage(&tempP, 350, 305, 525, 345);
					//printf("the user is empty\n");
					putimage(250, 200, &lginbox);
					drawAlpha(&dave, 0, 82);
					settextcolor(RED);
					outtextxy(250, 250, idEmp1);
					outtextxy(350, 310, idEmp2);
					EndBatchDraw();
					while (1) {
						m = GetMouseMsg();
						if (m.uMsg == WM_LBUTTONDOWN) {
							break;
						}
					}
					continue;
				}
				else {
					if (registers(*admin)) {
						printf("sucess\n");
						return 3;
					}
					else {
						BeginBatchDraw();
						setfillcolor(WHITE);
						fillrectangle(350, 225, 525, 265);
						fillrectangle(350, 305, 525, 345);//pass
						getimage(&tempU, 350, 225, 525, 265);
						getimage(&tempP, 350, 305, 525, 345);
						printf("the user exists, try again\n");
						putimage(250, 200, &lginbox);
						drawAlpha(&dave, 0, 82);
						settextcolor(RED);
						outtextxy(295, 280, idE);
						EndBatchDraw();
						while (1) {
							m = GetMouseMsg();
							if (m.uMsg == WM_LBUTTONDOWN) {
								break;
							}
						}
						continue;
					}

				}
			}


		}
		else if (m.x >= 300 && m.x <= 380 && m.y >= 360 && m.y <= 390) {//back
			setfillcolor(YELLOW);
			fillrectangle(300, 360, 380, 390);
			settextcolor(BLACK);
			outtextxy(320, 363, back);
			FlushBatchDraw();
			if (m.uMsg == WM_LBUTTONDOWN) {
				//opening();
				return 0;
			}
		}
		else if (m.uMsg == WM_LBUTTONDOWN && m.x <= 525 && m.x >= 350 && m.y <= 265 && m.y >= 225) {
			printf("wantting to type in\n");
			setlinecolor(BLACK);
			rectangle(350, 225, 525, 265);
			setlinecolor(LIGHTGRAY);
			rectangle(350, 305, 525, 345);
			FlushBatchDraw();
			typeandPrt(350, 225, 525, 265, 'n', &user, &tempU);
			//strcpy_s(theUser.id, strlen(user) + 1, user);
			strcpy_s(admin->id, strlen(user) + 1, user);
			printf("user is: %s", admin->id);
			continue;
		}
		else if (m.uMsg == WM_LBUTTONDOWN && m.x <= 525 && m.x >= 350 && m.y <= 345 && m.y >= 305) {
			setlinecolor(BLACK);
			rectangle(350, 305, 525, 345);
			setlinecolor(LIGHTGRAY);
			rectangle(350, 225, 525, 265);
			FlushBatchDraw();
			typeandPrt(350, 305, 525, 345, 'y', &pwd, &tempP);
			//strcpy_s(theUser.psw, strlen(pwd) + 1, pwd);
			strcpy_s(admin->psw, strlen(pwd) + 1, pwd);
			continue;
		}
		FlushBatchDraw();
	}
	EndBatchDraw();
};
int LoginBox(acc* admin) {														//登录
	IMAGE tempU, tempP;
	LOGFONT f;
	int flag = 0;
	char* pwd;
	char* user = NULL;
	acc theUser;
	TCHAR* userT = NULL;
	TCHAR* pwdT = NULL;
	TCHAR usr[] = _T("Username");
	TCHAR psw[] = _T("Password");
	TCHAR game[] = _T("Log in");
	TCHAR back[] = _T("Back");
	TCHAR wrongP[] = _T("Wrong passwords, try again");
	TCHAR notFound[] = _T("404 Not Found");

	BeginBatchDraw();
	while (1) {
		MOUSEMSG m3 = GetMouseMsg();
		putimage(0, 0, &bk_d);
		putimage(250, 200, &lginbox);
		gettextstyle(&f);
		f.lfHeight = 25;
		f.lfWidth = 8;
		settextstyle(&f);
		settextcolor(BLACK);
		outtextxy(255, 235, usr);
		outtextxy(257, 314, psw);
		setfillcolor(WHITE);
		fillrectangle(350, 225, 525, 265);//box1 left up right down
		fillrectangle(350, 305, 525, 345);
		//right 没用的按钮：play
		setfillcolor(WHITE);
		setlinecolor(BLACK);
		rectangle(420, 360, 500, 390);
		fillrectangle(420, 360, 500, 390);
		//left button
		rectangle(300, 360, 380, 390);
		fillrectangle(300, 360, 380, 390);

		gettextstyle(&f);
		f.lfHeight = 25;
		f.lfWidth = 8;
		settextstyle(&f);
		settextcolor(BLACK);
		outtextxy(436, 363, game);
		outtextxy(320, 363, back);
		BeginBatchDraw();
		putimage(350, 225, &tempU);
		putimage(350, 305, &tempP);
		setlinecolor(LIGHTGRAY);
		rectangle(350, 225, 525, 265);
		rectangle(350, 305, 525, 345);
		drawAlpha(&dave, 0, 82);
		FlushBatchDraw();
		if (m3.uMsg == WM_LBUTTONDOWN && m3.x <= 525 && m3.x >= 350 && m3.y <= 265 && m3.y >= 225) {
			//	printf("wantting to type in\n");
			setlinecolor(BLACK);
			rectangle(350, 225, 525, 265);
			FlushBatchDraw();
			typeandPrt(350, 225, 525, 265, 'n', &user, &tempU);
			strcpy_s(admin->id, strlen(user) + 1, user);
			continue;
		}
		else if (m3.uMsg == WM_LBUTTONDOWN && m3.x <= 525 && m3.x >= 350 && m3.y <= 345 && m3.y >= 305) {
			setlinecolor(BLACK);
			rectangle(350, 305, 525, 345);
			FlushBatchDraw();
			typeandPrt(350, 305, 525, 345, 'y', &pwd, &tempP);
			strcpy_s(admin->psw, strlen(pwd) + 1, pwd);
			continue;
		}
		else if (m3.x <= 500 && m3.x >= 420 && m3.y <= 390 && m3.y >= 360) {
			setfillcolor(YELLOW);
			fillrectangle(420, 360, 500, 390);
			settextcolor(BLACK);
			gettextstyle(&f);
			f.lfHeight = 25;
			f.lfWidth = 8;
			settextstyle(&f);
			outtextxy(436, 363, game);
			if (m3.uMsg == WM_LBUTTONDOWN && m3.x <= 500 && m3.x >= 420 && m3.y <= 390 && m3.y >= 360) {
				EndBatchDraw();
				flag = confirm(*admin);
				if (flag == 1) {
					return 3;
				}
				else if (flag == 0) {//wrong passwords, try again
					setfillcolor(WHITE);
					fillrectangle(350, 225, 525, 265);
					fillrectangle(350, 305, 525, 345);//pass
					getimage(&tempU, 350, 225, 525, 265);
					getimage(&tempP, 350, 305, 525, 345);
					putimage(250, 200, &lginbox);
					drawAlpha(&dave, 0, 82);
					gettextstyle(&f);
					f.lfHeight = 28;
					f.lfWidth = 10;
					settextstyle(&f);
					settextcolor(RED);
					outtextxy(270, 280, wrongP);
					while (1) {
						m3 = GetMouseMsg();
						if (m3.uMsg == WM_LBUTTONDOWN) {
							break;
						}
					}
					continue;
				}
				else if (flag == -1) {
					setfillcolor(WHITE);
					fillrectangle(350, 225, 525, 265);
					fillrectangle(350, 305, 525, 345);//pass
					getimage(&tempU, 350, 225, 525, 265);
					getimage(&tempP, 350, 305, 525, 345);
					putimage(250, 200, &lginbox);
					drawAlpha(&dave, 0, 82);
					gettextstyle(&f);
					f.lfHeight = 28;
					f.lfWidth = 10;
					settextstyle(&f);
					settextcolor(RED);
					outtextxy(320, 280, notFound);
					while (1) {
						m3 = GetMouseMsg();
						if (m3.uMsg == WM_LBUTTONDOWN) {
							break;
						}
					}
					continue;
				}
			}
		}
		else if (m3.x >= 300 && m3.x <= 380 && m3.y >= 360 && m3.y <= 390) {
			setfillcolor(YELLOW);
			fillrectangle(300, 360, 380, 390);
			settextcolor(BLACK);
			gettextstyle(&f);
			f.lfHeight = 25;
			f.lfWidth = 8;
			settextstyle(&f);
			outtextxy(320, 363, back);
			if (m3.uMsg == WM_LBUTTONDOWN) {
				EndBatchDraw();
				return 0;
			}
		}
		FlushBatchDraw();
	}
	EndBatchDraw();
};
void click() {
	MOUSEMSG m1;
	RECT r = { 0,0,width,length };

	putimage(0, 0, &Log);
	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 30;
	_tcscpy_s(f.lfFaceName, _T("Comic Sans MS"));
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	drawtext(_T("Click TO Continue"), &r, DT_CENTER | DT_BOTTOM | DT_SINGLELINE);
	while (1) {
		m1 = GetMouseMsg();
		if (m1.uMsg == WM_LBUTTONDOWN) {
			//printf("get click\n");
			break;
		}
	}
}
int opening() {															//开始页
	MOUSEMSG m1;
	MOUSEMSG m2;
	RECT r = { 0,0,width,length };
	TCHAR s1[] = _T("Log in");
	TCHAR s2[] = _T("Sign up");
	putimage(0, 0, &Log);
	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 30;
	f.lfWidth = 10;
	_tcscpy_s(f.lfFaceName, _T("Comic Sans MS"));
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);

	int flag1 = 0;
	while (true) {
		mciSendString(L"open Music\\Mwaiting.mp3 alias waiting", NULL, 0, NULL);
		mciSendString(L"play waiting repeat", NULL, 0, NULL);
		m1 = GetMouseMsg();
		cleardevice();
		putimage(0, 0, &Log);
		putimage(250, 200, &lginbox);
		settextcolor(BLACK);
		outtextxy(367, 230, s1);
		outtextxy(362, 310, s2);
		setlinecolor(BLACK);
		rectangle(310, 220, 490, 270);
		rectangle(310, 300, 490, 350);
		while (1) {
			m2 = GetMouseMsg();
			if (m2.x <= 490 && m2.x >= 310 && m2.y <= 270 && m2.y >= 220) {				//登录box
				BeginBatchDraw();
				setfillcolor(YELLOW);
				fillrectangle(310, 220, 490, 270);
				outtextxy(367, 230, s1);
				EndBatchDraw();
				if (m2.uMsg == WM_LBUTTONDOWN) {
					return 1;
				}
			}
			else if (m2.x <= 490 && m2.x >= 310 && m2.y <= 350 && m2.y >= 300) {					//注册box	 
				BeginBatchDraw();
				setfillcolor(YELLOW);
				fillrectangle(310, 300, 490, 350);
				outtextxy(362, 310, s2);
				EndBatchDraw();
				if (m2.uMsg == WM_LBUTTONDOWN) {
					return 2;
				}
			}
			else {
				BeginBatchDraw();
				putimage(250, 200, &lginbox);
				settextcolor(BLACK);
				outtextxy(367, 230, s1);
				outtextxy(362, 310, s2);
				setlinecolor(BLACK);
				rectangle(310, 220, 490, 270);
				rectangle(310, 300, 490, 350);
				EndBatchDraw();
			}
		}
		break;
	}
};
void showcherry() {
	cherry* c;
	int frame = 7;
	int num = 0;
	for (c = cheBomb; c; c = c->next) {
		double nowt = ((double)clock()) / CLOCKS_PER_SEC;
		double t = nowt * 1000;
		int part = (t - c->time2) / 120;
		//printf("   num    %d\n", (part % frame) - (c->part%frame)-2);
		num = (part % frame) - (c->part%frame);
		drawAlpha(&bomb[num], c->x, c->y);
		printf("%d\n", num);
		if (c->killing == 0 && num == 6) {
			c->killing = 1;
		}
	}
}
void showSunFlow() {
	sunFlow* p;
	int frameZom;
	for (p = sF; p; p = p->next) {
		/*double nowt = ((double)clock()) / CLOCKS_PER_SEC;
		double t = nowt *1000;
		int part = (t - p->time1) / 120;
		 frameZom = 18;*/
		double nowt = ((double)clock()) / CLOCKS_PER_SEC;
		double t = nowt * 1000;
		int part = (t - p->time2) / 120;
		frameZom = 18;
		if (part % frameZom == 0) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_0, p->x, p->y);
		}
		if (part % frameZom == 1) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_111, p->x, p->y);
		}
		if (part % frameZom == 2) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_2, p->x, p->y);
		}
		if (part % frameZom == 3) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_3, p->x, p->y);
		}
		if (part % frameZom == 4) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_4, p->x, p->y);
		}
		if (part % frameZom == 5) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_5, p->x, p->y);
		}
		if (part % frameZom == 6) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_6, p->x, p->y);
		}
		if (part % frameZom == 7) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_7, p->x, p->y);
		}
		if (part % frameZom == 8) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_8, p->x, p->y);
		}
		if (part % frameZom == 9) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_9, p->x, p->y);
		}
		if (part % frameZom == 10) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_10, p->x, p->y);
		}
		if (part % frameZom == 11) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_11, p->x, p->y);
		}
		if (part % frameZom == 12) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_12, p->x, p->y);
		}
		if (part % frameZom == 13) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_13, p->x, p->y);
		}
		if (part % frameZom == 14) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_14, p->x, p->y);
		}
		if (part % frameZom == 15) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_15, p->x, p->y);
		}
		if (part % frameZom == 16) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_16, p->x, p->y);
		}
		if (part % frameZom == 17) {
			drawAlpha(&shadow, p->x - 7, p->y + 50);
			drawAlpha(&sunF_17, p->x, p->y);
		}
	}
}
int smartZomZom() {
	int plantNum[5] = { 0 };
	int i;
	int min = 800, min2 = 800;
	int max = 0;
	int row1, row2, row3;
	int row = 0;
	int counter = 0;
	for (i = 0; i < 45; i++) {
		if (map[i] == 1) {
			plantNum[i / 9] += 1;
		}
		else if (map[i] == 2) {
			plantNum[i / 9] += 2;
		}
	}
	min = plantNum[0];
	for (i = 0; i < 5; i++) {
		if (min >= plantNum[i]) {
			min = plantNum[i];
			row1 = i;
		}
		if (plantNum[i] >= max) {
			max = plantNum[i];
			row3 = i;
		}
	}
	for (i = 0; i < 5; i++) {
		if (min2 >= plantNum[i] && row1 != i) {
			min2 = plantNum[i];
			row2 = i;
		}
	}
	switch (rand() % 3) {
	case 1:
		row = row1;
		break;
	case 2:
		row = row2;
		break;
	case 3:
		row = row3;
		break;
	}
	return row;
}
zombie* create_zom(int zomX, int zomRow) {
	zombie* p1 = (zombie*)malloc(sizeof(zombie));
	p1->x = zomX;
	double timeD = (double)clock();
	p1->time = timeD * 176 + (rand() % 700);//+ (rand() % 30)
	p1->y = field[zomRow * 9][1];
	p1->row = zomRow;
	p1->next = NULL;
	p1->blood = 10;
	p1->pea_y = 0;
	p1->stop = 0;
	p1->stopField = -(1);
	p1->v = 0.3;
	p1->pea_v = 13;
	zombie* last = zom;
	if (!last) {
		zom = p1;
	}
	else {
		while (last->next) {
			last = last->next;
		}
		last->next = p1;
	}
	return zom;
};
LAWN* del_lawn() {
	LAWN* p;
	LAWN* q;
	q = NULL;
	for (p = lawn; p; q = p, p = p->next) {
		if (p->x >= 800) {
			if (p->row == 0) {
				printf("row=0\n");
			}
			if (q) {
				q->next = p->next;
			}
			else {
				lawn = p->next;
			}
			free(p);
			printf("LAAAAAAAWN Is Dead! Long Live The New Lawn\n");
			break;
		}
	}
	return lawn;
}
zombie* del_deadZom() {
	zombie* p;
	zombie* q;
	q = NULL;
	for (p = zom; p; q = p, p = p->next) {
		if (p->blood <= 0) {
			if (q) {
				q->next = p->next;
			}
			else {
				zom = p->next;
			}
			free(p);
			printf("Zombie is dead & deleted!!\n");
			break;
		}
		if (p->v == -(70) && p->x >= 800) {
			if (q) {
				q->next = p->next;
			}
			else {
				zom = p->next;
			}
			free(p);
			printf("Zombie is dead & deleted!!\n");
			break;
		}
	}
	return zom;
}
zombie* del_allZom() {
	zombie* p;
	zombie* q = NULL;
	int cnt = 0;
	for (p = zom; p; p = p->next) {
		cnt++;
	}
	while (1) {
		if (cnt == 0) {
			break;
		}
		else {
			for (p = zom; p; q = p, p = p->next) {
				if (q) {
					q->next = p->next;
				}
				else {
					zom = p->next;
				}
				free(p);
				printf("Zombie is dead & deleted!!\n");
				cnt--;
				break;
			}
		}
	}
	return zom;
}
void showStandingZom() {
	zombie* z;
	z = zom;
	int n = 1;
	int frameZom = 11;
	int x = 0, y = 0;
	for (z = zom; z; z = z->next) {
		double nowt = ((double)clock()) / CLOCKS_PER_SEC;
		double t = nowt * 1000;
		int part = (t - z->time) / -(88);
		if (z->row == 1 || z->row == 2 || z->row == 4) {
			x = z->x;
			y = z->y - 20;
		}
		else {
			x = z->x;
			y = z->y - 43;
		}
		if (part % frameZom == 0) {
			drawAlpha(&stZ00, x, y);
		}
		if (part % frameZom == 1) {
			drawAlpha(&stZ01, x, y);
		}
		if (part % frameZom == 2) {
			drawAlpha(&stZ02, x, y);
		}
		if (part % frameZom == 3) {
			drawAlpha(&stZ03, x, y);
		}
		if (part % frameZom == 4) {
			drawAlpha(&stZ04, x, y);
		}
		if (part % frameZom == 5) {
			drawAlpha(&stZ05, x, y);
		}
		if (part % frameZom == 6) {
			drawAlpha(&stZ06, x, y);
		}
		if (part % frameZom == 7) {
			drawAlpha(&stZ07, x, y);
		}
		if (part % frameZom == 8) {
			drawAlpha(&stZ08, x, y);
		}
		if (part % frameZom == 9) {
			drawAlpha(&stZ09, x, y);
		}
		if (part % frameZom == 10) {
			drawAlpha(&stZ10, x, y);
		}
	}
}
void showGameZom() {
	zombie* p;
	int eatingfrm = 20;
	int x = 0, y = 0;
	int num = 0;
	for (p = zom; p; p = p->next) {
		if (p->row == 1 || p->row == 2 || p->row == 4) {
			x = (int)p->x;
			y = p->y - 20;
		}
		else {
			x = (int)p->x;
			y = p->y - 43;
		}
		if (p->stop == 1) {
			double nowt = ((double)clock()) / CLOCKS_PER_SEC;
			double t = nowt * 1000;
			int part = (t - p->time) / -130;
			num = 19 - (part % eatingfrm);
			drawAlpha(&eating[num], x, y);
		}
		else if (p->stop == 0) {
			double nowt = ((double)clock()) / CLOCKS_PER_SEC;
			double t = nowt * 1000;
			int part = (t - p->time) / -220;
			num = (part % 21);
			putimage(x, y, &wlk_c[num], NOTSRCERASE);
			putimage(x, y, &walking[num], SRCINVERT);
		}
	}
}
card* create_card(acc admin) {
	int i;
	for (i = 0; admin.plants[i]; i++) {
		card* c = (card*)malloc(sizeof(card));
		c->num = admin.plants[i];
		c->x = 17 + i * 55;
		c->crd = new IMAGE();
		c->crd_d = new IMAGE();
		c->plant = new IMAGE();
		c->plant_cov = new IMAGE();
		if (c->num == 1) {
			c->sun = 50;
			loadimage(c->crd, L"Pics\\crd\\00.png", 48, 70);
			loadimage(c->crd_d, L"Pics\\crd\\00_d.png", 48, 70);
			loadimage(c->plant, L"Pics\\gameplant\\sunFlower\\sunF.jpg");
			loadimage(c->plant_cov, L"Pics\\gameplant\\sunFlower\\sunFcov.jpg");
		}
		else if (c->num == 2) {
			c->sun = 100;
			loadimage(c->crd, L"Pics\\crd\\01.png", 48, 70);
			loadimage(c->crd_d, L"Pics\\crd\\01_d.png", 48, 70);
			loadimage(c->plant, L"Pics\\gameplant\\Pshooter\\peashooter.jpg");
			loadimage(c->plant_cov, L"Pics\\gameplant\\Pshooter\\peashootercov.jpg");
		}
		else if (c->num == 3) {
			c->sun = 150;
			loadimage(c->crd, L"Pics\\crd\\02.png", 48, 70);
			loadimage(c->crd_d, L"Pics\\crd\\02_d.png", 48, 70);
			loadimage(c->plant, L"Pics\\gameplant\\cherryBomb\\00.jpg", 81, 61);
			loadimage(c->plant_cov, L"Pics\\gameplant\\cherryBomb\\00Cov.jpg", 81, 61);
		}
		else if (c->num == 4) {
			c->sun = 50;
			loadimage(c->crd, L"Pics\\crd\\03.png", 48, 70);
			loadimage(c->crd_d, L"Pics\\crd\\03_d.png", 48, 70);
			loadimage(c->plant, L"Pics\\gameplant\\wllNut\\00.jpg", 75, 75);
			loadimage(c->plant_cov, L"Pics\\gameplant\\wllNut\\00Cov.jpg", 75, 75);
		}
		c->y = 130 + i / 8 * 75;
		c->isChosen = 0;
		c->moveToY = 9;
		c->movingX = 0;
		c->movingY = 0;
		c->next = NULL;
		c->isMoving = 0;
		c->moveToX = 0;
		card* last = crd;
		if (!crd) {
			crd = c;
		}
		else {
			while (last->next) {
				last = last->next;
			}
			last->next = c;
		}
	}
	return crd;
}
cherry* create_cheBomb(int putX, int putY, int F_num) {
	cherry* c=(cherry*)malloc(sizeof(cherry));
	c->x = putX-20;
	c->y = putY;
	c->next = NULL;
	c->fieldN = F_num;
	c->killing = 0;
	double timeDou = (double)clock();
	double t = timeDou * 1000;
	int part = (t - c->time2) / 120;
	c->time2 = timeDou;
	if (!cheBomb) {
		cheBomb = c;
		printf("created head\n");
	}
	else {
		cherry* last = cheBomb;
		while (last->next) {
			last = last->next;
		}
		last->next = c;
		printf("created cherry\n");
	}
	return cheBomb;
}
Pshooter* create_Pshooter(int putX, int putY, int F_num) {
	Pshooter* pointer = (Pshooter*)malloc(sizeof(Pshooter));
	pointer->x = putX;
	pointer->y = putY;
	pointer->blood = 300;
	pointer->fieldN = F_num;
	//pointer->isShooting = 0;
	pointer->next = NULL;
	double timeDou = (double)clock();
	pointer->time2 = timeDou;
	if (!shooter) {
		shooter = pointer;
	}
	else {
		Pshooter* last = shooter;
		while (last->next) {
			last = last->next;
		}
		last->next = pointer;
	}
	printf("shooter is planted\n");
	return shooter;
};
sunFlow* create_sunFlow(int putX, int putY, int F_num) {
	sunFlow* p = (sunFlow*)malloc(sizeof(sunFlow));
	p->x = putX;
	p->y = putY;
	p->fieldN = F_num;
	p->time1 = 0;
	double timeDou = (double)clock();
	p->time2 = timeDou;
	//p->time1 = timeDou;
	p->lightup = 0;
	p->dalta = 0.0;
	p->showSun = 0;
	p->blood = 80;
	p->next = NULL;
	sunFlow* last = sF;
	if (!(sF)) {
		sF = p;
	}
	else {
		while (last->next) {
			last = last->next;
		}
		last->next = p;
	}
	printf("flower is planted\n");
	return sF;
};
Nut* create_nut(int putX, int putY, int F_num) {
	Nut* last;
	Nut* n = (Nut*)malloc(sizeof(Nut));
	n->blood = 800;
	n->fieldN = F_num;
	n->next = NULL;
	double timeDou = (double)clock();
	n->time2 = timeDou;
	n->x = putX;
	n->y = putY;
	if (!(nutt)) {
		nutt = n;
		printf("nutHead is planted\n");
	}
	else {
		last = nutt;
		while (last->next) {
			last = last->next;
		}
		last->next = n;
		printf("nut is planted\n");
	}
	return nutt;
}
cherry* del_cheBomb(int F_num, char all) {
	cherry* q;
	cherry* p;
	int cnt = 0;
	if (all == 'a') {
		for (p = cheBomb; p; p = p->next) {
			cnt++;
		}
		while (1) {
			if (cnt == 0) {
				break;
			}
			for (q = NULL, p = cheBomb; p; q = p, p = p->next) {
				if (q) {
					q->next = p->next;
				}
				else {
					cheBomb = p->next;
				}
				free(p);
				cnt--;
				break;
			}
		}
		for (int i = 0; i < 45; i++) {
			map[i] = 0;
		}
	}
	else if (all == 'k') {
		for (p = cheBomb; p; p = p->next) {
			if (p->killing == 1) {
				cnt++;
			}
		}
		while (1) {
			if (cnt == 0) {
				break;
			}
			for (q = NULL, p = cheBomb; p; q = p, p = p->next) {
				if (p->killing == 1) {
					map[p->fieldN] = 0;
					if (q) {
						q->next = p->next;
					}
					else {
						cheBomb = p->next;
					}
					free(p);
					cnt--;
					printf("cherry is dead\n");
					break;
				}
			}
		}
	}
	else {
		for (q = NULL, p = cheBomb; p; q = p, p = p->next) {
			if (p->fieldN == F_num) {
				if (q) {
					q->next = p->next;
				}
				else {
					cheBomb = p->next;
				}
				free(p);
				map[F_num] = 0;
				printf("delete cherryBomb\n");
				break;
			}
		}

	}
	return cheBomb;
}
sunFlow* del_sunFlow(int F_num, char all) {
	sunFlow* q;
	sunFlow* p;
	int cnt = 0;
	if (all == 'a') {
		for (p = sF; p; p = p->next) {
			cnt++;
		}
		while (1) {
			if (cnt == 0) {
				break;
			}
			for (q = NULL, p = sF; p; q = p, p = p->next) {
				if (q) {
					q->next = p->next;
				}
				else {
					sF = p->next;
				}
				free(p);
				cnt--;
				break;
			}
		}
		for (int i = 0; i < 45; i++) {
			map[i] = 0;
		}
	}
	else if (all == 'd') {
		for (p = sF; p; p = p->next) {
			if (p->blood <= 0) {
				cnt++;
			}
		}
		while (1) {
			if (cnt == 0) {
				break;
			}
			for (q = NULL, p = sF; p; q = p, p = p->next) {
				if (p->blood <= 0) {
					map[p->fieldN] = 0;
					if (q) {
						q->next = p->next;
					}
					else {
						sF = p->next;
					}
					free(p);
					cnt--;
					break;
				}
			}
		}
	}
	else {
		for (q = NULL, p = sF; p; q = p, p = p->next) {
			if (p->fieldN == F_num) {
				if (q) {
					q->next = p->next;
				}
				else {
					sF = p->next;
				}
				free(p);
				map[F_num] = 0;
				printf("delete sunFlower\n");
				break;
			}
		}

	}
	return sF;
};
Pshooter* del_Pshooter(int F_num, char all) {
	Pshooter* q;
	Pshooter* p;
	int cnt = 0;
	if (all == 'a') {
		for (p = shooter; p; p = p->next) {
			cnt++;
		}
		while (1) {
			if (cnt == 0) {
				break;
			}
			for (q = NULL, p = shooter; p; q = p, p = p->next) {
				if (q) {
					q->next = p->next;
				}
				else {
					shooter = p->next;
				}
				free(p);
				cnt--;
				break;
			}
		}
		for (int i = 0; i < 45; i++) {
			map[i] = 0;
		}
	}
	else if (all == 'd') {
		for (p = shooter; p; p = p->next) {
			if (p->blood <= 0) {
				cnt++;
			}
		}
		while (1) {
			if (cnt == 0) {
				break;
			}
			for (q = NULL, p = shooter; p; q = p, p = p->next) {
				if (p->blood <= 0) {
					map[p->fieldN] = 0;
					if (q) {
						q->next = p->next;
					}
					else {
						shooter = p->next;
					}
					free(p);
					cnt--;
					break;
				}
			}
		}
	}
	else {
		for (q = NULL, p = shooter; p; q = p, p = p->next) {
			if (p->fieldN == F_num) {
				if (q) {
					q->next = p->next;
				}
				else {
					shooter = p->next;
				}
				map[F_num] = 0;
				free(p);
				printf("fuck off Pahooter\n");
				break;
			}
		}
	}
	return shooter;
}
Nut* del_Nut(int F_num, char all) {
	Nut* q;
	Nut* p;
	int cnt = 0;
	if (all == 'a') {
		for (p = nutt; p; p = p->next) {
			cnt++;
		}
		while (1) {
			if (cnt == 0) {
				break;
			}
			for (q = NULL, p = nutt; p; q = p, p = p->next) {
				if (q) {
					q->next = p->next;
				}
				else {
					nutt = p->next;
				}
				free(p);
				cnt--;
				break;
			}
		}
		for (int i = 0; i < 45; i++) {
			map[i] = 0;
		}
	}
	else if (all == 'd') {
		for (p = nutt; p; p = p->next) {
			if (p->blood <= 0) {
				cnt++;
			}
		}
		while (1) {
			if (cnt == 0) {
				break;
			}
			for (q = NULL, p = nutt; p; q = p, p = p->next) {
				if (p->blood <= 0) {
					map[p->fieldN] = 0;
					if (q) {
						q->next = p->next;
					}
					else {
						nutt = p->next;
					}
					free(p);
					cnt--;
					break;
				}
			}
		}
	}
	else {
		for (q = NULL, p = nutt; p; q = p, p = p->next) {
			if (p->fieldN == F_num) {
				if (q) {
					q->next = p->next;
				}
				else {
					nutt = p->next;
				}
				map[F_num] = 0;
				free(p);
				printf("gone NUTTTT!!!\n");
				break;
			}
		}
	}
	return nutt;
}
card* del_card(char all) {
	card* q;
	card* p;
	p = crd;
	int cnt = 0;
	if (all == 'a') {
		for (p = crd; p; p = p->next) {
			cnt++;
		}
		while (1) {
			if (cnt == 0) {
				break;
			}
			for (q = NULL, p = crd; p; q = p, p = p->next) {
				if (q) {
					q->next = p->next;
				}
				else {
					crd = p->next;
				}
				free(p);
				cnt--;
				break;
			}
		}
	}
	else {
		for (p = crd; p; p = p->next) {
			if (p->isChosen != 2) {
				cnt++;
			}
		}
		while (1) {
			if (cnt == 0) {
				break;
			}
			for (q = NULL, p = crd; p; q = p, p = p->next) {
				if (p->isChosen != 2) {
					if (q) {
						q->next = p->next;
					}
					else {
						crd = p->next;
					}
					free(p);
					cnt--;
					break;
				}
			}
		}
	}

	return crd;
}
void showPshooter() {
	Pshooter* p;
	int frameP = 13;
	for (p = shooter; p; p = p->next) {
		double nowt = ((double)clock()) / CLOCKS_PER_SEC;
		double t = nowt * 1000;
		int part = (t - p->time2) / 130;
		if (part % frameP == 0) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p00, p->x, p->y);
		}
		if (part % frameP == 1) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p01, p->x, p->y);
		}
		if (part % frameP == 2) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p02, p->x, p->y);
		}
		if (part % frameP == 3) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p03, p->x, p->y);
		}
		if (part % frameP == 4) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p04, p->x, p->y);
		}
		if (part % frameP == 5) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p05, p->x, p->y);
		}
		if (part % frameP == 6) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p06, p->x, p->y);
		}
		if (part % frameP == 7) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p07, p->x, p->y);
		}
		if (part % frameP == 8) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p08, p->x, p->y);
		}
		if (part % frameP == 9) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p09, p->x, p->y);
		}
		if (part % frameP == 10) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p10, p->x, p->y);
		}
		if (part % frameP == 11) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p11, p->x, p->y);
		}
		if (part % frameP == 12) {
			drawAlpha(&shadow, p->x - 10, p->y + 50);
			drawAlpha(&p12, p->x, p->y);
		}
	}
};
void showNut() {
	Nut* n;
	int frame1 = 16;
	int frame2 = 11;
	int frame3 = 15;
	for (n = nutt; n; n = n->next) {
		double nowt = ((double)clock()) / CLOCKS_PER_SEC;
		double t = nowt * 1000;
		int part = (t - n->time2) / 100;
		if (n->blood >= 540) {
			int num = part % frame1;
			drawAlpha(&nut_g[num], n->x, n->y);
		}
		if (n->blood >= 266 && n->blood < 540) {
			int num = part % frame2;
			drawAlpha(&nut_m[num], n->x, n->y);
		}
		if (n->blood < 266) {
			int num = part % frame3;
			drawAlpha(&nut_b[num], n->x, n->y);
		}
	}
}
int options() {
	MOUSEMSG m;
	LOGFONT f;
	TCHAR oops[] = _T("Oops");
	TCHAR there[] = _T("there zeemz to hafe a");
	TCHAR tiny[] = _T("tiny little problum");
	TCHAR tryAgain[] = _T("Try again after you leafe");
	TCHAR leave[] = _T("a HIGH SCORE");
	TCHAR andWe[] = _T("and wee eat your brain");

	setbkmode(TRANSPARENT);
	gettextstyle(&f);
	f.lfHeight = 40;
	_tcscpy_s(f.lfFaceName, _T("Chiller"));//Comic Sans MS
	f.lfQuality = ANTIALIASED_QUALITY;
	f.lfWidth = 10;
	settextstyle(&f);
	BeginBatchDraw();
	drawAlpha(&blackCov, 0, 0);
	while (true) {
		while (MouseHit()) {
			m = GetMouseMsg();
			putimage(190, 50, &pausePage_1, NOTSRCERASE);
			putimage(190, 50, &pausePage, SRCINVERT);
			drawAlpha(&backButt, 250, 440);
			settextcolor(GREEN);
			outtextxy(372, 190, oops);
			outtextxy(292, 215, there);
			outtextxy(310, 245, tiny);
			outtextxy(276, 275, tryAgain);
			outtextxy(320, 310, leave);
			outtextxy(288, 335, andWe);
			FlushBatchDraw();
			if (m.x >= 250 && m.x <= 550 && m.y >= 440 && m.y <= 540) {
				BeginBatchDraw();
				drawAlpha(&backButt_d, 250, 440);
				if (m.uMsg == WM_LBUTTONDOWN) {
					EndBatchDraw();
					return 0;
				}
			}
		}
		FlushBatchDraw();
	}
}
int choosing(acc admin) {
	TCHAR name[16];
	LOGFONT f;
	CharToTchar(admin.id, name);
	BeginBatchDraw();
	drawAlpha(&op1, 400, 75);
	putimage(0, 0, &op);
	setbkmode(TRANSPARENT);
	gettextstyle(&f);
	f.lfHeight = 30;
	_tcscpy_s(f.lfFaceName, _T("Chiller"));
	f.lfQuality = ANTIALIASED_QUALITY;
	f.lfWidth = 10;
	settextstyle(&f);
	while (1) {
		MOUSEMSG m = GetMouseMsg();
		putimage(0, 0, &op);
		drawAlpha(&op1, 400, 75);
		drawAlpha(&tag, 0, 0);
		settextcolor(LIGHTGREEN);
		outtextxy(123, 92, name);
		if (m.x <= 700 && m.x >= 400 && m.y <= 210 && m.y >= 80) {//start adventure
			BeginBatchDraw();
			putimage(0, 0, &op);
			drawAlpha(&op1, 400, 75);
			drawAlpha(&op2, 400, 75);
			drawAlpha(&tag, 0, 0);
			settextcolor(LIGHTGREEN);
			outtextxy(123, 92, name);
			if (m.uMsg == WM_LBUTTONDOWN) {
				return 1;
			}
		}
		if (m.x >= 710 && m.x <= 780 && m.y >= 460 && m.y <= 550) {//exit
			drawAlpha(&exiting, 720, 520);
			if (m.uMsg == WM_LBUTTONDOWN) {
				return 0;
			}
		}
		if (m.x >= 640 && m.x <= 705 && m.y >= 460 && m.y <= 550) {//helping
			drawAlpha(&helping, 649, 529);
		}
		if (m.x >= 560 && m.x <= 650 && m.y >= 460 && m.y <= 530) {//option
			drawAlpha(&option, 578, 493);
			if (m.uMsg == WM_LBUTTONDOWN) {
				if (!options()) {
					continue;
				}
			}
		}
		FlushBatchDraw();
	}
	EndBatchDraw();
};
int detectXY(MOUSEMSG put, int* put_y, int* F_num) {
	int i;
	int put_x;
	for (i = 0; i < 45; i++) {
		if (put.y >= field[i][1] && put.y <= field[i][3] && put.x >= field[i][0] && put.x <= field[i][2]) {
			*F_num = i;
			break;
		}
	}
	if (*F_num >= 0 && *F_num <= 8) {
		put_x = field[*F_num][0];
		*put_y = field[*F_num][1] - 10;
	}
	else if (*F_num >= 27 && *F_num <= 35) {
		put_x = field[*F_num][0];
		*put_y = field[*F_num][1] + 3;
	}
	else {
		put_x = field[*F_num][0];
		*put_y = field[*F_num][1] + 20;
	}
	if (*F_num % 9 == 6) {
		put_x = field[*F_num][0] - 10;
	}
	return put_x;
};
int maps(int* levelDone, int BsT, int BsS) {
	MOUSEMSG m;
	LOGFONT f;
	TCHAR bestT[5], bestS[6];
	TCHAR best1[] = _T("Best Score:");
	_itow_s(BsT, bestT, 10);
	_itow_s(BsS, bestS, 10);
	setbkmode(TRANSPARENT);
	gettextstyle(&f);
	f.lfHeight = 25;
	_tcscpy_s(f.lfFaceName, _T("Comic Sans MS"));
	f.lfQuality = ANTIALIASED_QUALITY;
	f.lfWidth = 8;
	settextstyle(&f);
	BeginBatchDraw();
	while (true) {
		while (MouseHit()) {
			m = GetMouseMsg();
			//drawAlpha(&mapBK, 0, 0);
			putimage(0, 0, &mapBK);
			drawAlpha(&route, 110, 140);
			if (levelDone[0] == 0) {
				drawAlpha(&Zomflag, 110, 450);
			}
			else {
				drawAlpha(&Zomflag_d, 110, 450);
			}
			if (m.x >= 110 && m.x <= 147 && m.y >= 450 && m.y <= 493) {//level 1
				if (levelDone[0] == 0) {
					drawAlpha(&flagB, 106, 448);
					drawAlpha(&note, 150, 430);
					settextcolor(RED);
					outtextxy(160, 435, best1);
					outtextxy(257, 435, bestS);
				}
				else {
					drawAlpha(&flagB_d, 106, 448);
					drawAlpha(&note, 150, 430);
					settextcolor(RED);
					outtextxy(160, 435, best1);
					outtextxy(255, 435, bestS);
				}
				if (m.uMsg == WM_LBUTTONDOWN) {
					return 1;
				}
			}
			if (m.x >= 0 && m.x <= 60 && m.y >= 0 && m.y <= 60) {
				drawAlpha(&backButtOn_L, 0, 0);
				if (m.uMsg == WM_LBUTTONDOWN) {
					return 0;
				}
			}
			else {
				drawAlpha(&backButt_L, 0, 0);
			}
			FlushBatchDraw();
		}
	}
	EndBatchDraw();
}
int pauseMenu(acc admin, int BsS, int BsT) {
	MOUSEMSG m;
	TCHAR sure[] = _T("Are you sure you want");
	TCHAR you[] = _T("to get buck to the menu");//want uz to eet your brain
	TCHAR andget[] = _T("insted of leting uz "); //and to get back to the menu ?
	TCHAR eet[] = _T("EET YOUR BRAIN?");
	TCHAR Btime[] = _T("Bset Time");
	TCHAR Bsun[] = _T("Best Score");
	TCHAR colon[] = _T(":");
	LOGFONT f;
	int min = 0;
	int sec = 0;
	TCHAR mi[3];
	TCHAR s[3];
	TCHAR sc[5];
	gettextstyle(&f);
	f.lfHeight = 40;
	f.lfWidth = 10;
	f.lfQuality = ANTIALIASED_QUALITY;
	_tcscpy_s(f.lfFaceName, _T("Chiller"));
	settextstyle(&f);
	BeginBatchDraw();
	drawAlpha(&blackCov, 0, 0);
	printf("time in pause %d \n", BsT);
	while (true) {
		while (MouseHit()) {
			m = GetMouseMsg();
			putimage(190, 50, &pausePage_1, NOTSRCERASE);
			putimage(190, 50, &pausePage, SRCINVERT);
			drawAlpha(&backButt, 250, 445);//170
			drawAlpha(&menu, 255, 180);
			drawAlpha(&best, 265, 260);
			if (m.x >= 250 && m.x <= 550 && m.y >= 445 && m.y <= 540) {
				drawAlpha(&backButt_d, 250, 445);
				if (m.uMsg == WM_LBUTTONDOWN) {
					EndBatchDraw();
					return 0;
				}
			}
			if (m.x >= 265 && m.x <= 545 && m.y >= 260 && m.y <= 340) {
				min = BsT / 60;
				sec = BsT % 60;
				_itow_s(min, mi, 10);
				_itow_s(sec, s, 10);
				_itow_s(BsS, sc, 10);
				drawAlpha(&best_d, 265, 260);
				if (m.uMsg == WM_LBUTTONDOWN) {
					while (true) {
						BeginBatchDraw();
						m = GetMouseMsg();
						BeginBatchDraw();
						putimage(190, 50, &pausePage_1, NOTSRCERASE);
						putimage(190, 50, &pausePage, SRCINVERT);
						settextcolor(LIGHTGREEN);
						outtextxy(285, 260, Btime);
						outtextxy(420, 260, mi);
						outtextxy(443, 260, colon);
						outtextxy(455, 260, s);
						outtextxy(285, 310, Bsun);
						outtextxy(420, 310, sc);
						drawAlpha(&backButt, 250, 445);
						drawAlpha(&bestRec, 270, 180);

						if (m.x >= 250 && m.x <= 550 && m.y >= 445 && m.y <= 540) {
							drawAlpha(&backButt_d, 250, 445);
							if (m.uMsg == WM_LBUTTONDOWN) {
								break;
							}
						}
						FlushBatchDraw();
					}
				}
			}
			if (m.x >= 255 && m.x <= 550 && m.y >= 180 && m.y <= 260) {
				drawAlpha(&menu_d, 255, 180);
				if (m.uMsg == WM_LBUTTONDOWN) {
					while (true) {
						m = GetMouseMsg();
						BeginBatchDraw();
						putimage(190, 50, &pausePage_1, NOTSRCERASE);
						putimage(190, 50, &pausePage, SRCINVERT);
						settextcolor(GREEN);
						gettextstyle(&f);
						f.lfHeight = 40;
						f.lfWidth = 10;
						f.lfQuality = ANTIALIASED_QUALITY;
						_tcscpy_s(f.lfFaceName, _T("Chiller"));
						settextstyle(&f);
						outtextxy(290, 210, sure);
						outtextxy(278, 250, you);
						outtextxy(305, 290, andget);
						outtextxy(296, 330, eet);
						drawAlpha(&no, 255, 445);
						drawAlpha(&yes, 410, 445);
						if (m.x >= 255 && m.x <= 405 && m.y >= 445 && m.y <= 525) {
							drawAlpha(&no_d, 255, 445);
							if (m.uMsg == WM_LBUTTONDOWN) {
								break;
							}
						}
						if (m.x >= 410 && m.x <= 560 && m.y >= 445 && m.y <= 525) {
							drawAlpha(&yes_d, 410, 445);
							if (m.uMsg == WM_LBUTTONDOWN) {
								return 1;
							}
						}
						FlushBatchDraw();
					}

				}
			}
		}
		FlushBatchDraw();
	}
}
int YouWon(int win) {
	MOUSEMSG m;
	TCHAR Click[] = _T("Click To Continue");
	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 40;
	f.lfWeight = 15;
	_tcscpy_s(f.lfFaceName, _T("Comic Sans MS"));
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	BeginBatchDraw();
	settextcolor(BLACK);
	outtextxy(280, 300, Click);
	while (true) {
		while (MouseHit()) {
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN) {
				return 0;
			}
		}
		switch (win) {
		case 1:
			putimage(200, 200, &plantcrd2);
		}
		FlushBatchDraw();
	}
	EndBatchDraw();
}
void theyGocha() {
	MOUSEMSG m;
	int out = 0;
	RECT r = { 0,0,width,length };
	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 30;
	_tcscpy_s(f.lfFaceName, _T("Comic Sans MS"));
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	while (1) {
		while (MouseHit()) {
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN) {
				EndBatchDraw();
				out = 1;
				break;
			}
		}
		if (out == 1) {
			break;
		}
		BeginBatchDraw();
		drawAlpha(&blackCov, 0, 0);
		drawAlpha(&goCha, 120, 50);
		settextcolor(WHITE);
		drawtext(_T("Click TO Continue"), &r, DT_CENTER | DT_BOTTOM | DT_SINGLELINE);
		FlushBatchDraw();
	}
}
int readRec(acc* user, int level, int* sunSc) {
	FILE* fp;
	char fpPath[50] = { '0' };
	char fpPath2[50] = { '0' };
	int time = 0;
	int tempNum = -1;
	char TempChar;
	//char tempChar;
	errno_t err, err2;
	sprintf_s(fpPath, "users\\%s\\%d.txt", user->id, level);
	sprintf_s(fpPath2, "users\\%s\\%s.txt", user->id, user->id);
	while (true) {
		err = fopen_s(&fp, fpPath, "r");
		if (err != NULL) {
			fopen_s(&fp, fpPath, "w");
			fclose(fp);
			*sunSc = 0;
			return 0;
		}
		else {
			fscanf_s(fp, "%d %d ", &time, sunSc);
			fclose(fp);
			err2 = fopen_s(&fp, fpPath2, "r");
			while (true) {
				if (err != NULL) {
					printf("erro!!\n");
				}
				else {
					TempChar = fgetc(fp);
					if (TempChar == '\n') {
						break;
					}
					else {
						if (TempChar != ' ') {
							tempNum = (int)(TempChar - '0');
							user->plants[tempNum - 1] = tempNum;
						}
					}
				}
			}
			fclose(fp);
			return time;
		}
	}
}
void putRec(acc user, int level, int* time, int* sunSc) {
	FILE* fp;
	errno_t err;
	char path[50] = { '0' };
	sprintf_s(path, "users\\%s\\%d.txt", user.id, level);
	err = fopen_s(&fp, path, "w");
	if (err == NULL) {
		fprintf(fp, "%ld %ld ", *time, *sunSc);
		fclose(fp);
		printf("finish put record\n");
	}
}
void Plants_operate(int num, int putX, int putY, int F_num, int* sunSc, char cOrD) {
	sunFlow* sf;
	Pshooter* s;
	Nut* n;
	int cnt = 0;
	if (cOrD == 'a') {
		sF = del_sunFlow(1, 'a');
		shooter = del_Pshooter(1, 'a');
		nutt = del_Nut(1, 'a');
		cheBomb = del_cheBomb(1, 'a');
	}
	else if (cOrD == 'k') {
		cheBomb = del_cheBomb(1, 'k');
	}
	else {
		if (num == 1) {
			if (cOrD == 'c') {
				sF = create_sunFlow(putX, putY, F_num);
				*sunSc -= 50;
				sf = sF;
				if (!sf) {
					double timeD = (double)clock();
					double timer1 = timeD / CLOCKS_PER_SEC;
					double t = timer1 * 10;
					int timer2 = t / 10;
					sf->dalta = timer1 - timer2;
					sf->time2 = timeD;
				}
				else {
					while (sf->next) {
						sf = sf->next;
					}
					double timeD = (double)clock();
					double timer1 = timeD / CLOCKS_PER_SEC;
					double t = timer1 * 10;
					int timer2 = t / 10;
					sf->dalta = timer1 - timer2;
					sf->time2 = timeD;
				}
			}
			else {
				sF = del_sunFlow(F_num, 'n');
			}
		}
		else if (num == 2) {
			if (cOrD == 'c') {
				shooter = create_Pshooter(putX, putY, F_num);
				*sunSc -= 100;
			}
			else {
				shooter = del_Pshooter(F_num, 'n');
			}
		}
		else if (num == 3) {
			if (cOrD == 'c') {
				cheBomb = create_cheBomb(putX, putY, F_num);
				*sunSc -= 150;
			}
			else {
				cheBomb = del_cheBomb(F_num, 'n');
			}
		}
		else if (num == 4) {
			if (cOrD == 'c') {
				nutt = create_nut(putX, putY, F_num);
				*sunSc -= 50;
			}
			else {
				nutt = del_Nut(F_num, 'n');
			}
		}
	}
}
void zomEatP() {
	sunFlow* sf;
	Pshooter* s;
	zombie* p;
	Nut* n;
	for (p = zom; p; p = p->next) {
		if (p->stop == 1) {
			for (sf = sF; sf; sf = sf->next) {
				if (sf->fieldN == p->stopField && p->stop == 1) {
					sf->blood--;
				}
			}
			for (s = shooter; s; s = s->next) {//改！！！！
				if (s->fieldN == p->stopField && p->row == (s->fieldN) / 9) {
					printf("zombie at %d is eating %d\n", p->row, p->stopField);
					s->blood--;
				}
			}
			for (n = nutt; n; n = n->next) {
				if (n->fieldN == p->stopField && p->stop == 1) {
					n->blood--;
				}
			}
		}
	}
	del_Nut(1, 'd');
	del_Pshooter(1, 'd');
	del_sunFlow(1, 'd');
}
void Plants_show() {
	showSunFlow();
	showPshooter();
	showNut();
	showcherry();
}
void Plants_doing() {
	sunFlow* sf;
	Pshooter* p;
	cherry* c;
	zombie* z;
	for (sf = sF; sf; sf = sf->next) {
		double timer1 = (double)clock() / CLOCKS_PER_SEC;
		double t = timer1 * 100;
		int timer2 = t / 100;
		if (sf->showSun == 0) {
			if (((int)sf->time2 - timer2) % 5 == 0 && (timer1 - timer2) < 0.076) {
				sf->lightup = 1;
			}
			if (((int)sf->time2 - timer2) % 6 == 0 && (timer1 - timer2) < 0.076) {
				sf->showSun = 2;
				sf->lightup = 0;
				printf("SUUUNNNNN\n");
			}
		}
		else if (sf->showSun == 1) {
			double timer1 = (double)clock() / CLOCKS_PER_SEC;
			double t = timer1 * 1000;
			int timer2 = t / 1000;
			if (((int)sf->time2 - timer2) % 23 == 0 && (timer1 - timer2) < 0.076) {
				sf->lightup = 1;
			}
			if (((int)sf->time2 - timer2) % 24 == 0 && (timer1 - timer2) < 0.076) {
				sf->showSun = 2;
				sf->lightup = 0;
				printf("SUUUNNNNN\n");
			}
		}
	}
	for (c = cheBomb; c; c = c->next) {
		for (z = zom; z; z = z->next) {
			if (z->row == (c->fieldN / 9) || z->row == (c->fieldN / 9) - 1 || z->row == (c->fieldN / 9) + 1) {
				if (z->x <= c->x + 150 && z->x >= c->x - 60 && c->killing == 1) {
					z->blood = 0;
				}
			}
		}
	}
}
int choosePlant(int zomNum[], acc admin) {
	MOUSEMSG m;
	int row;
	int i;
	TCHAR sun[] = _T("50");
	zombie* p;
	int mouseX = 0, mouseY = 0;
	int cnt = 0;
	int zomCnt = 0;
	int delNum = 10;
	card* c;
	card* d;
	int del = 0;
	int isMoving = -1;
	float k = 0;
	float b = 0;
	float v;
	//	float movingX=0, movingY=0;
	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 30;
	_tcscpy_s(f.lfFaceName, _T("Comic Sans MS"));
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	settextcolor(BLACK);
	for (i = 0; i < 10; i++) {
		for (int k = 0; k < zomNum[i]; k++) {
			row = zomCnt % 5;
			zom = create_zom(460 + i * 22, row);
			zomCnt++;
		}
	}
	for (p = zom; p; p = p->next) {
		for (i = 0; i < 10; i++) {
			p->pea_x[i] = 0;
			p->Pshooter_x[i] = 0;
			p->isShooting[i] = 0;
		}
	}
	crd = create_card(admin);

	while (1) {
		while (MouseHit()) {
			m = GetMouseMsg();
			mouseX = m.x;
			mouseY = m.y;
			if (mouseX >= 155 && mouseX <= 311 && mouseY >= 520 && mouseY <= 562 && m.uMsg == WM_LBUTTONDOWN) {
				crd = del_card('n');
				EndBatchDraw();
				zom = del_allZom();
				return 1;
			}
			if (mouseX >= 740 && mouseX <= 800 && mouseY >= 0 && mouseY <= 60 && m.uMsg == WM_LBUTTONDOWN) {
				return 0;
			}
			if (mouseX >= 16 && mouseX <= 450 && mouseY >= 130 && mouseY <= 500 && m.uMsg == WM_LBUTTONDOWN) {
				for (c = crd; c; c = c->next) {
					if (mouseX >= c->x && mouseX <= c->x + 48 && mouseY >= c->y && mouseY <= c->y + 70 && c->isChosen == 0) {
						cnt++;
						c->moveToX = 82 + (cnt - 1) * 60;
						c->movingX = c->x;
						c->movingY = c->y;
						c->isChosen = 1;
						c->No = cnt;
						setlinecolor(GREEN);
						v = sqrt((c->y - 11) * (c->y - 11) + (c->x - (c->moveToX)) * (c->x - (c->moveToX))) / 20;
						rectangle(c->moveToX, c->moveToY, c->moveToX + 48, c->moveToY + 70);
						k = (float)(c->y - 11) / (float)(c->x - (c->moveToX));
						printf("k=%f\n", k);
						b = (8 - k * c->moveToX);
					}
				}
			}
			for (c = crd; c; c = c->next) {
				if (mouseX <= 446 && mouseY <= 87) {
					if (mouseX >= c->moveToX && mouseX <= c->moveToX + 48 && mouseY >= 9 && mouseY <= c->moveToY + 70 && c->isChosen == 2 && m.uMsg == WM_LBUTTONDOWN) {
						c->isChosen = 0;
						cnt--;
						del++;
						delNum = c->No;
						for (d = crd; d; d = d->next) {
							if (d->No > delNum && d->isChosen == 2) {
								d->moveToX -= del * 60;
								d->movingY = 9;
								d->isChosen = 3;
							}
						}
					}
				}
			}
		}
		BeginBatchDraw();
		drawAlpha(&bkRight, 0, 0);
		putimage(0, 0, &bank);
		outtextxy(28, 57, sun);
		drawAlpha(&choser, 0, 87);
		drawAlpha(&choserBut, 155, 520);//156,42

		showStandingZom();
		for (c = crd; c; c = c->next) {
			if (c->isChosen == 0) {
				drawAlpha(c->crd, c->x, c->y);
			}
			else if (c->isChosen == 1) {
				drawAlpha(c->crd_d, c->x, c->y);
				if (k > 0) {
					c->movingX -= v;
				}
				else {
					if (k < -10) {
						c->movingX += 0.6;
					}
					else if (k < -6) {
						c->movingX += 2;
					}
					else {
						c->movingX += v;
					}
				}
				if (c->movingY <= c->moveToY + 5) {
					c->isChosen = 2;
				}
				setlinecolor(GREEN);
				rectangle(c->moveToX, c->moveToY, c->moveToX + 50, c->moveToY + 70);
				c->movingY = k * (float)c->movingX + b;
				putimage(c->movingX, c->movingY, c->crd);
			}
			else if (c->isChosen == 2) {
				drawAlpha(c->crd_d, c->x, c->y);
				drawAlpha(c->crd, c->moveToX, c->moveToY);
			}
			else if (c->isChosen == 3) {
				drawAlpha(c->crd_d, c->x, c->y);
				drawAlpha(c->crd, c->movingX, c->movingY);
				c->movingX -= 3;
				if (c->movingX <= c->moveToX) {
					c->isChosen = 2;
					del = 0;
				}
			}
		}
		del = 0;
		if (mouseX >= 155 && mouseX <= 311 && mouseY >= 520 && mouseY <= 562) {
			drawAlpha(&choserBut_d, 155, 520);
		}
		if (mouseX >= 740 && mouseX <= 800 && mouseY >= 0 && mouseY <= 60) {
			drawAlpha(&backButtOn_R, 725, 0);
		}
		else {
			drawAlpha(&backButt_R, 735, 0);
		}
		FlushBatchDraw();
	}
}
void L1_updateWithoutInput(int* flag, int* isPlanted, int* putX, int* putY, int* F_num, int* delPlant, int* isZom, int* isShooting, int* showingSun, int* isSun, float* sun_x, float* sun_y, float* sun_v, int* theyGotYou, int* lawnMoving, int* isFlowSun, int* sunLight, int* sunSc, float zomPos[10], int zomNum[10], int* youWon, float* k) {
	int i;
	zombie* p;
	zombie* p1;
	zombie* z;

	sunFlow* sf;

	Pshooter* s;
	LAWN* l;

	int j;
	int row = 0;
	int temprow = -1;

	Plants_doing();
	lawn = del_lawn();
	zom = del_deadZom();
	Plants_operate(1, 1, 1, 3, sunSc, 'k');
	zomEatP();
	Plants_operate(1, 1, 1, 1, sunSc, 'd');
	//delete the eaten plants
	for (p = zom; p; p = p->next) {
		if (map[p->stopField] == 0) {
			p->stop = 0;
			p->stopField = -1;
		}
		if ((int)p->x <= 800) {
			for (i = p->row * 9; i < p->row * 9 + 9; i++) {
				if (p->stop == 0 && map[i] != 0 && field[i][2]-10 <= (int)p->x && p->row == i / 9 ) {//&& p->stopField == -1
					p->stopField = i;
				}
			}
			if (p->stop == 0 && (int)p->x <= field[p->stopField][2]-10) {
				p->stop = 1;
			}
		}
		if (p->x <= (double)830 && p->x >= (double)810) {
			row = smartZomZom();
			p->y = field[row * 9][1];
			if (temprow == row) {
				p->x += 50;
			}
			temprow = row;
			p->row = row;
		}
	}
	
	if (*lawnMoving == 0) {
		lawn = initLawn();
		*lawnMoving = 2;
	}
	else if (*lawnMoving >= 2) {
		for (l = lawn; l; l = l->next) {
			for (p = zom; p; p = p->next) {
				if (l->isMoving == 1) {
					l->x += 10;
				}
				if (l->row == p->row && p->x <= l->x + 40) {
					printf("row %d lawn isMoving=1\n", l->row);
					l->isMoving = 1;
				}
				if (l->x + 40 >= p->x && l->row == p->row) {
					p->v = -(50);
					if (p->x >= 800) {
						p->blood = 0;
					}
				}
			}
		}
	}
	if (*isSun == 0) {
		if (*showingSun == 0) {
			*sun_y = -200;
			*sun_x = rand() % (500 - 150) + 150;
			*showingSun = 2;
		}
		else if (*showingSun == 2) {
			*sun_y += *sun_v;
			if (*sun_y >= 600) {
				*showingSun = 1;
			}
		}
		else {
			*sun_y = -400;
			*sun_x = rand() % (500 - 150) + 150;
			*showingSun = 2;
			*isSun = 0;
		}
	}
	else {
		*sun_y = (*k) * (*sun_x);
		*sun_x -= 27;
		if (*sun_x <= 6 || *sun_y <= 2) {
			*sunSc += 25;
			*isSun = 0;
		}
	}
	if (*theyGotYou == 0) {
		for (p = zom; p; p = p->next) {
			if (p->x <= 80) {
				*theyGotYou = 1;
			}
		}
	}

	if (*isZom == 0) {
		for (i = 0; i < 10; i++) {
			for (int k = 0; k < zomNum[i]; k++) {
				zom = create_zom(zomPos[i], row);
			}
		}
		for (p = zom; p; p = p->next) {
			for (i = 0; i < 10; i++) {
				p->pea_x[i] = 0;
				p->Pshooter_x[i] = 0;
				p->isShooting[i] = 0;
			}
		}
		/*for (i = 0; i < 5; i++) {
			zom = create_zom(800, i);
		}*/
		*isZom = 1;
	}
	else if (*isZom == 1) {
		for (p = zom; p; p = p->next) {
			if (p->stop == 1) {
				p->x = p->x;
			}
			else {
				p->x = p->x - p->v;
			}
		}
		for (p = zom; p; p = p->next) {
			if ((int)p->x <= 170) {
				*lawnMoving = 2;
			}
			for (i = 0; i < 10; i++) {
				if ((p->pea_x[i]) != 0 && p->Pshooter_x[i] != 0) {
					p->pea_x[i] += p->pea_v;
				}
			}
			for (j = 0; j < 10; j++) {
				if (p->Pshooter_x[j] == 0) {
					p->isShooting[j] = 0;
				}
				if (p->isShooting[j] == 2) {
					if (p->pea_x[j] != 0 && p->pea_x[j] >= p->x) {
						mciSendString(L"close shot", NULL, 0, NULL);
						mciSendString(L"open Music\\shot.mp3 alias shot", NULL, 0, NULL);
						mciSendString(L"play shot", NULL, 0, NULL);
						printf("zombie is shot\n");
						p->isShooting[j] = 0;
						p->blood--;
						printf("ROW %d Zom Blood: %d\n", p->row, p->blood);
					}
				}
				else if (p->isShooting[j] == 1) {
					mciSendString(L"close bleep", NULL, 0, NULL);
					mciSendString(L"open Music\\bleep.mp3 alias bleep", NULL, 0, NULL);
					mciSendString(L"play bleep", NULL, 0, NULL);
					if (p->pea_x[j] != 0 && p->pea_x[j] >= 600 && p->Pshooter_x[j] != 0) {//&& p->Pshooter_x[j] != 0
						p->pea_x[j] = p->Pshooter_x[j];
						p->isShooting[j] = 2;
					}
				}
				else if (p->isShooting[j] == 0) {
					for (i = 0; i < 45; i++) {
						int min = 800;
						if (map[i] != 2 && i / 9 == p->row) {
							p->Pshooter_x[i % 9] = 0;
							if (map[i] == 0) {
								continue;
							}
						}
						for (z = zom; z; z = z->next) {
							if (i / 9 == z->row && z->x <= min) {
								min = z->x;
							}
						}
						if (map[i] == 2 && i / 9 == p->row && (int)p->x <= min) {
							if (p->row == 1 || p->row == 2) {
								p->Pshooter_x[i % 9] = field[i][0] + 50;
								p->pea_y = field[i][1] + 15;
							}
							else if (p->row == 3) {
								p->Pshooter_x[i % 9] = field[i][0] + 50;
								p->pea_y = field[i][1] + 2;
							}
							else if (p->row == 0) {
								p->Pshooter_x[i % 9] = field[i][0] + 50;
								p->pea_y = field[i][1] - 12;
							}
							else {
								p->Pshooter_x[i % 9] = field[i][0] + 50;
								p->pea_y = field[i][1] + 17;
							}
							if (p->Pshooter_x[j] != 0) {
								p->pea_x[j] = 1;
								p->isShooting[j] = 1;
							}
						}
					}
				}
			}
		}
	}
	if (*isPlanted) {
		Plants_operate(*isPlanted, *putX, *putY, *F_num, sunSc, 'c');
		*isPlanted = 0;
		*F_num = 50;
	}
	if (*delPlant) {
		if (map[*F_num] == 2) {
			*delPlant = 2;
		}
		Plants_operate(*delPlant, *putX, *putY, *F_num, sunSc, 'd');
		*delPlant = 0;
	}
	if (*isZom == 1) {
		if (!zom) {
			*youWon = 1;
		}
	}
};
void L1_updateWithInput(int* flag, int* isMoving, int* moveX, int* moveY, int* putX, int* putY, int* F_num, int* isPlanted, int* addPlant, int* delPlant, int* shovel, int* showingSun, float* sun_x, float* sun_y, int* isSun, int* sunSc, int* pause, int* isFlowSun, float* k) {
	MOUSEMSG p;
	sunFlow* sf;
	card* c;
	while (MouseHit()) {
		p = GetMouseMsg();
		if (*pause == 0) {
			if (p.uMsg == WM_LBUTTONDOWN && p.x >= 670 && p.x <= 882 && p.y >= 10 && p.y <= 50) {
				*pause = 1;
			}
		}
		if (*isSun == 0) {
			if (*showingSun != 0) {
				if (p.uMsg == WM_LBUTTONDOWN && p.x >= *sun_x + 5 && p.x <= *sun_x + 70 && p.y >= *sun_y + 5 && p.y <= *sun_y + 70 && p.y >= 90) {
					*k = (*sun_y - 2) / (*sun_x - 6);
					*isSun = 1;
					*showingSun = 1;
				}
			}
		}
		for (sf = sF; sf; sf = sf->next) {
			if (sf->showSun == 2 && p.uMsg == WM_LBUTTONDOWN && p.x >= sf->x && p.x <= sf->x + 70 && p.y >= sf->y && p.y <= sf->y + 70) {
				sf->showSun = 1;
				*sunSc += 25;
			}
		}
		for (c = crd; c; c = c->next) {
			if (*isMoving == 0 && p.x >= c->moveToX && p.x <= c->moveToX + 48 && p.y >= 9 && p.y <= 79 && p.uMsg == WM_LBUTTONDOWN && *sunSc >= c->sun) {
				*flag = c->num;
				c->isMoving = 1;
				*isMoving = 1;
				*moveX = 800;
				*moveY = 800;
			}
			else if (*isMoving == 1 && c->isMoving == 1) {
				*moveX = p.x - 40;
				*moveY = p.y - 30;
				if (p.uMsg == WM_LBUTTONDOWN && p.y <= 87) {
					*isMoving = 0;
					c->isMoving = 0;
					*flag = 0;
					break;
				}
				else if (p.uMsg == WM_LBUTTONDOWN) {
					mciSendString(L"close plant", NULL, 0, NULL);
					mciSendString(L"open Music\\Mplant.mp3 alias plant", NULL, 0, NULL);
					mciSendString(L"play plant", NULL, 0, NULL);
					*isMoving = 0;
					*moveX = 800;
					*flag = c->num;
					*moveY = 800;
					*putX = detectXY(p, putY, F_num);
					if (map[*F_num] == 0) {
						*isPlanted = c->num;
						map[*F_num] = c->num;
					}
					c->isMoving = 0;
				}
			}
		}
		if (*isMoving == 0) {
			if (p.x <= 533 && p.x >= 446 && p.y <= 87 && p.y >= 0) {
				if (p.uMsg == WM_LBUTTONDOWN) {
					mciSendString(L"close shovel", NULL, 0, NULL);
					mciSendString(L"open Music\\shovel.mp3 alias shovel", NULL, 0, NULL);
					mciSendString(L"play shovel", NULL, 0, NULL);
					*flag = 7;
					*isMoving = 1;
					*moveX = 800;
					*moveY = 800;
				}
			}
		}
		else if (*isMoving == 1 && *flag == 7) {
			*moveX = p.x - 40;
			*moveY = p.y - 30;
			if (p.uMsg == WM_LBUTTONDOWN) {
				mciSendString(L"close plant", NULL, 0, NULL);
				mciSendString(L"open Music\\Mplant.mp3 alias plant", NULL, 0, NULL);
				mciSendString(L"play plant", NULL, 0, NULL);
				*isMoving = 0;
				*moveX = 800;
				*moveY = 800;
				*putX = detectXY(p, putY, F_num);
				if (*flag == 7 && map[*F_num] != 0) {
					*shovel = 1;
					Plants_operate(map[*F_num], *putX, *putY, *F_num, sunSc, 'd');
				}
			}
		}
	}
}
void show(int* flag, int* isMoving, int* moveX, int* moveY, int* isPlanted, int* isZom, int* isShooting, int* showingSun, float* sun_x, float* sun_y, float* sun_v, int* theyGotYou, int* sunSc, int* pause, int* lawnMoving, int* sunLight, int* time1, int* youWon, acc* admin, int* BsT, int* BsS, int* thisT) {
	TCHAR sunSC[6];
	TCHAR time[4];
	zombie* p;
	Pshooter* s;
	sunFlow* sf;
	LAWN* l;
	card* c;

	int put_x, put_y;
	int x = 0, y = 0;
	int timer;

	double nowt1 = (double)clock() / CLOCKS_PER_SEC;
	double t = nowt1 * 100;
	int nowt2 = t / 100;
	timer = nowt2 - *time1;
	*thisT = timer;
	_itow_s(timer, time, 10);

	putimage(0, 0, &plbk0);
	putimage(0, 0, &bank);
	drawAlpha(&pauseBut, 670, 10);
	for (c = crd; c; c = c->next) {
		if (*sunSc >= c->sun) {
			drawAlpha(c->crd, c->moveToX, c->moveToY);
		}
		else {
			drawAlpha(c->crd_d, c->moveToX, c->moveToY);
		}
	}
	putimage(446, 0, &shv);
	if (*lawnMoving != 0) {
		for (l = lawn; l; l = l->next) {
			putimage(l->x, l->y, &car_1, NOTSRCERASE);
			putimage(l->x, l->y, &car, SRCINVERT);
		}
	}
	outtextxy(700, 50, time);
	Plants_show();
	p = zom;
	showGameZom();
	putimage(*sun_x, *sun_y, &sun_1, NOTSRCERASE);
	putimage(*sun_x, *sun_y, &sun, SRCINVERT);
	for (sf = sF; sf; sf = sf->next) {
		if (sf->lightup == 1) {
			drawAlpha(&sunFace, sf->x + 12, sf->y + 8);
		}
		if (sf->showSun == 2) {
			putimage(sf->x, sf->y, &sun_1, NOTSRCERASE);
			putimage(sf->x, sf->y, &sun, SRCINVERT);
		}
	}
	setbkmode(TRANSPARENT);
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 30;
	_tcscpy_s(f.lfFaceName, _T("Comic Sans MS"));
	f.lfQuality = ANTIALIASED_QUALITY;
	settextstyle(&f);
	settextcolor(BLACK);

	_itow_s(*sunSc, sunSC, 10);
	//show sunScore
	if (*sunSc == 0) {
		outtextxy(34, 57, sunSC);
	}
	else if (*sunSc < 100) {
		outtextxy(25, 57, sunSC);
	}
	else if (*sunSc >= 1000) {
		outtextxy(13, 57, sunSC);
	}
	else {
		outtextxy(20, 57, sunSC);
	}
	//puting amo
	for (p = zom; p; p = p->next) {
		for (int i = 0; i < 10; i++) {
			if (p->isShooting[i] == 2 && p->x <= 800) {
				if (p->pea_x[i] != 0) {
					drawAlpha(&peaShade, p->pea_x[i], p->pea_y + 70);
					drawAlpha(&peashot, p->pea_x[i], p->pea_y);
					FlushBatchDraw();
				}
			}
		}
	}
	for (c = crd; c; c = c->next) {
		if (c->isMoving == 1) {
			putimage(*moveX, *moveY, c->plant_cov, NOTSRCERASE);
			putimage(*moveX, *moveY, c->plant, SRCINVERT);
		}
	}
	if (*isMoving == 1) {
		if (*flag == 7) {
			putimage(*moveX, *moveY, &shv_1, NOTSRCERASE);
			putimage(*moveX, *moveY, &shvMoving, SRCINVERT);
		}
	}
	if (*pause == 1) {
		printf("timee out of %d\n", *BsT);
		if (pauseMenu(*admin, *BsS, *BsT) == 0) {
			*pause = 0;
		}
		else {
			*pause = 2;
		}
	}
	if (*theyGotYou == 1) {
		theyGocha();
		*theyGotYou = 2;
	}
	if (*youWon == 1) {
		YouWon(*youWon);
	}
	FlushBatchDraw();
}
int main()
{
	int flag = 0;
	int addPlant = 0;
	int delPlant = 0;
	int shovel = 0;
	int isMoving = 0, isPlanted = 0, isShooting = 0, isShot = 0;
	int putX = 0, putY = 0;
	int moveX = 0, moveY = 0;
	float sun_x = 0, sun_y = 0, sun_v = 3;
	int pea_x = 0, pea_y = 0, pea_v = 4;
	int pause = 0;
	int F_num = 50;
	int isZom = 0;
	int L1_zomNum[10] = { 1,1,1,1,2,1,2,3,2,5 };//僵尸数量，波数；19/ 1,1,1,1,2,1,2,3,2,5
	float L1_zomPos[10] = { 1100,1500,1900,2150,2500,2800,3200,3550,3750,4150 };//1100,1500,1900,2150,2500,2800,3200,3550,3750,4150
	int showingSun = 0;//sun is coming down
	int isSun = 0;//click on sun
	int sunLight = 0;
	int theyGotYou = 0;
	int sunSc = 50;
	int peaX[10] = { 0 };
	int Pshooter_x[10] = { 0 };
	int lawnMoving = 0;
	int isFlowSun = 0;
	int flag2 = 0;
	int level = 0;
	int youWon = 0;
	int levelDone[2] = { 0 };
	float k = 0;
	int BsT = 0, BsS = 0;
	int thisT = 0, thisS = 0;
	int getBs = 0;
	int plantsChosen[8] = { 0 };
	acc admin = { '0','0' };
	char milky[6] = "Milky";
	/*char pass[6] = "18874";
	strcpy_s(admin.id, strlen(milky) + 1, milky);
	strcpy_s(admin.psw, strlen(pass) + 1, pass);*/

	initgraph(width, length, SHOWCONSOLE);

	srand((unsigned)time(NULL) * 10);
	startup();
	click();
	while (1) {
		printf("into 1st while\n");
		while (1) {
			printf("into 2nd while\n");
			switch (flag2) {
				printf("into switch\n");
			case 0:
				flag2 = opening();
				continue;
			case 1:
				flag2 = LoginBox(&admin);
				continue;
			case 2:
				flag2 = SignupBox(&admin);
				continue;
			case 3:
				mciSendString(L"close waiting", NULL, 0, NULL);
				if (choosing(admin) == 0) {
					flag2 = 0;
					admin = { '0','0' };
					continue;
				}
				else {
					flag2 = 4;
				}
				continue;
			case 4:
				if (getBs == 0) {
					BsT = readRec(&admin, 1, &BsS);
					//printf("time %d\n", BsT);
					getBs = 1;
				}
				level = maps(levelDone, BsT, BsS);
				if (level != 0) {
					if (choosePlant(L1_zomNum, admin) == 0) {
						zom = del_allZom();
						crd = del_card('a');
						continue;
					}
					else {
						mciSendString(L"open Music\\Mgamebeginning.mp3 alias bgm", NULL, 0, NULL);
						mciSendString(L"play bgm repeat", NULL, 0, NULL);
						break;
					}
				}
				flag2 = 3;
				continue;
			}
			if (flag2 == 4) {
				lawnMoving = 0;
				isZom = 0;
				youWon = 0;
				theyGotYou = 0;
				break;
			}
		}
		if (level == 1) {
			double startt1 = (double)clock() / CLOCKS_PER_SEC;
			double t = startt1 * 100;
			int startt2 = t / 100;
			if (strcmp(admin.id,milky)==0) {
				sunSc = 1000;
			}
			while (1) {
				BeginBatchDraw();
				show(&flag, &isMoving, &moveX, &moveY, &isPlanted, &isZom, &isShooting, &showingSun, &sun_x, &sun_y, &sun_v, &theyGotYou, &sunSc, &pause, &lawnMoving, &sunLight, &startt2, &youWon, &admin, &BsT, &BsS, &thisT);
				if (theyGotYou == 2) {
					zom = del_allZom();
					crd = del_card('a');
					Plants_operate(1, 1, 1, 1, &flag, 'a');
					break;
				}
				if (youWon != 0) {
					levelDone[0] = 1;
					if (thisT < BsT || thisS > BsS) {
						putRec(admin, 1, &BsT, &BsS);
					}
					crd = del_card('a');
					break;
				}
				if (pause == 2) {
					pause = 0;
					zom = del_allZom();
					crd = del_card('a');
					Plants_operate(1, 1, 1, 1, &flag, 'a');
					mciSendString(L"close bgm", NULL, 0, NULL);
					break;
				}
				L1_updateWithoutInput(&flag, &isPlanted, &putX, &putY, &F_num, &shovel, &isZom, &isShooting, &showingSun, &isSun, &sun_x, &sun_y, &sun_v, &theyGotYou, &lawnMoving, &isFlowSun, &sunLight, &sunSc, L1_zomPos, L1_zomNum, &youWon, &k);
				L1_updateWithInput(&flag, &isMoving, &moveX, &moveY, &putX, &putY, &F_num, &isPlanted, &addPlant, &delPlant, &shovel, &showingSun, &sun_x, &sun_y, &isSun, &sunSc, &pause, &isFlowSun, &k);
				Sleep(16);
				EndBatchDraw();
			}
			level = 0;
		}
	}

	_getch();
	closegraph();
	return 0;
}

