/* Runtime dump - PLBBMavHwRfGSMLogMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMavHwRfGSMLogMsg : PLBasebandMessage
{
    unsigned char _inited;
    NSString * _error;
    NSNumber * _logDuration;
    NSArray * _connState;
    NSString * _groupEntryKey;
    NSString * _groupID;
    NSMutableArray * _groupArrEntries;
    NSMutableDictionary * _commonInfo;
    NSMutableDictionary * _kvPairs;
}

@property (retain) NSString * error;
@property (retain) NSNumber * logDuration;
@property (retain) NSArray * connState;
@property (retain) NSString * groupEntryKey;
@property (retain) NSString * groupID;
@property (retain) NSMutableArray * groupArrEntries;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary * commonInfo;
@property (retain, nonatomic) NSMutableDictionary * kvPairs;

+ (PLBBMavHwRfGSMLogMsg *)entryEventBackwardDefinitionBBMavHwRfGSM;

- (PLBBMavHwRfGSMLogMsg *)init;
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
- (void)setConnState:(NSArray *)arg0;
- (id)logEventBackwardBBMavHwRfGSM;
- (NSArray *)connState;
- (NSString *)groupEntryKey;
- (NSMutableArray *)groupArrEntries;
- (void)logEventBackwardGroupEntriesMav10BBHwRfWcdma;
- (void)setGroupEntryKey:(NSString *)arg0;
- (NSString *)groupID;
- (void)setGroupID:(NSString *)arg0;
- (void)setGroupArrEntries:(NSMutableArray *)arg0;

@end
