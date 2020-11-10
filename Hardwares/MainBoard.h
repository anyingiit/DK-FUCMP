#include<stdio.h>
#include"../GlobalVars/GlobalVar.h"
#include"../Functions/Bios.h"

extern int ErrorCode;
int MainBoardManager(int volt){
	if (ErrorCode = POST(volt))
		return  ErrorCode;
	printf("%50s", "POST check OK!\n");
	if (ErrorCode = checkMainBoard())
		return 0x300 + ErrorCode;//TODO:待完善
	if (ErrorCode = CheckComputer())
		return ErrorCode;
	printf("%50s", "All system check OK!\n");
	return 0;
}

int checkMainBoard(){
	printf("MainBoard OK!\n");
	return 0;
} 
