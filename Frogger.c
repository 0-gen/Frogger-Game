#include "LPC17xx.H"
#include "GLCD.h"
#include "GLCD_UTILS.h"

int home1p,home2p,home3p,home4p,home5p;
void water(){
	int a,b;
		for(a=0; a < 261; a++){					
				for(b=25; b<114; b++){			//Water
					GLCD_SetTextColor(Navy);
					GLCD_PutPixel(a,b);	
				}
	}
}
void road(){
int a,b6;
		for(a=0; a < 260+1; a++){						
				GLCD_SetTextColor(Yellow);				//Road
				for(b6=204; b6<205; b6++)
						GLCD_PutPixel(a,b6);	
				for(b6=186; b6<187; b6++)
						GLCD_PutPixel(a,b6);	
				for(b6=168; b6<169; b6++)
						GLCD_PutPixel(a,b6);					
				for(b6=150; b6<151; b6++)
						GLCD_PutPixel(a,b6);	
	}		
}
void grass(){
int a,b,b1,b6;
		for(a=0; a < 261; a++){							//Bottom Grass - Safezone
				for(b=222; b<241; b++){	
						GLCD_SetTextColor(DarkGreen);
						GLCD_PutPixel(a,b);
				}
				for(b1=114; b1<133; b1++){  		//Middle Grass - Safezone
					GLCD_SetTextColor(DarkGreen);
					GLCD_PutPixel(a,b1);
				}
	}
}
void score(int lives,int points){
int radi = 6;
int radi1 = 1;
int livesx4 = 272;
int livesx3 = 294;
int livesy2 = 223;
int livesy3 = 203;
int livesx2 = 272;
int livesx1 = 294;
int i,j;
char str[80];
		points = home1p+home2p+home3p+home4p+home5p;
		GLCD_SetBackColor(LightGrey);
		GLCD_SetTextColor(Black);
//	GLCD_DisplayString(1,1,"Life");	
		sprintf(str, "%d", points);
		GLCD_SetTextColor(Black);
//	GLCD_DisplayString(4,17,str);
	if(lives > 3){
		GLCD_SetTextColor(Green);
		for(i = radi;i>0;i--){
		GLCD_draw_circle(livesx4,livesy3,i);	//BODY
		}
		GLCD_SetTextColor(Brown);
		GLCD_draw_circle(livesx4-3,livesy3-4,radi1); //EYES
		GLCD_draw_circle(livesx4+3,livesy3-4,radi1); //EYES
		GLCD_SetTextColor(Green);
		//FROG ARMS
		for(j = livesy3-7;j<livesy3-2;j++)
			GLCD_PutPixel(livesx4-6,j);
		for(i = livesx4-6; i < livesx4-3; i++)
			GLCD_PutPixel(i,livesy3-2);
		for(i = livesx4+4; i < livesx4+7; i++)
			GLCD_PutPixel(i,livesy3-2);
		for(j = livesy3-3;j > livesy3-7;j--)
			GLCD_PutPixel(livesx4+6,j);
		//FROG LEGS
		for(j = livesy3+7;j>livesy3+2;j--)
			GLCD_PutPixel(livesx4-7,j);
		for(i = livesx4-6; i < livesx4-3; i++)
			GLCD_PutPixel(i,livesy3+3);
		for(i = livesx4+4; i < livesx4+7; i++)
			GLCD_PutPixel(i,livesy3-2);
		for(j = livesy3+3;j<livesy3+8;j++)
			GLCD_PutPixel(livesx4+7,j);
					GLCD_SetTextColor(Green);
		}
	if(lives > 2){
		GLCD_SetTextColor(Green);
		for(i= radi;i>0;i--){
		GLCD_draw_circle(livesx3,livesy3,i);	//BODY
		}
		GLCD_SetTextColor(Brown);
		GLCD_draw_circle(livesx3-3,livesy3-4,radi1); //EYES
		GLCD_draw_circle(livesx3+3,livesy3-4,radi1); //EYES
		GLCD_SetTextColor(Green);
		//FROG ARMS
		for(j = livesy3-7;j<livesy3-2;j++)
			GLCD_PutPixel(livesx3-6,j);
		for(i = livesx3-6; i < livesx3-3; i++)
			GLCD_PutPixel(i,livesy3-2);
		for(i = livesx3+4; i < livesx3+7; i++)
			GLCD_PutPixel(i,livesy3-2);
		for(j = livesy3-3;j > livesy3-7;j--)
			GLCD_PutPixel(livesx3+6,j);
		//FROG LEGS
		for(j = livesy3+7;j>livesy3+2;j--)
			GLCD_PutPixel(livesx3-7,j);
		for(i = livesx3-6; i < livesx3-3; i++)
			GLCD_PutPixel(i,livesy3+3);
		for(i = livesx3+4; i < livesx3+7; i++)
			GLCD_PutPixel(i,livesy3-2);
		for(j = livesy3+3;j<livesy3+8;j++)
			GLCD_PutPixel(livesx3+7,j);
					GLCD_SetTextColor(Green);
				}
	if (lives > 1){
		for(i= radi;i>0;i--){
		GLCD_draw_circle(livesx2,livesy2,i);	//BODY
		}
		GLCD_SetTextColor(Brown);
		GLCD_draw_circle(livesx2-3,livesy2-4,radi1); //EYES
		GLCD_draw_circle(livesx2+3,livesy2-4,radi1); //EYES
		GLCD_SetTextColor(Green);
		//FROG ARMS
		for(j = livesy2-7;j<livesy2-2;j++)
			GLCD_PutPixel(livesx2-6,j);
		for(i = livesx2-6; i < livesx2-3; i++)
			GLCD_PutPixel(i,livesy2-2);
		for(i = livesx2+4; i < livesx2+7; i++)
			GLCD_PutPixel(i,livesy2-2);
		for(j = livesy2-3;j > livesy2-7;j--)
			GLCD_PutPixel(livesx2+6,j);
		//FROG LEGS
		for(j = livesy2+7;j>livesy2+2;j--)
			GLCD_PutPixel(livesx2-7,j);
		for(i = livesx2-6; i < livesx2-3; i++)
			GLCD_PutPixel(i,livesy2+3);
		for(i = livesx2+4; i < livesx2+7; i++)
			GLCD_PutPixel(i,livesy2-2);
		for(j = livesy2+3;j<livesy2+8;j++)
			GLCD_PutPixel(livesx2+7,j);
		}
	if (lives > 0){
		GLCD_SetTextColor(Green);
		for(i = radi;i>0;i--){
		GLCD_draw_circle(livesx1,livesy2,i);	//BODY
		}
		GLCD_SetTextColor(Brown);
		GLCD_draw_circle(livesx1-3,livesy2-4,radi1); //EYES
		GLCD_draw_circle(livesx1+3,livesy2-4,radi1); //EYES
		GLCD_SetTextColor(Green);
		//FROG ARMS
		for(j = livesy2-7;j<livesy2-2;j++)
			GLCD_PutPixel(livesx1-6,j);
		for(i = livesx1-6; i < livesx1-3; i++)
			GLCD_PutPixel(i,livesy2-2);
		for(i = livesx1+4; i < livesx1+7; i++)
			GLCD_PutPixel(i,livesy2-2);
		for(j = livesy2-3;j > livesy2-7;j--)
			GLCD_PutPixel(livesx1+6,j);
		//FROG LEGS
		for(j = livesy2+7;j>livesy2+2;j--)
			GLCD_PutPixel(livesx1-7,j);
		for(i = livesx1-6; i < livesx1-3; i++)
			GLCD_PutPixel(i,livesy2+3);
		for(i = livesx1+4; i < livesx1+7; i++)
			GLCD_PutPixel(i,livesy2-2);
		for(j = livesy2+3;j<livesy2+8;j++)
			GLCD_PutPixel(livesx1+7,j);	
		}
	if(lives == 0){
		GLCD_Clear(Black);         //Clear display and set background color to black
		GLCD_SetBackColor(Black);
    GLCD_SetTextColor(Red);   //Pixels will be drawn in blue
		GLCD_DisplayString(5,5,"You Lose");
	}
}
void drawFrog(int x0,int y0, int color){
int radius = 5; 
int j,i;	
int x1 = 127;
int x2 = 133;
int y1 = 227;
int radius1 = 1;
int frog;
int body, eyes, limbs;
	if (color == 1){
		body = Green;
		eyes = Brown; 
		limbs = DarkGreen;
	}
	if (color == 0){
		body = Black;
		eyes = Black; 
		limbs = Black;
	}
	for(i = radius; i>0; i--){
		GLCD_SetTextColor(body);
		GLCD_draw_circle(x0,y0,i);	//BODY
	}
		GLCD_SetTextColor(eyes);
		GLCD_draw_circle(x0-3,y0-4,radius1); //EYES
		GLCD_draw_circle(x0+3,y0-4,radius1); //EYES

		GLCD_SetTextColor(limbs);
		//FROG ARMS
		for(j = y0-7;j<y0-2;j++)
			GLCD_PutPixel(x0-6,j);
		for(i = x0-6; i < x0-3; i++)
			GLCD_PutPixel(i,y0-2);
		for(i = x0+4; i < x0+7; i++)
			GLCD_PutPixel(i,y0-2);
		for(j = y0-3;j > y0-7;j--)
			GLCD_PutPixel(x0+6,j);
		//FROG LEGS
		for(j = y0+7;j>y0+2;j--)
			GLCD_PutPixel(x0-7,j);
		for(i = x0-6; i < x0-3; i++)
			GLCD_PutPixel(i,y0+3);
		for(i = x0+4; i < x0+7; i++)
			GLCD_PutPixel(i,y0-2);
		for(j = y0+3;j<y0+8;j++)
			GLCD_PutPixel(x0+7,j);
	}
void home(int home1,int home2,int home3,int home4,int home5){
int x0,y0;

			if(home1==1){
					x0 = 10;
					y0 = 12;
					drawFrog(x0,y0,1);		
					home1p=100;
				}
				if(home2==1){
					x0 = 70;
					y0 = 12;
					drawFrog(x0,y0,1);
					home2p=100;
				}
				if(home3==1){
					x0 = 130;
					y0 = 12;
					drawFrog(x0,y0,1);
					home3p=100;
				}
				if(home4==1){
					x0 = 190;
					y0 = 12;
					drawFrog(x0,y0,1);
					home4p=100;
				}
				if(home5==1){
					x0 = 250;
					y0 = 12;
					drawFrog(x0,y0,1);
					home5p=100;
				}	
			}	
void drawScreen(int scrx1, int scry1){
int a4,b4;
int b2;
int a5,b5;	
GLCD_SetTextColor(Pink);				//Finish Line
	for(b4=0; b4 < 25; b4++){
				for(a4=0; a4<20; a4++)
						GLCD_PutPixel(a4,b4);	
				for(a4=60; a4<80; a4++)
						GLCD_PutPixel(a4,b4);	
				for(a4=120; a4<140; a4++)			//Coordinates of Middle Box 20x24 (X,Y) (put frog in this column)
						GLCD_PutPixel(a4,b4);	
				for(a4=180; a4<200; a4++)
						GLCD_PutPixel(a4,b4);	
				for(a4=240; a4<scrx1+1; a4++)
						GLCD_PutPixel(a4,b4);
	}	
				GLCD_SetTextColor(DarkGrey);				//Finish Line Walls/Border
				for(b5=0; b5 < 25; b5++){
					for(a5=20; a5<60; a5++)
							GLCD_PutPixel(a5,b5);	
					for(a5=80; a5<120; a5++)
							GLCD_PutPixel(a5,b5);	
					for(a5=140; a5<180; a5++)
							GLCD_PutPixel(a5,b5);	
					for(a5=200; a5<240; a5++)
							GLCD_PutPixel(a5,b5);	
				}
			}			
void drawlogLR1(int logx, int logy, int logwid,int color){
int j,i,a,b;	
	GLCD_SetTextColor(color);
	for(i = logx-logwid; i<logx+logwid+1;i++){
		for(j = logy-7; j < logy+8; j++){		
			GLCD_PutPixel(i,j);}
		for(j = logy+28; j < logy+44; j++)
		GLCD_PutPixel(i,j);
//	for(a = 0 ; a <36
//			GLCD_SetTextColor(Navy);
			
//					GLCD_PutPixel(a,b);	
//					
//				for(b2=25; b<114; b++){			//Water

//				}
}
	
}	
void drawlogLR2(int logx1, int logy, int logwid,int color){
int j,i;	
	GLCD_SetTextColor(color);
	for(i = logx1-logwid; i<logx1+logwid+1;i++){
		for(j = logy-7; j < logy+8; j++)
			GLCD_PutPixel(i,j);
	}
	for(i = logx1-logwid; i<logx1+logwid+1;i++){
		for(j = logy+28; j < logy+44; j++)
			GLCD_PutPixel(i,j);
			}	
	}
void drawpadRL1(int padx, int pady, int rad,int color){
	int i;
	GLCD_SetTextColor(color);	
		for(i = rad; i> 0; i--){
	GLCD_draw_circle(padx,pady,i);
	GLCD_draw_circle(padx+(2*rad),pady,i);
	GLCD_draw_circle(padx,pady+36,i);
	GLCD_draw_circle(padx-(2*rad),pady+36,i);
	GLCD_draw_circle(padx,pady+71,i);
	GLCD_draw_circle(padx+(2*rad),pady+71,i);
		}
}
void drawlogLR3(int logx2, int logy, int logwid,int color){
int j,i;	
	GLCD_SetTextColor(color);
	for(i = logx2-logwid; i<logx2+logwid+1;i++){
		for(j = logy-7; j < logy+8; j++)
			GLCD_PutPixel(i,j);
	}
	for(i = logx2-logwid; i<logx2+logwid+1;i++){
		for(j = logy+28; j < logy+44; j++)
			GLCD_PutPixel(i,j);
			}	
	}
void drawpadRL2(int padx1, int pady, int rad,int color){
	int i;
	GLCD_SetTextColor(color);	
	for(i = 0; i<= rad; i++){
	GLCD_draw_circle(padx1,pady,i);
	GLCD_draw_circle(padx1+(2*rad),pady,i);
	GLCD_draw_circle(padx1,pady+36,i);
	GLCD_draw_circle(padx1-(2*rad),pady+36,i);
	GLCD_draw_circle(padx1,pady+71,i);
	GLCD_draw_circle(padx1+(2*rad),pady+71,i);
	}
}
void drawCar1LR(int cx, int cy, int width1, unsigned short color){
int i,j;
	GLCD_SetTextColor(color);
		for(i = cx-width1; i < cx+width1+1;i++){
			for(j = cy-7; j < cy+8; j++)
				GLCD_PutPixel(i,j);
			for(j = cy-43; j < cy-28; j++)
				GLCD_PutPixel(i,j);
			for(j = cy -79; j < cy-64; j++)
				GLCD_PutPixel(i,j);
		}
}
void drawCar1RL(int cx9, int cy9, int width, unsigned short color){
int j,i;	
GLCD_SetTextColor(color);
	for(i = cx9+width; i > cx9-width+10;i--){
		for(j = cy9-7; j < cy9+8; j++){		
			GLCD_PutPixel(i,j);}
		for(j = cy9-43; j < cy9-28; j++)
			GLCD_PutPixel(i,j);
	}
for(i = cx9-width+6; i < cx9 - width+10;i++){
		for(j = cy9-5; j < cy9+8; j++){		
			GLCD_PutPixel(i,j);}
		for(j = cy9-41; j < cy9-28; j++)
			GLCD_PutPixel(i,j);
		}
		for(i = cx9-width; i < cx9 - width+7;i++){
		for(j = cy9-1; j < cy9+8; j++){		
			GLCD_PutPixel(i,j);}
		for(j = cy9-37; j < cy9-28; j++)
			GLCD_PutPixel(i,j);
		}
}
void drawCar2LR(int cx2, int cy, int width1, unsigned short color){
int i,j;
	GLCD_SetTextColor(color);
		for(i = cx2-width1; i < cx2+width1+1;i++){
		for(j = cy-7; j < cy+8; j++)
			GLCD_PutPixel(i,j);
		for(j = cy-43; j < cy-28; j++)
			GLCD_PutPixel(i,j);
		for(j = cy -79; j < cy-64; j++)
			GLCD_PutPixel(i,j);
		}
}
void drawCar2RL(int cx7, int cy9, int width, unsigned short color){
int j,i;	
GLCD_SetTextColor(color);
	for(i = cx7+width; i > cx7 - width+10;i--)	{
		for(j = cy9-7; j < cy9+8; j++){		
			GLCD_PutPixel(i,j);}
		for(j = cy9-43; j < cy9-28; j++)
			GLCD_PutPixel(i,j);
	}
		for(i = cx7-width+6; i < cx7 - width+10;i++){
		for(j = cy9-5; j < cy9+8; j++){		
			GLCD_PutPixel(i,j);}
		for(j = cy9-41; j < cy9-28; j++)
			GLCD_PutPixel(i,j);
		}
		for(i = cx7-width; i < cx7 - width+7;i++){
		for(j = cy9-1; j < cy9+8; j++){		
			GLCD_PutPixel(i,j);}
		for(j = cy9-37; j < cy9-28; j++)
			GLCD_PutPixel(i,j);
		}
}
void drawCar3RL(int cx6, int cy9, int width, unsigned short color){
int j,i;	
GLCD_SetTextColor(color);
	for(i = cx6+width; i > cx6 - width+10;i--){
		for(j = cy9-7; j < cy9+8; j++){		
			GLCD_PutPixel(i,j);}
		for(j = cy9-43; j < cy9-28; j++)
			GLCD_PutPixel(i,j);
	}
		for(i = cx6-width+6; i < cx6 - width+10;i++){
		for(j = cy9-5; j < cy9+8; j++){		
			GLCD_PutPixel(i,j);}
		for(j = cy9-41; j < cy9-28; j++)
			GLCD_PutPixel(i,j);
		}
		for(i = cx6-width; i < cx6 - width+7;i++){
		for(j = cy9-1; j < cy9+8; j++){		
			GLCD_PutPixel(i,j);}
		for(j = cy9-37; j < cy9-28; j++)
			GLCD_PutPixel(i,j);
		}
}
void drawScoreBoard(int sbx,int sby){
int i,j,k;
		GLCD_SetTextColor(LightGrey);					//Leaderboard
	for(sbx=261; sbx < 321; sbx++){
				for(sby=121; sby<241; sby++){
						GLCD_PutPixel(sbx,sby);	
				}
	}
	GLCD_SetTextColor(Black);
	for(i = 266;i<267;i++){
		for(j = 166;j<187;j++){
				GLCD_PutPixel(i,j);
		}
	}		
	for(j = 186;j<187;j++){
		for(i= 266;i<277;i++){
				GLCD_PutPixel(i,j);
		}
	}			
	for(i = 280;i<281;i++){
		for(j = 166;j<187;j++){
				GLCD_PutPixel(i,j);
		}
	}	
	for(i = 284;i<285;i++){
		for(j = 166;j<187;j++){
				GLCD_PutPixel(i,j);
		}
	}	
		for(i= 284;i<295;i++){
			for(j = 166;j<167;j++)
				GLCD_PutPixel(i,j);
			for(j = 174;j<175;j++)
				GLCD_PutPixel(i,j);
			
	}
	for(i = 298;i<299;i++){
		for(j = 166;j<187;j++){
				GLCD_PutPixel(i,j);
		}
	}	
	for(i= 298;i<309;i++){
		for(j = 166;j<167;j++)
			GLCD_PutPixel(i,j);
		for(j = 176;j<177;j++)
			GLCD_PutPixel(i,j);
		for(j= 186;j<187;j++)
				GLCD_PutPixel(i,j);
	}
}
void drawScoreBoard1(int sbx,int sby){
		GLCD_SetTextColor(LightGrey);					//Leaderboard
	for(sbx=261; sbx < 321; sbx++){
				for(sby=0; sby<121; sby++){
						GLCD_PutPixel(sbx,sby);	
				}
	}
}
int main(){
int cx=7;			//starting positions
int cy=213;
int	cx9=203;	//starting positions
int cy9=195;
int cx2=100;		//starting positions
int cx6=30; 
int	cx7=110;	//starting positions
int x0=130;
int y0=231;
int logx=60;
int logy=52;
int logx1=140;
int logx2 = 220;
int logwid=24; 
int padx= 236;
int padx1=140;
int pady= 34;
int rad=7;
int vehicle = rand()%2;
int k,i,j,color,width,sbx,sby;
int mask_valleft = 0x1000;
int mask_valright = 0x2000;
int mask_valup =  0x200000;
int mask_valdown = 0x100;
int mask_val=0x800;
int pause = 0;
int on_val = 0;
int logspeed = 2;
int padspeed = 3;
int lives = 4;
int truckspeed = 4;
int carspeed = 4;
int a3,b3;
int scrx1 = 260;
int scry1 = 18;
int width1 = 7;
int points = 0;
int home1 = 0;
int home2 = 0;
int home3 = 0;
int home4 = 0;
int home5 = 0;
home1p = 0;
home2p = 0;
home3p = 0;
home4p = 0;
home5p = 0;

if(vehicle == 0){
				width = 14;
				color = Purple;
			}
if(vehicle ==1){ 
				width = 7;
				color = Red;
			}
		GLCD_Init();               //Initializes the LCD display
    GLCD_Clear(Black);         //Clear display and set background color to black
		drawScoreBoard(sbx,sby);
		score(lives, points);
		grass();
		road();
		drawScoreBoard1(sbx,sby);
    LPC_GPIO2->FIODIR = 0x000000FF;
    while(1){    
			drawScreen(scrx1,scry1);
			home(home1,home2,home3,home4,home5);
			drawScoreBoard1(sbx,sby);
			
			if(home1==1&&home2==1&&home3==1&&home4==1&&home5==1){
			GLCD_Clear(Black);         //Clear display and set background color to black
			GLCD_SetTextColor(Blue);   //Pixels will be drawn in blue
			GLCD_DisplayString(5,5,"You win! :)");	
			}
			if(y0>=204&&y0<=222){		//Fifth Lane of cars
					if((((x0-7)<=(cx+width1))&&((x0+7)>=(cx-width1)))||((x0-7)==(cx+width1))||((x0+7)==(cx-width1))||(((x0-7)<=(cx2+width1))&&((x0+7)>=(cx2-width1)))||((x0-7)==(cx2+width1))||((x0+7)==(cx2-width1))){
					x0=130;
					y0=231;
					lives--;
					drawScoreBoard(sbx,sby);
					score(lives, points); 
					}
				}		
			if(y0>=185&&y0<=203){		//Fourth Lane of cars
					if((((x0-10)<=(cx9+width-14))&&((x0+7)>=(cx9-width-14)))||((x0-7)==(cx9+width))||((x0+7)==(cx9-width))||(((x0-7)<=(cx7+width))&&((x0+7)>=(cx7-width)))||((x0-7)==(cx7+width))||((x0+7)==(cx7-width))||(((x0-7)<=(cx6+width))&&((x0+7)>=(cx6-width)))||((x0-7)==(cx6+width))||((x0+7)==(cx6-width))){
					x0=130;
					y0=231; 
					lives--;
					drawScoreBoard(sbx,sby);
					score(lives, points); 
					}
				}					
			if(y0>=166&&y0<=184){		//Third Lane of cars
					if((((x0-7)<=(cx+width1))&&((x0+7)>=(cx-width1)))||((x0-7)==(cx+width1))||((x0+7)==(cx-width1))||(((x0-7)<=(cx2+width1))&&((x0+7)>=(cx2-width1)))||((x0-7)==(cx2+width1))||((x0+7)==(cx2-width1))){
					x0=130;
					y0=231;
					lives--;			
					drawScoreBoard(sbx,sby);
					score(lives, points); 					
					}
				}		
			if(y0>=147&&y0<=165){		//Second Lane of cars
					if((((x0-7)<=(cx9+width-14))&&((x0+7)>=(cx9-width-14)))||((x0-7)==(cx9+width))||((x0+7)==(cx9-width))||(((x0-7)<=(cx7+width))&&((x0+7)>=(cx7-width)))||((x0-7)==(cx7+width))||((x0+7)==(cx7-width))||(((x0-7)<=(cx6+width))&&((x0+7)>=(cx6-width)))||((x0-7)==(cx6+width))||((x0+7)==(cx6-width))){
					x0=130;
					y0=231; 
					lives--;
					drawScoreBoard(sbx,sby);
					score(lives, points); 
				}	
			}					
			if(y0>=128&&y0<=146){		//First Lane of cars
					if((((x0-7)<=(cx+width1))&&((x0+7)>=(cx-width1)))||((x0-7)==(cx+width1))||((x0+7)==(cx-width1))||(((x0-7)<=(cx2+width1))&&((x0+7)>=(cx2-width1)))||((x0-7)==(cx2+width1))||((x0+7)==(cx2-width1))){
					x0=130;
					y0=231; 
					lives--;
					drawScoreBoard(sbx,sby);
					score(lives, points);
					}
				}	
			
			if(y0>=25&&y0<=43){		//First Lane Pads
				if((((x0-7)<=(padx+(3*rad)))&&((x0+7)>=(padx-rad)))||((x0-7)==(padx+(3*rad)))||((x0+7)==(padx-rad))||(((x0-7)<=(padx1+(3*rad)))&&((x0+7)>=(padx1-rad)))||((x0-7)==(padx1+(3*rad)))||((x0+7)==(padx1-rad))){
					drawFrog(x0,y0,0);				
					x0-=padspeed;
					drawFrog(x0,y0,1);
					}
				else{
					x0=130;
					y0=231;
					lives--;
					drawScoreBoard(sbx,sby);
					score(lives, points);
				}	
			}				
			if(y0>=44&&y0<=62){		//Second Lane Logs
					if((((x0-7)<=(logx+logwid))&&((x0+7)>=(logx-logwid)))||((x0-7)==(logx+logwid))||((x0+7)==(logx-logwid))||(((x0-7)<=(logx1+logwid))&&((x0+7)>=(logx1-logwid)))||((x0-7)==(logx1+logwid))||((x0+7)==(logx1-logwid))||(((x0-7)<=(logx2+logwid))&&((x0+7)>=(logx2-logwid)))||((x0-7)==(logx2+logwid))||((x0+7)==(logx2-logwid))){
					drawFrog(x0,y0,0);
					x0+=logspeed;
					drawFrog(x0,y0,1);
					}
				else{
					x0=130;
					y0=231;
					lives--;
					drawScoreBoard(sbx,sby);
					score(lives, points);
				}
			}
			if(y0>=63&&y0<=81){		//Third Lane Pads
				if((((x0-7)<=(padx+rad))&&((x0+7)>=(padx-(3*rad))))||((x0-7)==(padx+rad))||((x0+7)==(padx-(3*rad)))||(((x0-7)<=(padx1+rad))&&((x0+7)>=(padx1-(3*rad))))||((x0-7)==(padx1+rad))||((x0+7)==(padx1-(3*rad)))){
								drawFrog(x0,y0,0);	
								x0-=padspeed;
								drawFrog(x0,y0,1);
					}
				else{
					x0=130;
					y0=231;
					lives--;
					drawScoreBoard(sbx,sby);
					score(lives, points);
				}	
			}				
			if(y0>=82&&y0<=100){		//Fourth Lane Logs
				if((((x0-7)<=(logx+logwid))&&((x0+7)>=(logx-logwid)))||((x0-7)==(logx+logwid))||((x0+7)==(logx-logwid))||(((x0-7)<=(logx1+logwid))&&((x0+7)>=(logx1-logwid)))||((x0-7)==(logx1+logwid))||((x0+7)==(logx1-logwid))||(((x0-7)<=(logx2+logwid))&&((x0+7)>=(logx2-logwid)))||((x0-7)==(logx2+logwid))||((x0+7)==(logx2-logwid))){
					drawFrog(x0,y0,0);				
					x0+=logspeed;
					drawFrog(x0,y0,1);
					}
				else{
					x0=130;
					y0=231;
					lives--;
					drawScoreBoard(sbx,sby);
					score(lives, points);
				}		
			}
			if(y0>=98&&y0<=116){		//Fifth Lane Pads
				if((((x0-7)<=(padx+(3*rad)))&&((x0+7)>=(padx-rad)))||((x0-7)==(padx+(3*rad)))||((x0+7)==(padx-rad))||(((x0-7)<=(padx1+(3*rad)))&&((x0+7)>=(padx1-rad)))||((x0-7)==(padx1+(3*rad)))||((x0+7)==(padx1-rad))){
				drawFrog(x0,y0,0);	
				x0-=padspeed;
				drawFrog(x0,y0,1);
					}
				else{
					x0=130;
					y0=231;
					lives--;
					drawScoreBoard(sbx,sby);
					score(lives, points);
				}
			}		
			if(y0>=0&&y0<=24){			//Scoring
				if((((x0-7)<=20)&&((x0+7)>=0))){	//First House
					home1=1;
					x0 = 130;
					y0 = 231;
			}
			else if((((x0-7)<=80)&&((x0+7)>=60))){ //Second House
					home2=1;
					x0 = 130;
					y0 = 231;
		}
			else	if(((x0-7)<=140)&&((x0+7)>=120)){ //Third House
					home3=1;
					x0 = 130;
					y0 = 231;
		}
			else	if(((x0-7)<=200)&&((x0+7)>=180)){ //Fourth House
					home4=1;
					x0 = 130;
					y0 = 231;
		}
			else	if(((x0-7)<=260)&&((x0+7)>=240)){ //Fifth House
					home5=1;
					x0 = 130;
					y0 = 231;					
		}
			}
				drawCar1LR(cx,cy, width1,Black);				//GOING LEFT TO RIGHT
					cx+=carspeed;
				if(cx>=260-width1)
					cx = 0;
				drawCar1LR(cx,cy, width1,color);
				
				drawCar1RL(cx9,cy9,width,Black);			//GOING RIGHT TO LEFT
				cx9-=truckspeed;
				if(cx9 < (width-1))
					cx9 = 260-width;
				drawCar1RL(cx9-10,cy9, width, color);
				
				drawCar2LR(cx2,cy, width1,Black);				//GOING LEFT TO RIGHT
				cx2+=carspeed;
				if(cx2>= 260-width1)
					cx2 = 0;
				drawCar2LR(cx2,cy, width1,color);
					
				drawCar2RL(cx7,cy9, width,Black);			//GOING RIGHT TO LEFT
				cx7-=truckspeed;
				if(cx7 < width)
					cx7 = 260-width;
				drawCar2RL(cx7,cy9, width, color);
//					for(k=0; k<500000; k++);						//DELAY FOR DRAWING CARS
				
				drawCar3RL(cx6,cy9, width,Black);			//GOING RIGHT TO LEFT
				cx6-=truckspeed;
				if(cx6 < width)
					cx6 = 260-width;
				drawCar3RL(cx6,cy9, width, color);
				
				
				drawlogLR1(logx,logy,logwid,Black);	//GOING LEFT TO RIGHT
				
				logx+=logspeed;
				if(logx>=260){
					logx = 0;
				}
				drawlogLR1(logx,logy,logwid,Brown);
				
			  drawlogLR2(logx1,logy,logwid,Black);
				logx1+=logspeed;
				if(logx1>=260)
					logx1 = 0;
				drawlogLR2(logx1,logy,logwid,Brown);
				
				drawlogLR3(logx2,logy,logwid,Black);
				logx2+=logspeed;
				if(logx2>=260)
					logx2 = 0;
				drawlogLR3(logx2,logy,logwid,Brown);
				
				drawpadRL1(padx,pady,rad,Black);
				padx-=padspeed;
				if(padx<=rad)
					padx = 260;
				drawpadRL1(padx,pady,rad,Green);
				
				drawpadRL2(padx1,pady,rad,Black);
				
				padx1-=padspeed;
				if(padx1<=rad)
					padx1 = 260;
				drawpadRL2(padx1,pady,rad,Green);
				
				drawFrog(x0,y0,1);
				if ((LPC_GPIO2->FIOPIN & mask_val) == on_val){
					pause = 1;
					for(k=0; k<500000; k++);
					}
				while(pause == 1){
						for(k=0; k<500000; k++);
						if ((LPC_GPIO2->FIOPIN & mask_val) == on_val)
							pause = 0;

				}
				
				if ((LPC_GPIO2->FIOPIN & mask_valleft) == on_val){	   //Move frog left	
				drawFrog(x0,y0,0);
				grass();
				x0 = x0 - 20;
				drawFrog(x0,y0,1);
				}
				if ((LPC_GPIO2->FIOPIN & mask_valright) == on_val){   //Move frog right
					drawFrog(x0,y0,0);
					grass();
					x0 = x0 + 20;
					drawFrog(x0,y0,1);
				}
				if ((LPC_GPIO2->FIOPIN & mask_valdown) == on_val){		//Move frog down
					drawFrog(x0,y0,0);
					grass();
					y0 = y0 + 18;
					drawFrog(x0,y0,1);
				}	
				if ((LPC_GPIO1->FIOPIN & mask_valup) == on_val){			//Move frog up
					drawFrog(x0,y0,0);
					grass();
					y0 = y0 - 18;
					drawFrog(x0,y0,1);
				}
				if(y0+7>240)
					y0 = y0-18;
				if(x0+7>260)
					x0 = x0-20;
				if(x0+7<0)
					x0 = x0+20;
				if(y0-7<0)
					y0 = y0+18;
				
		}
 }

