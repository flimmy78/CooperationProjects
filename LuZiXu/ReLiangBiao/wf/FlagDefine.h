#ifndef   __FlagDefine_h__
#define   __FlagDefine_h__

#include "main.h"
/************************************************************************/
/* ��һ��Ϊ���λ                                                       */
/************************************************************************/
typedef union   
{
	struct
	{
		unsigned bCalcHeat:1;//�Ƿ񴮿��յ�����֡	

	}Bits;
	uint8_t AllFlag;
} _GFlags;        // general flags


typedef union   
{
	struct
	{
		float k1;
		float b1;
		float k2;
		float b2;
		float a1;
		float a2;
		float a3;
		float a4;
	}Params;
	uint8_t All[32];
} _ROMCalcParams;        // general flags

typedef union   
{
	struct
	{
		uint32_t BiaoHao;
		uint32_t ChangDai;
		uint32_t DeviceNum;
		uint16_t DN;
		uint8_t SetupPos; //��װλ��
		uint8_t bak;//����
	}Params;
	uint8_t All[16];
} _ROMDeviceParams;        // general flags

#define TCalc_Addr 0	//16���ֽڣ��¶ȼ���ϵ��
#define QCalc_Addr 16	//16���ֽڣ���������ϵ��

#define AllHeat_Addr 32	//4���ֽڣ��ۼ�����
#define AllQ_Addr 36	//4���ֽڣ��ۼ�����
#define AllTime_Addr 40	//4���ֽڣ��ۼƹ���ʱ��
//44-47,Ԥ��4���ֽڱ���
#define DeviceParams_Addr 48	//16���ֽڣ��豸����
#define SetupPos_Addr 62


#endif
