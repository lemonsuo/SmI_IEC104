/*
 * MbMapMR5all.h
 *
 *  Created on: 02.04.2018
 *      Author: sagok
 */

#ifndef MBMAPMR741_H_
#define MBMAPMR741_H_

#define _swREV				"MR741"
#define _swSubREV			""

#define _REVISION_DEVICE	304
#define _swREVverify		""



/*************************************************************************
 * MR5
 *************************************************************************/
#if defined (MR741)

//Modbus  MR
#define MB_Speed				115200
#define MB_Slaveaddr   			1

#define	_delayAfterResponse		10		// ��� ������ x.02 �� ���� 10��


// ���������.
#define range_maxIphs			40		// �������� ����� �� �����
#define range_minIphs			0
#define range_maxI0				40
#define range_minI0				0
#define range_maxIn				5
#define range_minIn				0

#define range_maxZ				256

#define range_maxU				256
#define range_minU				0

#define range_maxF				60
#define range_minF				40

#define range_maxCosF				1
#define range_minCosF				0

#define range_maxW				65536000

// --------------------------------------------------------
// �������

// SysNote ------------------------------------------------
#define MB_WriteSysNoteaddr   			0x2000			//����� � ������� ����� ����� ��������� ��� ������ �� 0x2100
#define MB_Addr_SysNote   			0x2000
#define MB_EndSysNoteaddr   			0x2800
#define MB_Size_SysNote					8
#define MB_Size_SysNoteASCII				8
#define MB_SizeSysNote					128			// ����� ������� � �������
	
#define MB_offset_Word					0
#define MB_offset_ASCII					8			// �� ������������, � ������� ������

#define MB_OffsetSysNoteMessage	 		0			// ����� � ������� ��� ���������
#define MB_Code_SysNoteEndJurnal		0

// ErrorNote ----------------------------------------------
#define MB_Addr_ErrorNote  			0x2800
#define MB_EndErrorNoteaddr   			0x3000
#define MB_Size_ErrorNote				28			// ����� ���� � ����� ������
#define MB_Size_ErrorNoteASCII			48			//
#define MB_NextErrorNote				0x40			// ���������� �� �������

#define MB_Size_ErrorNoteTime			8			// ����� ���� ������� �������
#define MB_SizeErrorNote				32			// ����� ������� � �������

#define MB_OffsetErrorNoteMessage 		0			// ����� � ������� ��� ���������
#define MB_Code_ErrorNoteEndJurnal		0

// OscNote -----------------------------------------------
#define MB_Addr_OscNote				0x0800
#define MB_EndOscNoteaddr   			0x0900
#define MB_Size_OscNote					20			// ������ ����� ������
#define MB_SizeOscNote	   				((MB_EndOscNoteaddr - MB_Addr_OscNote)/MB_Size_OscNote)			// ����� ������� � �������

#define MB_Size_OscNoteTime				8			// ����� ���� ������� �������

#define MB_OffsetOscNoteMessage	 		0			// ����� � ������� ��� ���������

#define MB_Code_OscNoteEndJurnal		0
#define MB_Code_OscNoteREADY			8

// ������������ -------------------------------------------
#define MB_Addr_Osc				0x0900
#define MB_SizeAllOsc				0x0D00

#define MB_SizeOscBlock				1024
#define MB_SizeOscFile		   		30000			// ������ �����

#define MB_Osc_POINT				10
#define MB_Osc_LEN					14
// --------------------------------------------------------

#define _LimitNoteSize					(28 * 64)		// 64 ������� �� ������� ������	224 ������� �� ������� �������
// --------------------------------------------------------

// --------------------------------------------------------
// ����� ������ �������
// --------------------------------------------------------
#define MB_StartConfig					0x1000
#define MB_Addr_Ustavkiaddr0			0x1000

// ��� ������� ������. � ����� ����� ���������� ���� ������� ��-��.

#define MB_Size_Ustavki					(0x1032 - MB_StartConfig)
#define MB_NumbConfigTr					(0x100D - MB_StartConfig)

// --------------------------------------------------------

#define MB_offset_BlockSDTU				(0x1018 - MB_StartConfig)

#define MB_offset_ControlBits			0x3B
#define MB_bOffset_ControlButtons		(1<<0)			// ���������� �� ������
#define MB_bOffset_ControlKey			(1<<1)			// ���������� �� �����
#define MB_bOffset_ControlExt			(1<<2)			// ������� ����������
#define MB_bOffset_ControlSDTU			(1<<3)			// ���������� �� ����


// ��������� ��� �� ---------------------------------------
#define MB_offset_Itt					(0x1001 - MB_StartConfig)
// ��������� ��� ���� -------------------------------------
#define MB_offset_Ittnp					(0x1002 - MB_StartConfig)
// ����������� �� -----------------------------------------
#define MB_offset_Ktn					(0x1009 - MB_StartConfig)
// ����������� ���� ---------------------------------------
#define MB_offset_Ktnnp					(0x100B - MB_StartConfig)

// ������������ ��� ---------------------------------------
#define MB_StartConfig_OMP				(0x100D - MB_StartConfig)

#define MB_offset_OMP_Config			0			//������������
#define MB_offset_OMP_Rline				1			//�������� ����������� ������������� �����

#define MB_bOffset_OMP_Config_Stat		1


// ������������ ����������� -------------------------------------
#define MB_Addr_ConfigSW				0x1032			// ������������ �����������
#define MB_Size_ConfigSW					(0x103C - MB_Addr_ConfigSW)
#define MB_Size_ConfSW					MB_Size_ConfigSW

#define	MB_rOffsetControlSW				0			// ���������� ������������

#define MB_rOffsetBlockSW_ON			(0x1035 - MB_Addr_ConfigSW)

#define MB_offset_ConfigSW				(0x103B - MB_Addr_ConfigSW)
#define	MB_bControlSW_Button			(1<<0)
#define	MB_bControlSW_Switch			(1<<1)
#define	MB_bControlSW_Extern			(1<<2)
#define	MB_bControlSW_SDTU				(1<<3)

#define	MB_rOffsetControlSW_ON			0			// ���� ��������� ��������
#define	MB_rOffsetControlSW_OFF			1			// ���� ��������� ���������
#define	MB_rOffsetControlSW_ERROR		2			// ���� ������������� �����������

// ������������ ���������� --------------------------------------
#define MB_Addr_Automat					0x103C
#define MB_Size_Automat					(0x1050 - MB_Addr_Automat)

// ������������ ��� ----------------------------------------------
#define MB_offset_ConfAPW				(0x103C - MB_Addr_Automat)
#define MB_offset_InBlok				0x01			// ���� ����������

#define MB_bOffset_APW_Config_Stat		(0b111)

// ������������ ��� + ��� ------------------------------------------
#define MB_offset_ConfAWR				(0x1044 - MB_Addr_Automat)
// ������������ ���
#define MB_offset_ConfLZSHAWR			(0x104E - MB_Addr_Automat)

#define MB_bOffset_AWR_Config_Stat		(0b1111)
#define MB_bOffset_LZSH_Config_Stat		(0b11)	// ����: 0-�����1, 1-�����2


// ������������ ������� ����� -----------------------------------
#define MB_StartConfigExZ				0x1050
#define MB_StartConfigExZ_SG0			0x1050
#define MB_NumbConfigExZ				(0x1080 - MB_StartConfigExZ)

// �������
#define MB_offset_Ext_1					(0x1050 - MB_StartConfigExZ)
#define MB_offset_Ext_2					(MB_offset_Ext_1+6)
#define MB_offset_Ext_3					(MB_offset_Ext_2+6)
#define MB_offset_Ext_4					(MB_offset_Ext_3+6)
#define MB_offset_Ext_5					(MB_offset_Ext_4+6)
#define MB_offset_Ext_6					(MB_offset_Ext_5+6)
#define MB_offset_Ext_7					(MB_offset_Ext_6+6)
#define MB_offset_Ext_8					(MB_offset_Ext_7+6)


//������������
#define MB_offset_Ext_Config			0
// ����
#define MB_bOffset_Ext_Config_Stat		(0b1111<<0)			// ���������

// ������� ������  ----------------------------------------------
#define MB_StartConfigMTZ_SG0  			0x1080
#define MB_StartConfigMTZ_SG1  			0x10C0
#define MB_NumbConfigMTZ				(MB_StartConfigMTZ_SG1 - MB_StartConfigMTZ_SG0)

#define MB_offset_MTZ_Iup				(0x1084 - MB_StartConfigMTZ_SG0)		// ����� ������������ ������� ��� ������
#define MB_offset_MTZ_Iup2				(MB_offset_MTZ_Iup +6)
#define MB_offset_MTZ_Iup3				(MB_offset_MTZ_Iup2+6)
#define MB_offset_MTZ_Iup4				(MB_offset_MTZ_Iup3+6)

#define MB_offset_MTZ_I2up				(0x109C - MB_StartConfigMTZ_SG0)
#define MB_offset_MTZ_I2up2				(MB_offset_MTZ_I2up+6)

#define MB_offset_MTZ_I0up				(0x10A8 - MB_StartConfigMTZ_SG0)
#define MB_offset_MTZ_I0up2				(MB_offset_MTZ_I0up+6)

#define MB_offset_MTZ_INup				(0x10B4 - MB_StartConfigMTZ_SG0)
#define MB_offset_MTZ_INup2				(MB_offset_MTZ_INup+6)

//�����������z ������� ��� ������  I> I*>
#define MB_offset_MTZ_I_Config			0			// ������������
// ����
#define MB_bOffset_MTZ_I_Config_Stat		(0b11<<0)	// ���������

#define MB_bOffset_MTZ_I_Config_Napravl_up	(1<<10)		// ����������� ������
#define MB_bOffset_MTZ_I_Config_Napravl_dn	(1<<11)		// ����������� ��������

// �������������� ������  -----------------------------------------
#define MB_StartConfigI2I1I0_SG0  		0x1100
#define MB_StartConfigI2I1I0_SG1  		0x1120
#define MB_NumbConfigI2I1I0				(MB_StartConfigI2I1I0_SG1 - MB_StartConfigI2I1I0_SG0)

#define MB_offset_MTZ_IGup				(0x1100 - MB_StartConfigI2I1I0_SG0)
#define MB_offset_ConfI2I1				(0x1108 - MB_StartConfigI2I1I0_SG0)

#define MB_offset_ConfIGup_Config		0								// ������������

// ����	
#define MB_bOffset_IGup_Config_Stat		(0b11<<0)
#define MB_bOffset_I2I1_Config_Stat		(0b11<<0)


// ������ �� ������� ----------------------------------------------
#define MB_Addr_ConfigF  			0x1140
#define MB_StartConfigF_SG1  			0x1160
#define MB_Size_ConfigF					(MB_StartConfigF_SG1 - MB_Addr_ConfigF)

// -------------------------------
#define MB_offset_Fup					(0x1140 - MB_Addr_ConfigF)
#define MB_offset_Fup2					MB_offset_Fup+8
// -------------------------------
#define MB_offset_Fdn					(0x1150 - MB_Addr_ConfigF)
#define MB_offset_Fdn2					MB_offset_Fdn+8

// ������������
#define MB_offset_Fup_Config			0
#define MB_offset_Fdn_Config			0
// ����
#define MB_bOffset_Fup_Config_Stat		0b11
#define MB_bOffset_Fdn_Config_Stat		0b11

// ������ �� ���������� -------------------------------------------
#define MB_Addr_ConfigU  			0x1180
#define MB_StartConfigU_SG1  			0x11C0
#define MB_Size_ConfigU					(MB_StartConfigU_SG1 - MB_Addr_ConfigU)

// -------------------------------
#define MB_offset_Uup					(0x1180 - MB_Addr_ConfigU)
#define MB_offset_Uup2					(MB_offset_Uup+8)
// -------------------------------
#define MB_offset_Udn					(0x1190 - MB_Addr_ConfigU)
#define MB_offset_Udn2					(MB_offset_Udn+8)
// -------------------------------
#define MB_offset_U2up					(0x11A0 - MB_Addr_ConfigU)
#define MB_offset_U2up2					(MB_offset_U2up+8)
// -------------------------------
#define MB_offset_U0up					(0x11B0 - MB_Addr_ConfigU)
#define MB_offset_U0up2					(MB_offset_U0up+8)


// ������������
#define MB_offset_Uup_U_Config			0
#define MB_offset_Udn_U_Config			0
// ����
#define MB_bOffset_Uup_U_Config_Stat	0b11
#define MB_bOffset_Udn_U_Config_Stat	0b11


// ��������� ������� (��� �� IP �����) ----------------------------
#define MB_Addr_SystemCfg				0x1270
#define MB_Size_SystemCfg				5
#define MB_offset_IP					2

// �������� ������� -----------------------------------------------
#define MB_Addr_ConfigOut	   			0x1200

#define MB_Size_ConfigOut				(0x1270-MB_Addr_ConfigOut)

// -----------------------------------
#define MB_Addr_Discreet	   			0x1800			// ����� � ������ ��� ������� ������ (3,4)
#define MB_Size_Discreet   				0x1B			// ������������ � ������ � ����� � ������

#define MB_offset_adr0					0x00
#define MB_offset_SG					0x00
#define MB_offset_SysNote				0x00
#define MB_offset_ErrorNote				0x00

#define MB_bOffsetSettingGr				(1<<3)
#define MB_bOffsetError					(1<<5)
#define MB_bOffsetSysNote				(1<<6)
#define MB_bOffsetErrorNote				(1<<7)

// ---------------------------------
// ---------------------------------
#define MB_offsetHardFaults				0x05

#define MB_offset_errorM1				0x05
#define MB_offsetError_M1				0x05		// �������������

#define MB_offsetError_M2				0x05		// �������������
#define MB_offset_errorM2				0x05

#define MB_offsetError_M3				0x05		// �������������
#define MB_offset_errorM3				0x05

#define MB_offset_errorUstavki			0x05		// ������������� MB_offsetError_Ustavki
#define MB_offsetError_Ustavki			0x05

#define MB_offsetError_Jurnals			0x05		// �������������

#define MB_bOffsetErrRAM				(1<<0)		// ������� ������������� ���
#define MB_bOffsetErrI2C				(1<<1)		// ������� ������������� I2C
#define MB_bOffsetErrTerm				(1<<2)		// ������� ������������� �����������

// ������ 1
#define MB_bOffset_errorM1				(0b11<<3)
#define MB_bOffsetErrModule1			(0b11<<3)	// ������� ������������� ������ MCA
#define MB_bOffsetErrModule1a			(1<<3)		// ������� ������������� ������ ��AU
#define MB_bOffsetErrModule1b			(1<<4)		// ������� ������������� ������ ��AI

// ������ 2
#define MB_bOffsetErrModule2			(1<<5)		// ������� ������������� ������ ���
#define MB_bOffset_errorM2				(1<<5)
#define MB_bOffset_errorM2a				(1<<5)

// ������ 3
#define MB_bOffsetErrModule3			(0b11<<6)	// ������� ������������� ������ MC�
#define MB_bOffset_errorM3				(0b11<<6)
#define MB_bOffsetErrModule3a			(1<<6)		// ������� ������������� ������ ���1
#define MB_bOffsetErrModule3b			(1<<7)		// ������� ������������� ������ ���2

#define MB_bOffsetErrUstavki			(1<<8)		// ������� ������������� �������
#define MB_bOffset_errorUstavki				(1<<8)

#define MB_bOffset_errorALLModul				(0b111111<<3)	// ��� ��������������


#define MB_bOffsetErrSysNote			(1<<11)		// �������������������� �� ������� �������

// ---------------------------------
#define MB_offset_ErrorSDTU				0x00
#define MB_bOffsetErrorSDTU				(1<<5)		// ������� ������������� ����
// ---------------------------------
#define MB_offset_NewJurnalMs			0x00
#define MB_bOffsetNewJurnalMs			(1<<6)		// ����� ������ ��
// ---------------------------------
#define MB_offset_NewMsJurnalError		0x00
#define MB_bOffsetNewMsJurnalError		(1<<7)		// ����� ������ ��
// ---------------------------------
#define MB_offset_AllLEDs				0x02

#define MB_bOffsetLedsStats				(0b11111111<<8)// ��������� �������� ������ �� �����������

// ������������� ����������� -------
#define MB_offset_errorHard1			0x06		// ������������� �����������

#define MB_offsetErrorSW				0x06		// ������������� �����������

#define MB_bOffset_errorSWAll			(0b11001111)


#define MB_bOffsetErrorSWExt1			(1<<0)
#define MB_bOffsetErrorBKExt1			(1<<1)
#define MB_bOffsetErrorSWctrl1			(1<<2)
#define MB_bOffsetErrorUROV1			(1<<3)

#define MB_bOffsetErrorCtrl1			(1<<6)
#define MB_bOffset_errorCtrl2			(1<<7)
// ��������� ����������� -----------
#define MB_offset_SW_ctl				0x0B
#define MB_offset_SW_status				0x00
#define MB_b_SW_ON						(1<<0)
#define MB_b_SW_OFF						(1<<1)

// ��� -----------------------------
#define MB_offset_SW_ON_APW				0x08
#define MB_b_SW_ON_APW					(1<<14)
// ��� -----------------------------
#define MB_offset_AWR					0x08
#define MB_b_ON_AWR						(1<<8)
#define MB_b_OFF_AWR					(1<<9)
#define MB_b_Blok_AWR					(1<<10)
// ��� -----------------------------
#define MB_offset_LZSH					0x08
#define MB_b_Rab_LZSH					(1<<12)
// ���� ----------------------------
#define MB_offset_UROV					0x08
#define MB_b_Rab_UROV					(1<<13)
// ��������� ���������� ------------
#define MB_offset_ErrorOFF				0x08

#define MB_bOffsetErrorOFF				(1<<6)

// --Discreet --
#define MB_MaxNumbDiscreet				18

#define MB_offsetDiscreet_1				0x09
#define MB_offsetDiscreet_2				0x09
#define MB_offsetDiscreet_3				0x09
#define MB_offsetDiscreet_4				0x09
#define MB_offsetDiscreet_5				0x09
#define MB_offsetDiscreet_6				0x09
#define MB_offsetDiscreet_7				0x09
#define MB_offsetDiscreet_8				0x09
#define MB_offsetDiscreet_9				0x09
#define MB_offsetDiscreet_10			0x09
#define MB_offsetDiscreet_11			0x09
#define MB_offsetDiscreet_12			0x09
#define MB_offsetDiscreet_13			0x09
#define MB_offsetDiscreet_14			0x09
#define MB_offsetDiscreet_15			0x09
#define MB_offsetDiscreet_16			0x09

#define MB_offsetDiscreet_17			0x08
#define MB_offsetDiscreet_18			0x08

#define MB_bOffset_Discreet_1			(1<<0)
#define MB_bOffset_Discreet_2			(1<<1)
#define MB_bOffset_Discreet_3			(1<<2)
#define MB_bOffset_Discreet_4			(1<<3)
#define MB_bOffset_Discreet_5			(1<<4)
#define MB_bOffset_Discreet_6			(1<<5)
#define MB_bOffset_Discreet_7			(1<<6)
#define MB_bOffset_Discreet_8			(1<<7)
#define MB_bOffset_Discreet_9			(1<<8)
#define MB_bOffset_Discreet_10			(1<<9)
#define MB_bOffset_Discreet_11			(1<<10)
#define MB_bOffset_Discreet_12			(1<<11)
#define MB_bOffset_Discreet_13			(1<<12)
#define MB_bOffset_Discreet_14			(1<<13)
#define MB_bOffset_Discreet_15			(1<<14)
#define MB_bOffset_Discreet_16			(1<<15)

#define MB_bOffset_Discreet_17			(1<<4)
#define MB_bOffset_Discreet_18			(1<<0xB)

// -Relay --
#define  MB_MaxNumbRelay				13

#define MB_offsetRelay_1				0x03
#define MB_offsetRelay_2				0x03
#define MB_offsetRelay_3				0x03
#define MB_offsetRelay_4				0x03
#define MB_offsetRelay_5				0x03
#define MB_offsetRelay_6				0x03
#define MB_offsetRelay_7				0x03
#define MB_offsetRelay_8				0x03

#define MB_offsetRelay_9				0x03
#define MB_offsetRelay_10				0x03
#define MB_offsetRelay_11				0x03
#define MB_offsetRelay_12				0x03
#define MB_offsetRelay_13				0x03

#define MB_bOffset_Relay_1				(1<<0)
#define MB_bOffset_Relay_2				(1<<1)
#define MB_bOffset_Relay_3				(1<<2)
#define MB_bOffset_Relay_4				(1<<3)
#define MB_bOffset_Relay_5				(1<<4)
#define MB_bOffset_Relay_6				(1<<5)
#define MB_bOffset_Relay_7				(1<<6)
#define MB_bOffset_Relay_8				(1<<7)

#define MB_bOffset_Relay_9				(1<<8)
#define MB_bOffset_Relay_10				(1<<9)
#define MB_bOffset_Relay_11 			(1<<10)
#define MB_bOffset_Relay_12				(1<<11)
#define MB_bOffset_Relay_13				(1<<12)

// ---------------------------------
#define MB_offsetLED_1					0x02
#define MB_offsetLED_2					0x02
#define MB_offsetLED_3					0x02
#define MB_offsetLED_4					0x02
#define MB_offsetLED_5					0x02
#define MB_offsetLED_6					0x02
#define MB_offsetLED_7					0x02
#define MB_offsetLED_8					0x02
#define MB_offsetLED_9					0x02
#define MB_offsetLED_10					0x02
#define MB_offsetLED_11					0x02
#define MB_offsetLED_12					0x02


#define MB_bOffset_LED_1				(1<<8)
#define MB_bOffset_LED_2				(1<<9)
#define MB_bOffset_LED_3				(1<<10)
#define MB_bOffset_LED_4				(1<<11)
#define MB_bOffset_LED_5				(1<<12)
#define MB_bOffset_LED_6				(1<<13)
#define MB_bOffset_LED_7				(1<<14)
#define MB_bOffset_LED_8				(1<<15)
#define MB_bOffset_LED_9				(1<<5)
#define MB_bOffset_LED_10				(1<<4)
#define MB_bOffset_LED_11				(1<<7)
#define MB_bOffset_LED_12				(1<<6)

// SSL -------------------------------
#define MB_offsetSSL_1					0x0E
#define MB_offsetSSL_2					0x0E
#define MB_offsetSSL_3					0x0E
#define MB_offsetSSL_4					0x0E
#define MB_offsetSSL_5					0x0E
#define MB_offsetSSL_6					0x0E
#define MB_offsetSSL_7					0x0E
#define MB_offsetSSL_8					0x0E
#define MB_offsetSSL_9					0x0F
#define MB_offsetSSL_10					0x0F
#define MB_offsetSSL_11					0x0F
#define MB_offsetSSL_12					0x0F
#define MB_offsetSSL_13					0x0F
#define MB_offsetSSL_14					0x0F
#define MB_offsetSSL_15					0x0F
#define MB_offsetSSL_16					0x0F
#define MB_offsetSSL_17					0x0F
#define MB_offsetSSL_18					0x0F
#define MB_offsetSSL_19					0x0F
#define MB_offsetSSL_20					0x0F
#define MB_offsetSSL_21					0x0F
#define MB_offsetSSL_22					0x0F
#define MB_offsetSSL_23					0x0F
#define MB_offsetSSL_24					0x0F

#define MB_bOffset_SSL_1				(1<<8)
#define MB_bOffset_SSL_2				(1<<9)
#define MB_bOffset_SSL_3				(1<<10)
#define MB_bOffset_SSL_4				(1<<11)
#define MB_bOffset_SSL_5				(1<<12)
#define MB_bOffset_SSL_6				(1<<13)
#define MB_bOffset_SSL_7				(1<<14)
#define MB_bOffset_SSL_8				(1<<15)
#define MB_bOffset_SSL_9				(1<<0)
#define MB_bOffset_SSL_10				(1<<1)
#define MB_bOffset_SSL_11				(1<<2)
#define MB_bOffset_SSL_12				(1<<3)
#define MB_bOffset_SSL_13				(1<<4)
#define MB_bOffset_SSL_14				(1<<5)
#define MB_bOffset_SSL_15				(1<<6)
#define MB_bOffset_SSL_16				(1<<7)
#define MB_bOffset_SSL_17				(1<<8)
#define MB_bOffset_SSL_18				(1<<9)
#define MB_bOffset_SSL_19				(1<<10)
#define MB_bOffset_SSL_20				(1<<11)
#define MB_bOffset_SSL_21				(1<<12)
#define MB_bOffset_SSL_22				(1<<13)
#define MB_bOffset_SSL_23				(1<<14)
#define MB_bOffset_SSL_24				(1<<15)

// VLS -------------------------------
#define MB_offsetVLS_1					0x0A
#define MB_offsetVLS_2					0x0A
#define MB_offsetVLS_3					0x0A
#define MB_offsetVLS_4					0x0A
#define MB_offsetVLS_5					0x0A
#define MB_offsetVLS_6					0x0A
#define MB_offsetVLS_7					0x0A
#define MB_offsetVLS_8					0x0A

#define MB_bOffset_VLS_1				(1<<8)
#define MB_bOffset_VLS_2				(1<<9)
#define MB_bOffset_VLS_3				(1<<10)
#define MB_bOffset_VLS_4				(1<<11)
#define MB_bOffset_VLS_5				(1<<12)
#define MB_bOffset_VLS_6				(1<<13)
#define MB_bOffset_VLS_7				(1<<14)
#define MB_bOffset_VLS_8				(1<<15)

// LS -------------------------------
#define MB_MaxNumbLS					8

#define MB_offsetLS_1					0x0A
#define MB_offsetLS_2					0x0A
#define MB_offsetLS_3					0x0A
#define MB_offsetLS_4					0x0A
#define MB_offsetLS_5					0x0A
#define MB_offsetLS_6					0x0A
#define MB_offsetLS_7					0x0A
#define MB_offsetLS_8					0x0A

#define MB_bOffset_LS_1					(1<<0)
#define MB_bOffset_LS_2					(1<<1)
#define MB_bOffset_LS_3					(1<<2)
#define MB_bOffset_LS_4					(1<<3)
#define MB_bOffset_LS_5					(1<<4)
#define MB_bOffset_LS_6					(1<<5)
#define MB_bOffset_LS_7					(1<<6)
#define MB_bOffset_LS_8					(1<<7)

#define MB_offsetError					0x05
#define MB_bOffsetMCAU					(1<<3)
#define MB_bOffsetMCAI					(1<<4)
#define MB_bOffsetMRV					(1<<5)

#define MB_offsetDiscreet				0x09
#define MB_offsetLogic					0x0A
#define MB_offset_I_IO					0x0B

// ------------------------------
// I --
#define MB_offset_dirPTOC_Ia			0x11		// ����������� ��������, ������ ����������� ��������
#define MB_offset_dirPTOC_Ib			0x11
#define MB_offset_dirPTOC_Ic			0x11
#define MB_offset_dirPTOC_In			0x11
#define MB_offset_dirPTOC_I0			0x11
#define MB_offset_dirPTOC_I1			0x11
#define MB_offset_dirPTOC_I2			0x11

#define MB_offset_dirErrorPTOC_Ia		0x11		// ����������� ��������, ������ ����������� ��������
#define MB_offset_dirErrorPTOC_Ib		0x11
#define MB_offset_dirErrorPTOC_Ic		0x11
#define MB_offset_dirErrorPTOC_In		0x11
#define MB_offset_dirErrorPTOC_I0		0x11
#define MB_offset_dirErrorPTOC_I1		0x11
#define MB_offset_dirErrorPTOC_I2		0x11

// ���� ����������� � ������������� ��������
// �����������
#define MB_b_direction_In				(1<<0)
#define MB_b_direction_Ia				(1<<2)
#define MB_b_direction_Ib				(1<<4)
#define MB_b_direction_Ic				(1<<6)
#define MB_b_direction_I0				(1<<8)
#define MB_b_direction_I1				(1<<10)
#define MB_b_direction_I2				(1<<12)
// ������ �����������
#define MB_b_dirError_In				(1<<1)
#define MB_b_dirError_Ia				(1<<3)
#define MB_b_dirError_Ib				(1<<5)
#define MB_b_dirError_Ic				(1<<7)
#define MB_b_dirError_I0				(1<<9)
#define MB_b_dirError_I1				(1<<11)
#define MB_b_dirError_I2				(1<<13)
// ------------------------------
#define MB_offset_IO_I2I1				0x0C
#define MB_offset_SRAB_I2I1				0x0C
#define MB_b_IO_I2I1					(1<<6)
#define MB_b_SRAB_I2I1					(1<<7)

// ------------------------------
#define MB_offset_IO_I_1				0x0B
#define MB_offset_IO_I_2				0x0B
#define MB_offset_IO_I_3				0x0B
#define MB_offset_IO_I_4				0x0B
#define MB_offset_SRAB_I_1				0x0B
#define MB_offset_SRAB_I_2				0x0B
#define MB_offset_SRAB_I_3				0x0B
#define MB_offset_SRAB_I_4				0x0B

#define MB_b_IO_I1						(1<<0)		// �0 I>1
#define MB_b_IO_I2						(1<<2)		// �0 I>2
#define MB_b_IO_I3						(1<<4)		// �0 I>3
#define MB_b_IO_I4						(1<<6)		// �0 I>4
#define MB_b_SRAB_I1					(1<<1)		// ���� I>1
#define MB_b_SRAB_I2					(1<<3)		// ���� I>2
#define MB_b_SRAB_I3					(1<<5)		// ���� I>3
#define MB_b_SRAB_I4					(1<<7)		// ���� I>4

// I2 -----------------------------
#define MB_offset_IO_I2up				0x0B
#define MB_offset_IO_I2up2				0x0B
#define MB_offset_SRAB_I2up				0x0B
#define MB_offset_SRAB_I2up2			0x0B

#define MB_b_IO_I2up					(1<<8)		// �0 >
#define MB_b_IO_I2up2					(1<<10)		// �0 >>
#define MB_b_SRAB_I2up					(1<<9)		// ���� >
#define MB_b_SRAB_I2up2					(1<<11)		// ���� >>

// I0 -----------------------------
#define MB_offset_IO_I0up				0x0B
#define MB_offset_IO_I0up2				0x0B
#define MB_offset_SRAB_I0up				0x0B
#define MB_offset_SRAB_I0up2			0x0B

#define MB_b_IO_I0up					(1<<12)		// �0 >
#define MB_b_IO_I0up2					(1<<14)		// �0 >>
#define MB_b_SRAB_I0up					(1<<13)		// ���� >
#define MB_b_SRAB_I0up2					(1<<15)		// ���� >>

// In -----------------------------
#define MB_offset_IO_INup				0x0C
#define MB_offset_IO_INup2				0x0C
#define MB_offset_SRAB_INup				0x0C
#define MB_offset_SRAB_INup2			0x0C

#define MB_b_IO_INup					(1<<0)		// �0 >
#define MB_b_IO_INup2					(1<<2)		// �0 >>
#define MB_b_SRAB_INup					(1<<1)		// ���� >
#define MB_b_SRAB_INup2					(1<<3)		// ���� >>

// Ig -----------------------------
#define MB_offset_IO_IGup				0x0C
#define MB_offset_SRAB_IGup				0x0C
#define MB_b_IO_IGup					(1<<4)		// �0 >
#define MB_b_SRAB_IGup					(1<<5)		// ���� >

// U -------------------------------
#define MB_offset_IO_Uup				0x0D
#define MB_offset_IO_Uup2				0x0D
#define MB_offset_SRAB_Uup				0x0D
#define MB_offset_SRAB_Uup2				0x0D
#define MB_offset_IO_Udn				0x0D
#define MB_offset_IO_Udn2				0x0D
#define MB_offset_SRAB_Udn				0x0D
#define MB_offset_SRAB_Udn2				0x0D

#define MB_b_IO_Uup						(1<<0)		// �0 U>
#define MB_b_IO_Uup2					(1<<2)		// �0 U>>
#define MB_b_SRAB_Uup					(1<<1)		// ���� U>
#define MB_b_SRAB_Uup2					(1<<3)		// ���� U>>
#define MB_b_IO_Udn						(1<<4)		// �0 U<
#define MB_b_IO_Udn2					(1<<6)		// �0 U<<
#define MB_b_SRAB_Udn					(1<<5)		// ���� U<
#define MB_b_SRAB_Udn2					(1<<7)		// ���� U<<

// U2 -------------------------------
#define MB_offset_IO_U2up				0x0D
#define MB_offset_IO_U2up2				0x0D
#define MB_offset_SRAB_U2up				0x0D
#define MB_offset_SRAB_U2up2			0x0D

#define MB_b_IO_U2up					(1<<8)		// �0 U>
#define MB_b_IO_U2up2					(1<<10)		// �0 U>>
#define MB_b_SRAB_U2up					(1<<9)		// ���� U>
#define MB_b_SRAB_U2up2					(1<<11)		// ���� U>>

// U0 -------------------------------
#define MB_offset_IO_U0up				0x0D
#define MB_offset_IO_U0up2				0x0D
#define MB_offset_SRAB_U0up				0x0D
#define MB_offset_SRAB_U0up2			0x0D

#define MB_b_IO_U0up					(1<<12)		// �0 U>
#define MB_b_IO_U0up2					(1<<14)		// �0 U>>
#define MB_b_SRAB_U0up					(1<<13)		// ���� U>
#define MB_b_SRAB_U0up2					(1<<15)		// ���� U>>

// F -------------------------------
#define MB_offset_IO_Fup				0x0C
#define MB_offset_IO_Fup2				0x0C
#define MB_offset_SRAB_Fup				0x0C
#define MB_offset_SRAB_Fup2				0x0C

#define MB_offset_IO_Fdn				0x0C
#define MB_offset_IO_Fdn2				0x0C
#define MB_offset_SRAB_Fdn				0x0C
#define MB_offset_SRAB_Fdn2				0x0C

#define MB_b_IO_Fup						(1<<8)		// �0 F>
#define MB_b_IO_Fup2					(1<<10)		// �0 F>>
#define MB_b_SRAB_Fup					(1<<9)		// ���� F>
#define MB_b_SRAB_Fup2					(1<<11)		// ���� F>>

#define MB_b_IO_Fdn						(1<<12)		// �0 F<
#define MB_b_IO_Fdn2					(1<<14)		// �0 F<<
#define MB_b_SRAB_Fdn					(1<<13)		// ���� F<
#define MB_b_SRAB_Fdn2					(1<<15)		// ���� F<<
// ------------------------------

// �������
#define MB_offset_SRAB_ext_1			0x0E
#define MB_offset_SRAB_ext_2			0x0E
#define MB_offset_SRAB_ext_3			0x0E
#define MB_offset_SRAB_ext_4			0x0E
#define MB_offset_SRAB_ext_5			0x0E
#define MB_offset_SRAB_ext_6			0x0E
#define MB_offset_SRAB_ext_7			0x0E
#define MB_offset_SRAB_ext_8			0x0E

#define MB_b_SRAB_ext_1					(1<<0)
#define MB_b_SRAB_ext_2					(1<<1)
#define MB_b_SRAB_ext_3					(1<<2)
#define MB_b_SRAB_ext_4					(1<<3)
#define MB_b_SRAB_ext_5					(1<<4)
#define MB_b_SRAB_ext_6					(1<<5)
#define MB_b_SRAB_ext_7					(1<<6)
#define MB_b_SRAB_ext_8					(1<<7)
// ------------------------------

#define MB_offsetPTOC					0x11
#define MB_bTotVAZ						(1<<15)
#define MB_bTotWZ						(1<<14)

#define MB_offsetDirGeneral				0x18

#define MB_offsetDiscreet4				0x04

#define MB_bOffsetErrorHard				(1<<0)
#define MB_bOffsetErrorLogic			(1<<1)
#define MB_bOffsetErrorData				(1<<2)
#define MB_bOffsetErrorSW				(1<<4)
#define MB_bOffsetErrorMeasI			(1<<5)
#define MB_bOffsetErrorMeasU			(1<<6)
#define MB_bOffsetErrorMeasF			(1<<7)

// ---------------------------------
#define MB_offset_LogicError			0x05			// ������ �� ������
#define MB_bOffsetALLLogicError			(1<<15)		
// ---------------------------------
#define MB_offset_LogicMod				0x00			// ������
#define MB_bOffsetLogicMod_ON			(1<<9)			// ������ ���������/���������

#define MB_PTOC_In					(1<<0)
#define MB_error_In					(1<<1)
#define MB_PTOC_Ia					(1<<2)
#define MB_error_Ia					(1<<3)
#define MB_PTOC_Ib					(1<<4)
#define MB_error_Ib					(1<<5)
#define MB_PTOC_Ic					(1<<6)
#define MB_error_Ic					(1<<7)
#define MB_PTOC_I0					(1<<8)
#define MB_error_I0					(1<<9)
#define MB_PTOC_I1					(1<<10)
#define MB_error_I1					(1<<11)
#define MB_PTOC_I2					(1<<12)
#define MB_error_I2					(1<<13)

#define MB_errorMSAU				(1<<3)
#define MB_errorMSAI				(1<<4)
#define MB_errorMRV1				(1<<5)
#define MB_errorMSD1				(1<<6)
#define MB_errorMSD2				(1<<7)


// ------------------------------------------
#define MB_Addr_Analog   		0x1900


#define MB_Size_Analog   			23		

#define MB_offset_In				0
#define MB_offset_Ia				1
#define MB_offset_Ib				2
#define MB_offset_Ic				3

#define MB_offset_NI0				4
#define MB_offset_NI1				5
#define MB_offset_NI2				6

#define MB_offset_Un				8
#define MB_offset_Ua				9
#define MB_offset_Ub				10
#define MB_offset_Uc				11	

#define MB_offset_Uab				12
#define MB_offset_Ubc				13
#define MB_offset_Uca				14

#define MB_offset_NU0				15
#define MB_offset_NU1				16
#define MB_offset_NU2				17

#define MB_offset_Hz				18
#define MB_offset_TotPF				19
#define MB_offset_TotW				20
#define MB_offset_TotVAr			21
#define MB_offset_OMP				22

// ------------------------------------------
#define MB_Addr_Date   				0x0200
#define MB_Size_Date				7

// -----------------------------------
#define MB_Addr_SG				0x0400
#define MB_Size_SG		   			1

#define MB_selectGroupe0			0
#define MB_selectGroupe1			1

/********************************************************************************
 * ������
 ********************************************************************************/

#define MB_Addr_Rev		   							0x0500
#define MB_Size_Rev		   							16				// 16 ����

// ������ � ������
#define MB_offset_ModelDev			0											// ������ � ������� ����������
#define MB_Model_Size				10											// ������ ������

#define MB_offset_SerNumbDev		(MB_offset_ModelDev + MB_Model_Size)		// ������ � �������� �������
#define MB_SerNumb_Size				7											// ������ ������

#define MB_offset_VersionDev		(MB_offset_SerNumbDev + MB_SerNumb_Size)	// ������ � �������� �������
#define MB_Version_Size				15											// ������ ������

// -----------------------------------

#define MB_addr_SwOFF  				0x1800		//����� ��������� off
#define MB_addr_SwON   				0x1801		//����� �������� on
#define MB_addr_BLK_OFF				0x1803

#define MB_addr_LEDS_OFF			0x1804
#define MB_addr_Error_OFF			0x1805
#define MB_addr_SysNote_OFF			0x1806
#define MB_addr_ErrorNote_OFF		0x1807

#define MB_addr_OscNote_OFF			0x0808		// ���� ��� ���

#define MB_CTRL_OFF					0xFF00
#define MB_SwOFF  					0x0000		//off
#define MB_SwON   					0xFF00		//on

// ������ ����������� ----------------
#define MB_Addr_SWCrash   			0x1A00		// ������ �����������
#define MB_Size_SWCrash  			8

#define MB_offset_Error_cnt			0		// ����� ��������� ����������
#define MB_offset_Oper_cnt			1		// ����� ����������� ������������


// ----------------------------------------------------------------------------------------------
// ���� ��� ��������.
// ----------------------------------------------------------------------------------------------
#define MB_Addr_Goose			0x0D80
#define MB_Size_Goose	   			1

// ������� ���������� ������ �����
#define MB_NumbCMDGoose	   			4
#define MB_GooseCMD_LEDS_OFF 		BIT0
#define MB_GooseCMD_Error_OFF 		BIT1
#define MB_GooseCMD_SysNote_OFF		BIT2
#define MB_GooseCMD_ErrorNote_OFF	BIT3
#define MB_GooseCMD_Sw_OFF 			BIT4
#define MB_GooseCMD_Sw_ON			BIT5
// ----------------------------------------------------------------------------------------------
// ��� ������� ����� ������.
// ----------------------------------------------------------------------------------------------

#define MB_Addr_DUMP_Ustavki		0x01000
#define MB_Size_DUMP_Ustavki	   		(0x1275 - MB_Addr_DUMP_Ustavki)

// ----------------------------------------------------------------------------------------------
// ----------------------------------------------------------------------------------------------
// ������ -----------------------------

#define MB_Addr_OtherUstavki	0
#define MB_Size_OtherUstavki			0

#define MB_Addr_ConfigAPW			0
#define MB_Size_ConfigAPW			0

#define MB_Addr_ConfigAWR			0
#define MB_Size_ConfigAWR			0

#define MB_Addr_ConfigTRPWR			0
#define MB_Size_ConfigTRPWR			0

#define MB_StartConfigTRMeas		0
#define MB_NumbConfigTRMeas			0

#define MB_Addr_ConfigVLSIn			0
#define MB_Size_ConfigVLSIn			0

#define MB_Addr_ConfigVLSOut		0
#define MB_Size_ConfigVLSOut			0

#define MB_Addr_RPN				0
#define MB_Size_RPN					0

#define MB_Addr_UstavkiModify		0		//����� ����� ��������� �������

#define MB_addr_Set_ExtMode			0
#define MB_addr_Clr_ExtMode			0

#define MB_addr_DRIVE_UP			0
#define MB_addr_DRIVE_DWN			0

#define MB_Addr_SG_set_0		0
#define MB_Addr_SG_set_1		0
#define  MB_addr_CMD_1_OnOff		0
#endif //#if defined 

#endif /* MBMAPMR...._H_ */
