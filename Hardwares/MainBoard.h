#include<stdio.h>
#include"../GlobalVars/GlobalVar.h"
#include"../Functions/Bios.h"

extern int ErrorCode;
int checkMainBoard(){
    printf("MainBoard OK!\n");
    return 0;
}

int MainBoardManager(int volt){
    printf("%50s", "POST check starting......\n");
	if (ErrorCode = POST(volt))
		return  ErrorCode;
	printf("%50s", "POST check OK!\n");
    printf("%50s", "MainBoard check starting......\n");
	if (ErrorCode = checkMainBoard())
		return 0x300 + ErrorCode;
    printf("%50s", "Computer check starting......\n");
    if (ErrorCode = CheckComputer())
		return ErrorCode;
	printf("%50s", "All system check OK!\n");
	return 0;
}


