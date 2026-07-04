/* Runtime dump - PLBBMavHwRfTDSLogMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMavHwRfTDSLogMsg : PLBasebandMessage
{
    unsigned char _inited;
    NSString * _error;
    NSNumber * _logDuration;
    NSArray * _srvcTypeCnt;
    NSArray * _rxdStateCnt;
    NSMutableDictionary * _commonInfo;
    NSMutableDictionary * _kvPairs;
}

@property (retain) NSString * error;
@property (retain) NSNumber * logDuration;
@property (retain) NSArray * srvcTypeCnt;
@property (retain) NSArray * rxdStateCnt;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary * commonInfo;
@property (retain, nonatomic) NSMutableDictionary * kvPairs;

+ (PLBBMavHwRfTDSLogMsg *)entryEventBackwardDefinitionBBMavHwRfTDS;

- (PLBBMavHwRfTDSLogMsg *)init;
- (void).cxx_destruct;
- (NSString *)error;
- (void)setError:(NSString *)arg0;
- (void)setLogDuration:(NSNumber *)arg0;
- (void)setHeaderWithSeqNum:(NSNumber *)arg0 andDate:(NSDate *)arg1 andTimeCal:(double)arg2;
- (NSNumber *)logDuration;
- (void)sendAndLogPLEntry:(id)arg0 withName:(NSString *)arg1 withType:(NSObject *)arg2;
- (NSMutableDictionary *)commonInfo;
- (void)setCommonInfo:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)kvPairs;
- (void)setKvPairs:(NSMutableDictionary *)arg0;
- (void)addPairWithKey:(NSString *)arg0 andWithVal:(id)arg1;
- (void)populateEntry:(id)arg0;
- (unsigned char)inited;
- (void)setInited:(unsigned char)arg0;
- (void)refreshRequest;
- (void)setSrvcTypeCnt:(NSArray *)arg0;
- (void)setRxdStateCnt:(NSArray *)arg0;
- (id)logEventBackwardBBMavHwRfTDS;
- (NSArray *)srvcTypeCnt;
- (NSArray *)rxdStateCnt;

@end
