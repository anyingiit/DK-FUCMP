#include <stdbool.h>
#include"../GlobalVars/GlobalVar.h"
#include"../Hardwares/CPU.h"
#include"../Hardwares/GPU.h"
#include"../Hardwares/Memory.h"
#include "../Hardwares/HardDisk.h"
#include "../Hardwares/Peripherals.h"
#include "../Hardwares/NetworkCard.h"

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

//void statusReport(int id,int code){
//    char *name;
//    switch (id) {
//        case 2:
//            name = "CPU";
//            break;
//        case 5:
//            name = "Memory";
//            break;
//        case 4:
//            name = "GPU";
//            break;
//    }
//    if (code != 0){
//        printf("%s is not ok...");
//    } else{
//        printf("%s OK!");
//    }
//}

void statusReport(char *name,int code){
    if (code != 0){
        printf("%s is not ok...\n",name);
    } else{
        printf("%s OK!\n",name);
    }
}

int CheckComputer() {
    bool demoMode = true;
    if (!demoMode){
        //	printf("checks");
        if (ErrorCode = CheckCPU())
            return 0x200 + ErrorCode;
//	if (ErrorCode = CheckMainBoard())
//		return 0x300 + ErrorCode;
        if (ErrorCode = CheckMemory())
            return 0x500 + ErrorCode;
        if (ErrorCode = CheckGPU())
            return 0x400 + ErrorCode;
        if (ErrorCode = CheckHardDisk())
            return 0x600 + ErrorCode;
        if (ErrorCode = CheckPeripherals())
            return 0x700 + ErrorCode;
        if (ErrorCode = CheckNetworkCard())
            return 0x800 + ErrorCode;
        return 0;
    } else{
        printf("%50s","CheckComputer Demo mode started...\n");
        CheckCPU()?statusReport("CPU",true):statusReport("CPU",false);
        CheckMemory()?statusReport("MEM",true):statusReport("MEM",false);
        CheckGPU()?statusReport("GPU",true):statusReport("GPU",false);
        CheckHardDisk()?statusReport("HdD",true):statusReport("HdD",false);
        CheckPeripherals()?statusReport("PRL",true):statusReport("PRL",false);
        CheckNetworkCard()?statusReport("NWC",true):statusReport("NWC",false);
        return 0x900;
    }

}
