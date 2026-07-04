/* Runtime dump - PLBBMavHwRfOOSLogMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMavHwRfOOSLogMsg : PLBasebandMessage
{
    unsigned char _oosInProgress;
    unsigned char _inited;
    NSString * _error;
    NSNumber * _logDuration;
    NSNumber * _oosTimes;
    NSNumber * _oosTicks;
    NSNumber * _pssiTicks;
    NSArray * _oosLtePssiTimes;
    NSArray * _oosLtePssiStatTicks;
    NSArray * _oosGsmPssiTimes;
    NSArray * _oosGsmPssiStatTicks;
    NSArray * _oosWcdmaPssiTimes;
    NSArray * _oosWcdmaPssiStatTicks;
    NSArray * _oosTdsPssiTimes;
    NSArray * _oosTdsPssiStatTicks;
    NSMutableDictionary * _commonInfo;
    NSMutableDictionary * _kvPairs;
}

@property (retain) NSString * error;
@property (retain) NSNumber * logDuration;
@property unsigned char oosInProgress;
@property (retain) NSNumber * oosTimes;
@property (retain) NSNumber * oosTicks;
@property (retain) NSNumber * pssiTicks;
@property (retain) NSArray * oosLtePssiTimes;
@property (retain) NSArray * oosLtePssiStatTicks;
@property (retain) NSArray * oosGsmPssiTimes;
@property (retain) NSArray * oosGsmPssiStatTicks;
@property (retain) NSArray * oosWcdmaPssiTimes;
@property (retain) NSArray * oosWcdmaPssiStatTicks;
@property (retain) NSArray * oosTdsPssiTimes;
@property (retain) NSArray * oosTdsPssiStatTicks;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary * commonInfo;
@property (retain, nonatomic) NSMutableDictionary * kvPairs;

+ (PLBBMavHwRfOOSLogMsg *)entryEventBackwardDefinitionOOSPerRat;

- (PLBBMavHwRfOOSLogMsg *)init;
- (void).cxx_destruct;
- (NSString *)error;
- (void)setError:(NSString *)arg0;
- (void)setLogDuration:(NSNumber *)arg0;
- (void)setHeaderWithSeqNum:(NSNumber *)arg0 andDate:(NSDate *)arg1 andTimeCal:(double)arg2;
- (NSNumber *)logDuration;
- (NSMutableDictionary *)commonInfo;
- (void)setCommonInfo:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)kvPairs;
- (void)setKvPairs:(NSMutableDictionary *)arg0;
- (void)populateEntry:(id)arg0;
- (unsigned char)oosInProgress;
- (NSNumber *)oosTimes;
- (NSNumber *)oosTicks;
- (NSNumber *)pssiTicks;
- (NSArray *)oosLtePssiTimes;
- (NSArray *)oosLtePssiStatTicks;
- (NSArray *)oosGsmPssiTimes;
- (NSArray *)oosGsmPssiStatTicks;
- (NSArray *)oosWcdmaPssiTimes;
- (NSArray *)oosWcdmaPssiStatTicks;
- (NSArray *)oosTdsPssiTimes;
- (NSArray *)oosTdsPssiStatTicks;
- (void)refreshBBMavHwRfOOS;
- (id)logEventBackwardBBMavHwRfOos;
- (void)setOosInProgress:(unsigned char)arg0;
- (void)setOosTimes:(NSNumber *)arg0;
- (void)setOosTicks:(NSNumber *)arg0;
- (void)setPssiTicks:(NSNumber *)arg0;
- (void)setOosLtePssiTimes:(NSArray *)arg0;
- (void)setOosLtePssiStatTicks:(NSArray *)arg0;
- (void)setOosGsmPssiTimes:(NSArray *)arg0;
- (void)setOosGsmPssiStatTicks:(NSArray *)arg0;
- (void)setOosWcdmaPssiTimes:(NSArray *)arg0;
- (void)setOosWcdmaPssiStatTicks:(NSArray *)arg0;
- (void)setOosTdsPssiTimes:(NSArray *)arg0;
- (void)setOosTdsPssiStatTicks:(NSArray *)arg0;
- (unsigned char)inited;
- (void)setInited:(unsigned char)arg0;

@end
