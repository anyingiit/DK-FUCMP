#include<stdio.h>
#include"GlobalVars/GlobalVar.h"
#include"Hardwares/MainBoard.h"
extern int ErrorCode;
int main() {
	int volt;
	printf("Input power(volt):\n");
	scanf("%d", &volt);
	if (ErrorCode = MainBoardManager(volt)) {
		printf("硬件异常, 错误代码:[%X]", ErrorCode);
		return ErrorCode;
	}
	else {
		printf("==========System started!==========");
		return 0;
	}
}
