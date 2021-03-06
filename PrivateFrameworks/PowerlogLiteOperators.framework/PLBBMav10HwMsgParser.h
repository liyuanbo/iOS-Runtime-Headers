/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMav10HwMsgParser : PLMav7BasebandHardwareMessage {
    struct { unsigned int x1[5]; } *_appsNew;
    struct { unsigned int x1; unsigned long long x2; } *_apps_sleepNew;
    struct { unsigned int x1[12]; } *_mcpm_sleep_vetoNew;
    struct { unsigned int x1; unsigned long long x2; } *_mpss_sleepNew;
    struct { unsigned int x1[9]; } *_qdspNew;
    struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; struct { unsigned int x_4_1_1[6]; } x4; } *_rf1x;
    struct { unsigned int x1; unsigned int x2; unsigned int x3[3]; } *_rfGSM;
    struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct { unsigned int x_5_1_1; unsigned int x_5_1_2; } x5; } *_rfHDR;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[4]; unsigned int x6[2][16]; unsigned int x7[12]; unsigned int x8[1][4]; unsigned int x9[6]; unsigned int x10[6]; } *_rfLTE;
    struct { unsigned short x1; unsigned int x2; unsigned int x3; unsigned char x4; unsigned short x5[4][6]; unsigned int x6[4][6]; } *_rfOOS;
    struct { unsigned int x1; unsigned int x2; unsigned int x3[7]; unsigned int x4[3]; } *_rfTDS;
    struct { unsigned char x1[4]; unsigned int x2; unsigned int x3; unsigned int x4[2][3]; unsigned int x5[2][4]; unsigned int x6[2]; unsigned int x7[4]; unsigned int x8[4]; unsigned int x9[12]; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; } *_rfWCDMA;
    struct { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; } *_rpmNew;
}

@property (nonatomic) struct { unsigned int x1[5]; }*appsNew;
@property (nonatomic) struct { unsigned int x1; unsigned long long x2; }*apps_sleepNew;
@property (nonatomic) struct { unsigned int x1[12]; }*mcpm_sleep_vetoNew;
@property (nonatomic) struct { unsigned int x1; unsigned long long x2; }*mpss_sleepNew;
@property (nonatomic) struct { unsigned int x1[9]; }*qdspNew;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; struct { unsigned int x_4_1_1[6]; } x4; }*rf1x;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3[3]; }*rfGSM;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct { unsigned int x_5_1_1; unsigned int x_5_1_2; } x5; }*rfHDR;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[4]; unsigned int x6[2][16]; unsigned int x7[12]; unsigned int x8[1][4]; unsigned int x9[6]; unsigned int x10[6]; }*rfLTE;
@property (nonatomic) struct { unsigned short x1; unsigned int x2; unsigned int x3; unsigned char x4; unsigned short x5[4][6]; unsigned int x6[4][6]; }*rfOOS;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned int x3[7]; unsigned int x4[3]; }*rfTDS;
@property (nonatomic) struct { unsigned char x1[4]; unsigned int x2; unsigned int x3; unsigned int x4[2][3]; unsigned int x5[2][4]; unsigned int x6[2]; unsigned int x7[4]; unsigned int x8[4]; unsigned int x9[12]; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; }*rfWCDMA;
@property (nonatomic) struct { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; }*rpmNew;

- (int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)arg1;
- (void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask { unsigned int x1[4]; }*)arg1 oftype:(int)arg2 withData:(char *)arg3;
- (struct { unsigned int x1[5]; }*)appsNew;
- (struct { unsigned int x1; unsigned long long x2; }*)apps_sleepNew;
- (id)initWithData:(id)arg1;
- (void)logAPPSWithLogger:(id)arg1;
- (void)logHwRF1xWithLogger:(id)arg1;
- (void)logHwRFGSMWithLogger:(id)arg1;
- (void)logHwRFHDRWithLogger:(id)arg1;
- (void)logHwRFLTEWithLogger:(id)arg1;
- (void)logHwRFOOSWithLogger:(id)arg1;
- (void)logHwRFTDSWithLogger:(id)arg1;
- (void)logHwRFWCDMAWithLogger:(id)arg1;
- (void)logMPSSWithLogger:(id)arg1;
- (void)logRPMWithLogger:(id)arg1;
- (void)logSleepVetoWithLogger:(id)arg1;
- (void)logWithLogger:(id)arg1;
- (struct { unsigned int x1[12]; }*)mcpm_sleep_vetoNew;
- (struct { unsigned int x1; unsigned long long x2; }*)mpss_sleepNew;
- (void)parseData:(id)arg1;
- (struct { unsigned int x1[9]; }*)qdspNew;
- (struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; struct { unsigned int x_4_1_1[6]; } x4; }*)rf1x;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3[3]; }*)rfGSM;
- (struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct { unsigned int x_5_1_1; unsigned int x_5_1_2; } x5; }*)rfHDR;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[4]; unsigned int x6[2][16]; unsigned int x7[12]; unsigned int x8[1][4]; unsigned int x9[6]; unsigned int x10[6]; }*)rfLTE;
- (struct { unsigned short x1; unsigned int x2; unsigned int x3; unsigned char x4; unsigned short x5[4][6]; unsigned int x6[4][6]; }*)rfOOS;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3[7]; unsigned int x4[3]; }*)rfTDS;
- (struct { unsigned char x1[4]; unsigned int x2; unsigned int x3; unsigned int x4[2][3]; unsigned int x5[2][4]; unsigned int x6[2]; unsigned int x7[4]; unsigned int x8[4]; unsigned int x9[12]; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; }*)rfWCDMA;
- (struct { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; }*)rpmNew;
- (void)setAppsNew:(struct { unsigned int x1[5]; }*)arg1;
- (void)setApps_sleepNew:(struct { unsigned int x1; unsigned long long x2; }*)arg1;
- (void)setMcpm_sleep_vetoNew:(struct { unsigned int x1[12]; }*)arg1;
- (void)setMpss_sleepNew:(struct { unsigned int x1; unsigned long long x2; }*)arg1;
- (void)setQdspNew:(struct { unsigned int x1[9]; }*)arg1;
- (void)setRf1x:(struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; struct { unsigned int x_4_1_1[6]; } x4; }*)arg1;
- (void)setRfGSM:(struct { unsigned int x1; unsigned int x2; unsigned int x3[3]; }*)arg1;
- (void)setRfHDR:(struct { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; } x3; struct { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct { unsigned int x_5_1_1; unsigned int x_5_1_2; } x5; }*)arg1;
- (void)setRfLTE:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5[4]; unsigned int x6[2][16]; unsigned int x7[12]; unsigned int x8[1][4]; unsigned int x9[6]; unsigned int x10[6]; }*)arg1;
- (void)setRfOOS:(struct { unsigned short x1; unsigned int x2; unsigned int x3; unsigned char x4; unsigned short x5[4][6]; unsigned int x6[4][6]; }*)arg1;
- (void)setRfTDS:(struct { unsigned int x1; unsigned int x2; unsigned int x3[7]; unsigned int x4[3]; }*)arg1;
- (void)setRfWCDMA:(struct { unsigned char x1[4]; unsigned int x2; unsigned int x3; unsigned int x4[2][3]; unsigned int x5[2][4]; unsigned int x6[2]; unsigned int x7[4]; unsigned int x8[4]; unsigned int x9[12]; unsigned int x10; unsigned int x11; unsigned int x12; unsigned long long x13; }*)arg1;
- (void)setRpmNew:(struct { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; }*)arg1;

@end
