/* Runtime dump - PLMav4BasebandHardwareMessage
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLMav4BasebandHardwareMessage : PLBasebandHardwareMessage
{
    struct _PLMav4BasebandHWStatsHeader * _mav4_header;
    struct _PLMav4BasebandHWStatsSystem * _mav4_system;
    struct _PLMav4BasebandHWStatsARMPerf * _mav4_armPerf;
    struct _PLMav4BasebandHWStatsMDSP * _mav4_mdsp;
    struct _PLMav4BasebandHWOnOffComponentStats * _mav4_mdm;
    struct _PLMav4BasebandHWStatsQDSP * _mav4_qdsp;
    struct _PLMav4BasebandHWOnOffComponentStats * _mav4_adm;
    struct _PLMav4BasebandHWOnOffComponentStats * _mav4_gps;
    struct _PLMav4BasebandHWOnOffComponentStats * _mav4_usb;
    struct _PLMav4BasebandHWOnOffComponentStats * _mav4_uart;
    struct _PLMav4BasebandHWOnOffComponentStats * _mav4_spi;
    struct _PLMav4BasebandHWStatsRX * _mav4_rx;
    struct _PLMav4BasebandHWStatsTX * _mav4_tx;
    struct _PLMav4BasebandHWSleepVeto * _mav4_sleep_qdsp;
    struct _PLMav4BasebandHWSleepVeto * _mav4_sleep_arm;
    unsigned int _mav4_duration;
}

@property unsigned int logDuration;
@property (readonly, nonatomic) unsigned char level;
@property (readonly, nonatomic) unsigned short hw_rev;
@property (readonly, nonatomic) unsigned short sw_rev;
@property (nonatomic) struct _PLMav4BasebandHWStatsHeader * header;
@property (nonatomic) struct _PLMav4BasebandHWStatsSystem * system;
@property (nonatomic) struct _PLMav4BasebandHWStatsARMPerf * armPerf;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats * adm;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats * gps;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats * uart;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats * spi;
@property (nonatomic) struct _PLMav4BasebandHWSleepVeto * sleep_qdsp;
@property (nonatomic) struct _PLMav4BasebandHWSleepVeto * sleep_arm;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats * usb;
@property (nonatomic) struct _PLMav4BasebandHWStatsMDSP * mdsp;
@property (nonatomic) struct _PLMav4BasebandHWOnOffComponentStats * mdm;
@property (nonatomic) struct _PLMav4BasebandHWStatsQDSP * qdsp;
@property (nonatomic) struct _PLMav4BasebandHWStatsRX * rx;
@property (nonatomic) struct _PLMav4BasebandHWStatsTX * tx;

- (PLMav4BasebandHardwareMessage *)initWithData:(NSData *)arg0;
- (unsigned char)level;
- (void)setHeader:(struct _PLMav4BasebandHWStatsHeader *)arg0;
- (struct _PLMav4BasebandHWStatsHeader *)header;
- (void)setRx:(struct _PLMav4BasebandHWStatsRX *)arg0;
- (void)setTx:(struct _PLMav4BasebandHWStatsTX *)arg0;
- (void)parseData:(NSData *)arg0;
- (void)setLogDuration:(unsigned int)arg0;
- (void)logHeaderWithLogger:(id)arg0;
- (void)logProcessorWithLogger:(id)arg0;
- (void)logModemAppWithLogger:(id)arg0;
- (void)logPeripheralsWithLogger:(id)arg0;
- (void)logRFWithLogger2:(id)arg0;
- (struct _PLMav4BasebandHWStatsRX *)rx;
- (struct _PLMav4BasebandHWStatsTX *)tx;
- (id)indexToRAT:(unsigned int)arg0;
- (unsigned int)logDuration;
- (void)logWithLogger:(PLBBMsg *)arg0;
- (void)setUsb:(struct _PLMav4BasebandHWOnOffComponentStats *)arg0;
- (void)setUart:(struct _PLMav4BasebandHWOnOffComponentStats *)arg0;
- (void)setSpi:(struct _PLMav4BasebandHWOnOffComponentStats *)arg0;
- (void)setAdm:(struct _PLMav4BasebandHWOnOffComponentStats *)arg0;
- (void)setGps:(struct _PLMav4BasebandHWOnOffComponentStats *)arg0;
- (unsigned short)sw_rev;
- (struct _PLMav4BasebandHWOnOffComponentStats *)adm;
- (void)setMdsp:(struct _PLMav4BasebandHWStatsMDSP *)arg0;
- (void)setQdsp:(struct _PLMav4BasebandHWStatsQDSP *)arg0;
- (struct _PLMav4BasebandHWStatsMDSP *)mdsp;
- (struct _PLMav4BasebandHWStatsQDSP *)qdsp;
- (struct _PLMav4BasebandHWOnOffComponentStats *)usb;
- (struct _PLMav4BasebandHWOnOffComponentStats *)spi;
- (struct _PLMav4BasebandHWOnOffComponentStats *)uart;
- (struct _PLMav4BasebandHWOnOffComponentStats *)gps;
- (void)setSystem:(struct _PLMav4BasebandHWStatsSystem *)arg0;
- (void)setArmPerf:(struct _PLMav4BasebandHWStatsARMPerf *)arg0;
- (void)setMdm:(struct _PLMav4BasebandHWOnOffComponentStats *)arg0;
- (void)setSleep_qdsp:(struct _PLMav4BasebandHWSleepVeto *)arg0;
- (void)setSleep_arm:(struct _PLMav4BasebandHWSleepVeto *)arg0;
- (void)logSleepWithLogger:(id)arg0;
- (unsigned short)hw_rev;
- (struct _PLMav4BasebandHWStatsSystem *)system;
- (struct _PLMav4BasebandHWStatsARMPerf *)armPerf;
- (struct _PLMav4BasebandHWOnOffComponentStats *)mdm;
- (struct _PLMav4BasebandHWSleepVeto *)sleep_qdsp;
- (struct _PLMav4BasebandHWSleepVeto *)sleep_arm;

@end
