#include"../GlobalVars/GlobalVar.h"
#include"../Hardwares/CPU.h"
#include"../Hardwares/GPU.h"
#include"../Hardwares/Memory.h"

extern int ErrorCode;
int POST(int volt) {
	printf("Get volt[%d]V\n",volt);
	if (volt != 220) {
		printf("电源异常,仅支持220V输入\n");
		return 0x100 + 1;
	}
	printf("Power OK!\n");
	return 0;
}
int CheckComputer() {
	printf("checks");
	if (ErrorCode = CheckCPU())
		return 0x200 + ErrorCode;
//	if (ErrorCode = CheckMainBoard())
//		return 0x300 + ErrorCode;
	if (ErrorCode = CheckMemory())
		return 0x500 + ErrorCode; 
	if (ErrorCode = CheckGPU())
		return 0x400 + ErrorCode;
	return 0;
}
