/* Runtime dump - PLBBMavHwRfLTELogMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMavHwRfLTELogMsg : PLBBMsgRoot
{
    unsigned char _inited;
    NSString * _error;
    NSArray * _dlC0TBSzCnt;
    NSArray * _dlC1TBSzCnt;
    NSNumber * _logDuration;
    NSNumber * _dupMode;
    NSArray * _caFreqInfo;
    NSArray * _txPwrCnt;
    NSArray * _caSCCCnt;
    NSArray * _actRxTxCnt;
    NSArray * _sleepStateCnt;
    NSString * _groupEntryKey;
    NSString * _groupID;
    NSMutableArray * _groupArrEntries;
    NSMutableDictionary * _commonInfo;
    NSMutableDictionary * _kvPairs;
}

@property (retain) NSString * error;
@property (retain) NSArray * dlC0TBSzCnt;
@property (retain) NSArray * dlC1TBSzCnt;
@property (retain) NSNumber * logDuration;
@property (retain) NSNumber * dupMode;
@property (retain) NSArray * caFreqInfo;
@property (retain) NSArray * txPwrCnt;
@property (retain) NSArray * caSCCCnt;
@property (retain) NSArray * actRxTxCnt;
@property (retain) NSArray * sleepStateCnt;
@property (retain) NSString * groupEntryKey;
@property (retain) NSString * groupID;
@property (retain) NSMutableArray * groupArrEntries;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary * commonInfo;
@property (retain, nonatomic) NSMutableDictionary * kvPairs;

+ (PLBBMavHwRfLTELogMsg *)entryEventBackwardDefinitionBBMav10HwRfLTE;

- (PLBBMavHwRfLTELogMsg *)init;
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
- (void)setDupMode:(NSNumber *)arg0;
- (void)setCaFreqInfo:(NSArray *)arg0;
- (void)setDlC0TBSzCnt:(NSArray *)arg0;
- (void)setDlC1TBSzCnt:(NSArray *)arg0;
- (void)setTxPwrCnt:(NSArray *)arg0;
- (void)setCaSCCCnt:(NSArray *)arg0;
- (void)setActRxTxCnt:(NSArray *)arg0;
- (void)setSleepStateCnt:(NSArray *)arg0;
- (id)logEventBackwardBBMav10HwRfLTE;
- (NSString *)groupEntryKey;
- (NSMutableArray *)groupArrEntries;
- (void)setGroupEntryKey:(NSString *)arg0;
- (NSString *)groupID;
- (void)setGroupID:(NSString *)arg0;
- (void)setGroupArrEntries:(NSMutableArray *)arg0;
- (NSNumber *)dupMode;
- (NSArray *)caFreqInfo;
- (NSArray *)dlC0TBSzCnt;
- (NSArray *)dlC1TBSzCnt;
- (NSArray *)txPwrCnt;
- (NSArray *)caSCCCnt;
- (NSArray *)actRxTxCnt;
- (NSArray *)sleepStateCnt;
- (void)refreshMav10BBRfAllRats;

@end
