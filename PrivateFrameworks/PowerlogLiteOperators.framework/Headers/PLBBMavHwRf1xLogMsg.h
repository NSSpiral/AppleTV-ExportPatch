/* Runtime dump - PLBBMavHwRf1xLogMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMavHwRf1xLogMsg : PLBasebandMessage
{
    unsigned char _inited;
    NSDate * _bbDate;
    double * _bbTimeCal;
    NSNumber * _bbSeqnum;
    NSString * _error;
    NSNumber * _logDuration;
    NSNumber * _dtxOn;
    NSNumber * _dtxOff;
    NSArray * _callTypeDur;
    NSMutableDictionary * _commonInfo;
    NSMutableDictionary * _kvPairs;
}

@property (retain) NSDate * bbDate;
@property double * bbTimeCal;
@property (retain) NSNumber * bbSeqnum;
@property (retain) NSString * error;
@property (retain) NSNumber * logDuration;
@property (retain) NSNumber * dtxOn;
@property (retain) NSNumber * dtxOff;
@property (retain) NSArray * callTypeDur;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary * commonInfo;
@property (retain, nonatomic) NSMutableDictionary * kvPairs;

+ (PLBBMavHwRf1xLogMsg *)entryEventBackwardDefinitionBBMavHwRf1x;

- (PLBBMavHwRf1xLogMsg *)init;
- (void).cxx_destruct;
- (NSString *)error;
- (void)setError:(NSString *)arg0;
- (void)setLogDuration:(NSNumber *)arg0;
- (void)setHeaderWithSeqNum:(NSNumber *)arg0 andDate:(NSDate *)arg1 andTimeCal:(double)arg2;
- (NSNumber *)logDuration;
- (void)sendAndLogPLEntry:(id)arg0 withName:(NSString *)arg1 withType:(NSObject *)arg2;
- (NSDate *)bbDate;
- (void)setBbDate:(NSDate *)arg0;
- (NSMutableDictionary *)commonInfo;
- (void)setCommonInfo:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)kvPairs;
- (void)setKvPairs:(NSMutableDictionary *)arg0;
- (void)addPairWithKey:(NSString *)arg0 andWithVal:(id)arg1;
- (void)populateEntry:(id)arg0;
- (unsigned char)inited;
- (void)setInited:(unsigned char)arg0;
- (NSNumber *)dtxOff;
- (NSNumber *)dtxOn;
- (NSArray *)callTypeDur;
- (void)refreshRequest;
- (id)logEventBackwardBBMavHwRf1x;
- (double *)bbTimeCal;
- (void)setBbTimeCal:(double *)arg0;
- (NSNumber *)bbSeqnum;
- (void)setBbSeqnum:(NSNumber *)arg0;
- (void)setDtxOn:(NSNumber *)arg0;
- (void)setDtxOff:(NSNumber *)arg0;
- (void)setCallTypeDur:(NSArray *)arg0;

@end
