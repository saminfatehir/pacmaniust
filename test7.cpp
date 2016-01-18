#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <SDL/SDL_gfxPrimitives.h>
#include <SDL/SDL_mixer.h>
#include <iostream>

using namespace std;
int main(){
SDL_Surface* screen = SDL_SetVideoMode(482, 660, 32, SDL_HWSURFACE );


  SDL_Init( SDL_INIT_EVERYTHING );
  //  SDL_Surface *screen = SDL_SetVideoMode( 600, 400, 32, SDL_HWSURFACE );
	
Mix_Chunk* effect1;

Mix_OpenAudio(22050,MIX_DEFAULT_FORMAT,2,4096);
effect1=Mix_LoadWAV("/home/samin/Downloads/pacman_chomp.zip/pacman_chomp.wav");


boxRGBA(screen,0,0,700,900,255,255,255,255);
lineRGBA(screen,8,6,476,6,0,0,255,255);
lineRGBA(screen,8,6,8,654,0,0,255,255);
lineRGBA(screen,476,6,476,654,0,0,255,255);
lineRGBA(screen,8,654,476,654,0,0,255,255);
boxRGBA(screen,44,42,224,60,0,0,255,255);//bala ch ofogh
boxRGBA(screen,44,42,62,222,0,0,255,255);//bala ras amod
boxRGBA(screen,260,42,440,60,0,0,255,255);//bala ch ofogh
boxRGBA(screen,440,60,422,222,0,0,255,255);//bala ch amod
boxRGBA(screen,98,96,224,114,0,0,255,255);//ch ofogh
boxRGBA(screen,98,96,116,222,0,0,255,255);//ch amod
boxRGBA(screen,386,96,260,114,0,0,255,255);//ras ofgh
boxRGBA(screen,386,96,368,222,0,0,255,255);	//ras amod//
boxRGBA(screen,152,150,332,168,0,0,255,255);//vasat
boxRGBA(screen,152,204,170,330,0,0,255,255);//zela ras amod mostatil
boxRGBA(screen,314,204,332,330,0,0,255,255);//zela ch amod moststil
boxRGBA(screen,170,312,332,330,0,0,255,255);//zela ofogh mostatil
boxRGBA(screen,152,258,314,276,0,0,255,255);//zela  balaei ofogh mostatil
boxRGBA(screen,8,258,116,267,0,0,255,255);//nazok ch bala
boxRGBA(screen,8,321,116,330,0,0,255,255);//nazok ch paien
boxRGBA(screen,368,258,476,267,0,0,255,255);//nazok ras bala
boxRGBA(screen,368,321,476,330,0,0,255,255);//nazok ras paien

boxRGBA(screen,152,366,332,384,0,0,255,255);//vasat bala
boxRGBA(screen,152,420,224,564,0,0,255,255);//ch moststil big
boxRGBA(screen,260,420,332,564,0,0,255,255);//ras mostatil big
boxRGBA(screen,152,600,332,618,0,0,255,255);//vast pain
boxRGBA(screen,44,366,62,618,0,0,255,255);//aval
boxRGBA(screen,98,366,116,618,0,0,255,255);//dovom
boxRGBA(screen,368,366,386,618,0,0,255,255);//sevom
boxRGBA(screen,422,366,440,618,0,0,255,255);//charom
int i,j,a=0,r=0,t=0,p=3,x1,y1;
int x=242;
int y=348;

for(i=-216;i<=600;i++){
x=242+i;
for(j=-324;j<=500;j+=18){
y=348+j;
if(((x==134 ||x == 350) && y<=636 && y>=132)||((x== 80 || x == 404)&& y<=240 && y>=78) ||((x== 26 || x == 458) && y>=24 && y<=240)||(x==242 && y>=24 && y<=132)||((x==26 ||x==80||x==404 || x==458) && y<=636 && y>=348) ||(x==242 && y>=402 && y<=582) || ((x==26 || x ==80 || x==404 ||x==458) && y>=348 && y<=636)){
filledEllipseRGBA(screen, x, y, 3, 3, 100, 200, 0, 255);}
continue;}}
for(j=-324;j<=600;j++){
y=348+j;
for(i=-216;i<=500;i+=18){
x=242+i;
if(((y == 24 || y== 636 || y==348) && x>=26 && x<=458) ||(y== 78 && x<=404 && x>=80)||(y== 132 && x>=134 && x<=350) ||(y==240 && x<=134 && x>=26)||(y==240 && x<=458 && x>=350)|| ((y == 402 || y == 582) && x>=134 && x<=350)){
filledEllipseRGBA(screen, x, y, 3, 3, 100, 200, 0, 255);}
continue;}}
i=0;
j=0;


while(true)
{
SDL_Surface *image;
	SDL_Surface *temp = SDL_LoadBMP("/home/samin/Desktop/pacman-ghost-colour1.bmp" );
	image=temp;


//Mix_OpenAudio(22050,MIX_DEFAULT_FORMAT,2,4096);
//effect1=Mix_LoadWAV("/home/samin/Downloads/pacman_chomp.zip/pacman_chomp.wav");
Mix_PlayChannal(-1,effect1,0);


x=242+i;
y=348+j;
x1=242+t;
y1=192+r;
//x1==350+t ;
//y1=78+r;


SDL_Rect enemy1;
    enemy1.x=236+t;
    enemy1.y=186+r;
    enemy1.w=5;
    enemy1.h=5;

//filledEllipseRGBA(screen,350+t,78+r,10,10,255,255,255,255); //movaghghat
//filledEllipseRGBA(screen,242+t,192+r,10,10,255,255,255,255); //asli

if(x1<350 && x1>134 && y1==192)
	t+=p;
if(x1==350 && y1<=240 && y1>132)
	r-=p;
if(y1==132 && x1<=350 && x1>134)
	t-=p;
if(x1==134 && y1>=132 && y1<348)
	r+=p;

if(x>242 && y>348 && y1==348 && x1<350 && x1>=134)
	t+=p;
if(x<=242 && y>=348 && y1==348 && x1>=350 && x1>134)
	t-=p;



if(x==26 && y>=348 && y<=636 && y1==348 && x1<=134 && x1>26)
	t-=p;
if(x==26 && y>=348 && y<=636 && x1==26 && y1>=348 && y1<636){
	if(y>y1)
		r+=p;
}
if(x==26 && y>=348 && y<=636 && x1==26 && y1>348 && y1<=636){
	if(y<y1)
		r-=p;
}
if(x==80 && y>=348 && y<=636 && y1==348 && x1<=134 && x1>80)
	t-=p;
if(x==80 && y>=348 && y<=636 && x1==80 && y1>=348 && y1<636){
	if(y>y1)
		r+=p;
}
if(x==80 && y>=348 && y<=636 && x1==80 && y1>348 && y1<=636){
	if(y<y1)
		r-=p;
}
if(x==134 && y>=348 && y<=636 && y1==348 && x1<=134 && x1>134)
	t-=p;
if(x==134 && y>=348 && y<=636 && x1==134 && y1>=348 && y1<636){
	if(y>y1)
		r+=p;
}
if(x==134 && y>=348 && y<=636 && x1==134 && y1>348 && y1<=636){
	if(y<y1)
		r-=p;
}
if(y==402 && x>=134 && x<350 && x1==134 && y1<636 && y1>=382) //*
	r+=p;
if(y==582 && x>=134 && x<350 && x1==134 && y1<636 && y1>=382) //*
	r+=p;
if(x==458 && y>=348 && y<=636 && y1==348 && x1>=350 && x1<458)
	t+=p;
if(x==458 && y>=348 && y<=636 && x1==458 && y1>=348 && y1<636){
	if(y>y1)
		r+=p;
}
if(x==458 && y>=348 && y<=636 && x1==458 && y1>348 && y1<=636){
	if(y<y1)
		r-=p;
}
if(x==404 && y>=348 && y<=636 && y1==348 && x1>=350 && x1<404)
	t+=p;
if(x==404 && y>=348 && y<=636 && x1==404 && y1>=348 && y1<636){
	if(y>y1)
		r+=p;
}
if(x==404 && y>=348 && y<=636 && x1==404 && y1>348 && y1<=636){
	if(y<y1)
		r-=p;
}
if(x==350 && y>=348 && y<=636 && y1==348 && x1<=134 && x1>350)
	t-=p;
if(x==350 && y>=348 && y<=636 && x1==350 && y1>=348 && y1<636){
	if(y>y1)
		r+=p;
}
if(x==350 && y>=348 && y<=636 && x1==350 && y1>348 && y1<=636){
	if(y<y1)
		r-=p;
}
if(y==636 && x<=458 && x>=26 && y1==636 &&  x1<458 && x1>=26){
	if (x>x1)
		t+=p;
}
if(y==636 && x<=458 && x>=26 && y1==636 &&  x1<=458 && x1>26){
	if (x<x1)
		t-=p;
}
if(y>=348 && x<=242 && y1==636 && x1>26 && x1<458 && x1!=26 && x!=80 && x!=134 && x!=350 && x!=404 && x!=458){
	if (x>x1)
		t+=p;
	if (x<x1)
		t-=p;
}
if(y==348 && x<=458 && x>=26 && y1==348 && x1<458 && x1>=26){
	if (x>x1)
		t+=p;
}
if(y==348 && x<=458 && x>=26 && y1==348 && x1<=458 && x1>26){
	if (x<x1)
		t-=p;
}
if(y>=348 && x<=242 && y1==348 && x1<=458 && x1>26 && x1!=26 && x!=80 && x!=134 && x!=350 && x!=404 && x!=458){
	if (x>x1)
		t+=p;
	if (x<x1)
		t-=p;
}




/*



/////////////////////////up to down

if(y>=348 && (y1==24 && x1>26) || (y1==78 && x1>80) && x1<242)
	t+=p;
if(y>=348 && (y1==24 && x1<458) || (y1==78 && x1<404) && x1>242)
	t-=p;
if(y>=348 && x1==242 && y1>=24 && y1<132)
	r+=p;
if(y>=348 && x<=242 && y1==132 && x1<=242 && x1>134)
	t-=p;
if(y>=348 && x>242 && y1==132 && x1<=242 && x1>134)
	t+=p;
if(y>=348 && (x1==134 || x1==350) && y1>=132 && y1<348 )
	r+=p;
if(y>=348 && ((x1==26 && y1>=24) || (x1==80 && y1>=78)) && y1<240)
	r+=p;
if(y>=348 && ((x1==458 && y1>=24) || (x1==404 && y1>=78)) && y1<240)
	r+=p;
if(y>=348 && y1==240 && x1>=26 && x1<134)
	t+=p;
if(y>=348 && y1==240 && x1>350 && x1<=458)
	t-=p;

*/








//if(!(x==26 && y>=348 && y<=636) && y1==348 && x1<134 && x1>26)
//	t-=p;
if(!(x==26 && y>=348 && y<=636) && x1==26 && y1>=348 && y1<636){
	if(y>y1)
		r+=p;
	if(y<y1)
		r-=p;
}
//if(!(x==80 && y>=348 && y<=636) && y1==348 && x1<=134 && x1>80)
//	t-=p;
if(!(x==80 && y>=348 && y<=636) && x1==80 && y1>348 && y1<636){
	if(y>y1)
		r+=p;
	if(y<y1)
		r-=p;
}
//if(!(x==134 && y>=348 && y<=636) && y1==348 && x1<134 && x1>134)
//	t-=p;
if(!(x==134 && y>=348 && y<=636) && x1==134 && y1>348 && y1<636){
	if(y>y1)
		r+=p;
	if(y<y1)
		r-=p;
}
if(y==402 && x>=134 && x<350 && x1==134 && y1<636 && y1>=382) //*
	r+=p;
if(y==582 && x>=134 && x<350 && x1==134 && y1<636 && y1>=382) //*
	r+=p;
//if(!(x==458 && y>=348 && y<=636) && y1==348 && x1>350 && x1<458)
//	t+=p;
if(!(x==458 && y>=348 && y<=636) && x1==458 && y1>348 && y1<636){
	if(y>y1)
		r+=p;
	if(y<y1)
		r-=p;
}
//if(!(x==404 && y>=348 && y<=636) && y1==348 && x1>350 && x1<404)
//	t+=p;
if(!(x==404 && y>=348 && y<=636) && x1==404 && y1>348 && y1<636){
	if(y>y1)
		r+=p;
	if(y<y1)
		r-=p;
}
//if(!(x==350 && y>=348 && y<=636) && y1==348 && x1<134 && x1>350)
//	t-=p;
if(!(x==350 && y>=348 && y<=636) && x1==350 && y1>348 && y1<636){
	if(y>y1)
		r+=p;
	if(y<y1)
		r-=p;
}
if(!(y==636 && x>=26 && x<=458) && y1==636 && x1>26 && x1<458){
	if (x>x1)
		t+=p;
	if (x<x1)
		t-=p;
}



	SDL_BlitSurface( image, NULL, screen, &enemy1 );
	//SDL_Flip( screen );
	
	

//filledEllipseRGBA(screen,242+t,192+r,10,10,255,0,0,255); //asli
//filledEllipseRGBA(screen,350+t,78+r,10,10,255,0,0,255); //movaghghat



	SDL_Event event;
        if(!SDL_PollEvent(&event));
      		{
		filledEllipseRGBA(screen, 242+i, 348+j, 10, 10, 255,255,255, 255);
                 if(event.type == SDL_QUIT)
                 return 0;
	if(event.type == SDL_KEYDOWN){
		if(event.key.keysym.sym == SDLK_UP){
			if(((x==134 ||x == 350) && y<=636 && y>=132)||((x== 80 || x == 404)&& y<=240 && y>=78) ||((x== 26 || x == 458) && y>=24 && y<=240)||(x==242 && y>=24 && y<=132)||((x==26 ||x==80||x==404 || x==458) && y<=636 && y>=348) ||(x==242 && y>=402 && y<=582) || ((x==26 || x ==80 || x==404 ||x==458) && y>=348 && y<=636))
 				a=1;}
 		if(event.key.keysym.sym == SDLK_DOWN){		
			if(((x==134 ||x == 350) && y<=636 && y>=132)||((x== 80 || x == 404)&& y<=240 && y>=78) ||((x== 26 || x == 458) && y>=24 && y<=240)||(x==242 && y>=24 && y<=132)||((x==26 ||x==80||x==404 || x==458) && y<=636 && y>=348) ||(x==242 && y>=402 && y<=582) || ((x==26 || x ==80 || x==404 ||x==458) && y>=348 && y<=636))
 				a=2;}
		if(event.key.keysym.sym == SDLK_LEFT){
			if(((y == 24 || y== 636 || y==348) && x>=26 && x<=458) ||(y== 78 && x<=404 && x>=80)||(y== 132 && x>=134 && x<=350) ||(y==240 && x<=134 && x>=26)||(y==240 && x<=458 && x>=350)|| ((y == 402 || y == 582) && x>=134 && x<=350))
				a=3;}
		if(event.key.keysym.sym == SDLK_RIGHT){
			if(((y == 24 || y== 636 || y==348) && x>=26 && x<=458) ||(y== 78 && x<=404 && x>=80)||(y== 132 && x>=134 && x<=350) ||(y==240 && x<=134 && x>=26)||(y==240 && x<=458 && x>=350)|| ((y == 402 || y == 582) && x>=134 && x<=350))
				a=4;}
				}	}


	if(!(((x==134 ||x == 350) && y<=636 && y>=132)||((x== 80 || x == 404)&& y<=240 && y>=78) ||((x== 26 || x == 458) && y>=24 && y<=240)||(x==242 && y>=24 && y<=132)||((x==26 ||x==80||x==404 || x==458) && y<=636 && y>=348) ||(x==242 && y>=402 && y<=582) || ((x==26 || x ==80 || x==404 ||x==458) && y>=348 && y<=636)) && a==1){
		a=0;
 		j+=3;
}
	if(!(((x==134 ||x == 350) && y<=636 && y>=132)||((x== 80 || x == 404)&& y<=240 && y>=78) ||((x== 26 || x == 458) && y>=24 && y<=240)||(x==242 && y>=24 && y<=132)||((x==26 ||x==80||x==404 || x==458) && y<=636 && y>=348) ||(x==242 && y>=402 && y<=582) || ((x==26 || x ==80 || x==404 ||x==458) && y>=348 && y<=636)) && a==2){
		a=0;
 		j-=3;
}
	if(!(((y == 24 || y== 636 || y==348) && x>=26 && x<=458) ||(y== 78 && x<=404 && x>=80)||(y== 132 && x>=134 && x<=350) ||(y==240 && x<=134 && x>=26)||(y==240 && x<=458 && x>=350)|| ((y == 402 || y == 582) && x>=134 && x<=350)) &&  a==3) {
		a=0;
		i+=3;
}
	if(!(((y == 24 || y== 636 || y==348) && x>=26 && x<=458) ||(y== 78 && x<=404 && x>=80)||(y== 132 && x>=134 && x<=350) ||(y==240 && x<=134 && x>=26)||(y==240 && x<=458 && x>=350)|| ((y == 402 || y == 582) && x>=134 && x<=350)) &&  a==4) {
		a=0;
		i-=3;
}

if(a==1)
{
 
	j-=3;
 }
if(a==2)
{
 
	j+=3;
}
if(a==3)
{
    	i-=3; 
}

if(a==4)
{
	i+=3;
}

filledEllipseRGBA(screen, 242+i, 348+j, 10, 10,0,150, 255, 255);
	SDL_FreeSurface(image);
	SDL_FreeChunk(effect1);
	Mix_CloseAudio;
        SDL_Flip(screen);
        SDL_Delay(20);
}
		
//SDL_Flip(screen);

SDL_Quit();
SDL_Delay(5000);
return 0;
}
