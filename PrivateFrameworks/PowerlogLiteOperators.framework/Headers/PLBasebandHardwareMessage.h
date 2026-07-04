/* Runtime dump - PLBasebandHardwareMessage
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBasebandHardwareMessage : PLBasebandMessage
{
    struct _PLBasebandHWStatsHeader * _header;
    struct _PLBasebandHWStatsSystem * _system;
    struct _PLBasebandHWStatsARMPerf * _armPerf;
    struct _PLBasebandHWStatsMDSP * _mdsp;
    struct _PLBasebandHWOnOffComponentStats * _mdm;
    struct _PLBasebandHWStatsADSP * _adsp;
    struct _PLBasebandHWOnOffComponentStats * _adm;
    struct _PLBasebandHWOnOffComponentStats * _gps;
    struct _PLBasebandHWOnOffComponentStats * _usb;
    struct _PLBasebandHWStatsUART * _uart;
    struct _PLBasebandHWOnOffComponentStats * _spi;
    struct _PLBasebandHWStatsRXRSSI * _rx;
    struct _PLBasebandHWStatsTXPower * _tx;
    unsigned int _duration;
}

@property unsigned int logDuration;
@property (readonly, nonatomic) unsigned int revision;
@property (nonatomic) struct _PLBasebandHWStatsHeader * header;
@property (nonatomic) struct _PLBasebandHWStatsSystem * system;
@property (nonatomic) struct _PLBasebandHWStatsARMPerf * armPerf;
@property (nonatomic) struct _PLBasebandHWStatsMDSP * mdsp;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats * mdm;
@property (nonatomic) struct _PLBasebandHWStatsADSP * adsp;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats * adm;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats * gps;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats * usb;
@property (nonatomic) struct _PLBasebandHWStatsUART * uart;
@property (nonatomic) struct _PLBasebandHWOnOffComponentStats * spi;
@property (nonatomic) struct _PLBasebandHWStatsRXRSSI * rx;
@property (nonatomic) struct _PLBasebandHWStatsTXPower * tx;
@property (readonly, nonatomic) unsigned int level;

- (PLBasebandHardwareMessage *)initWithData:(NSData *)arg0;
- (unsigned int)level;
- (void)setHeader:(struct _PLBasebandHWStatsHeader *)arg0;
- (struct _PLBasebandHWStatsHeader *)header;
- (unsigned int)revision;
- (void)setRx:(struct _PLBasebandHWStatsRXRSSI *)arg0;
- (void)setTx:(struct _PLBasebandHWStatsTXPower *)arg0;
- (void)parseData:(NSData *)arg0;
- (void)setLogDuration:(unsigned int)arg0;
- (void)logRawWithLogger:(id)arg0;
- (void)logHeaderWithLogger:(id)arg0;
- (void)logProcessorWithLogger:(id)arg0;
- (void)logModemAppWithLogger:(id)arg0;
- (void)logPeripheralsWithLogger:(id)arg0;
- (void)logRFWithLogger2:(id)arg0;
- (struct _PLBasebandHWStatsRXRSSI *)rx;
- (struct _PLBasebandHWStatsTXPower *)tx;
- (unsigned int)logDuration;
- (NSArray *)convertUint32ArrayToNSArray:(unsigned int *)arg0 ofSize:(unsigned int)arg1;
- (void)logWithLogger:(PLBBMsg *)arg0;
- (void)setUsb:(struct _PLBasebandHWOnOffComponentStats *)arg0;
- (void)setUart:(struct _PLBasebandHWStatsUART *)arg0;
- (void)setSpi:(struct _PLBasebandHWOnOffComponentStats *)arg0;
- (void)setAdm:(struct _PLBasebandHWOnOffComponentStats *)arg0;
- (void)setGps:(struct _PLBasebandHWOnOffComponentStats *)arg0;
- (struct _PLBasebandHWOnOffComponentStats *)adm;
- (NSArray *)convertUint8ArrayToNSArray:(char *)arg0 ofSize:(unsigned int)arg1;
- (NSArray *)convertUint16ArrayToNSArray:(unsigned short *)arg0 ofSize:(unsigned int)arg1;
- (void)setMdsp:(struct _PLBasebandHWStatsMDSP *)arg0;
- (struct _PLBasebandHWStatsMDSP *)mdsp;
- (struct _PLBasebandHWOnOffComponentStats *)usb;
- (struct _PLBasebandHWOnOffComponentStats *)spi;
- (struct _PLBasebandHWStatsUART *)uart;
- (struct _PLBasebandHWOnOffComponentStats *)gps;
- (void)setSystem:(struct _PLBasebandHWStatsSystem *)arg0;
- (void)setArmPerf:(struct _PLBasebandHWStatsARMPerf *)arg0;
- (void)setMdm:(struct _PLBasebandHWOnOffComponentStats *)arg0;
- (struct _PLBasebandHWStatsSystem *)system;
- (struct _PLBasebandHWStatsARMPerf *)armPerf;
- (struct _PLBasebandHWOnOffComponentStats *)mdm;
- (void)setAdsp:(struct _PLBasebandHWStatsADSP *)arg0;
- (struct _PLBasebandHWStatsADSP *)adsp;
- (unsigned int)sumHardwareStat:(unsigned int *)arg0 ofSize:(unsigned int)arg1;
- (void)formatArray:(unsigned int *)arg0 ofSize:(unsigned int)arg1 inString:(NSAttributedString *)arg2;
- (void)formatArray:(unsigned int *)arg0 ofSize:(unsigned int)arg1 inString:(NSAttributedString *)arg2 inReverse:(char)arg3;
- (void)formatArray:(unsigned int *)arg0 ofSize:(unsigned int)arg1 withMultiplier:(float)arg2 inString:(NSAttributedString *)arg3 inReverse:(char)arg4;
- (NSArray *)convertToObjectArray:(unsigned int *)arg0 ofSize:(unsigned int)arg1;
- (void)formatOnOffStates:(struct _PLBasebandHWOnOffComponentStats *)arg0 inString:(NSAttributedString *)arg1;
- (void)formatArray:(unsigned int *)arg0 ofSize:(unsigned int)arg1 withMultiplier:(float)arg2 inString:(NSAttributedString *)arg3;
- (NSArray *)convertUint32ArrayToNSArray:(unsigned int *)arg0 ofSize:(unsigned int)arg1 andFill:(unsigned int)arg2;
- (id)convertToObjectArrayPercentage:(unsigned int *)arg0 ofSize:(unsigned int)arg1;

@end
