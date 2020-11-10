#include <stdio.h>
//#include <windows.h>
#include"GlobalVars/GlobalVar.h"
#include"Hardwares/MainBoard.h"
extern int ErrorCode;
int main() {
//    system("chcp 936");
	int volt;
    printf("Input power(volt):\n");
	scanf("%d", &volt);
	if (ErrorCode = MainBoardManager(volt)) {
		printf("Ó²¼şÒì³£, ´íÎó´úÂë:[0x%X]", ErrorCode);
		return ErrorCode;
	}
	else {
		printf("==========System started!==========");
		return 0;
	}
}
