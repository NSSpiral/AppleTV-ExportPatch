/* Runtime dump - PLBBMavHwRfWCDMALogMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMavHwRfWCDMALogMsg : PLBasebandMessage
{
    unsigned char _inited;
    NSString * _error;
    NSNumber * _logDuration;
    NSArray * _SCEqStatCnt;
    NSArray * _DCEqStatCnt;
    NSArray * _SCQsetEqStatCnt;
    NSArray * _DCQsetEqStatCnt;
    NSArray * _DurInCarrierMode;
    NSArray * _RABModeCnt;
    NSArray * _RABTypeCnt;
    NSArray * _TxPwrBucket;
    NSString * _groupEntryKey;
    NSString * _groupID;
    NSMutableArray * _groupArrEntries;
    NSMutableDictionary * _commonInfo;
    NSMutableDictionary * _kvPairs;
}

@property (retain) NSString * error;
@property (retain) NSNumber * logDuration;
@property (retain) NSArray * SCEqStatCnt;
@property (retain) NSArray * DCEqStatCnt;
@property (retain) NSArray * SCQsetEqStatCnt;
@property (retain) NSArray * DCQsetEqStatCnt;
@property (retain) NSArray * DurInCarrierMode;
@property (retain) NSArray * RABModeCnt;
@property (retain) NSArray * RABTypeCnt;
@property (retain) NSArray * TxPwrBucket;
@property (retain) NSString * groupEntryKey;
@property (retain) NSString * groupID;
@property (retain) NSMutableArray * groupArrEntries;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary * commonInfo;
@property (retain, nonatomic) NSMutableDictionary * kvPairs;

+ (PLBBMavHwRfWCDMALogMsg *)entryEventBackwardDefinitionBBMavHwRfWCDMA;

- (PLBBMavHwRfWCDMALogMsg *)init;
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
- (void)setSCEqStatCnt:(id)arg0;
- (void)setDCEqStatCnt:(id)arg0;
- (void)setSCQsetEqStatCnt:(id)arg0;
- (void)setDCQsetEqStatCnt:(id)arg0;
- (void)setDurInCarrierMode:(id)arg0;
- (void)setRABModeCnt:(id)arg0;
- (void)setRABTypeCnt:(id)arg0;
- (void)setTxPwrBucket:(id)arg0;
- (id)logEventBackwardBBMavHwRfWCDMA;
- (NSString *)groupEntryKey;
- (NSMutableArray *)groupArrEntries;
- (void)setGroupEntryKey:(NSString *)arg0;
- (NSString *)groupID;
- (void)setGroupID:(NSString *)arg0;
- (void)setGroupArrEntries:(NSMutableArray *)arg0;
- (NSArray *)SCEqStatCnt;
- (NSArray *)DCEqStatCnt;
- (NSArray *)SCQsetEqStatCnt;
- (NSArray *)DCQsetEqStatCnt;
- (NSArray *)DurInCarrierMode;
- (NSArray *)RABModeCnt;
- (NSArray *)TxPwrBucket;
- (NSArray *)RABTypeCnt;

@end
