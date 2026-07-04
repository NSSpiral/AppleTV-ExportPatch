/* Runtime dump - PLBBEurekaLogMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBEurekaLogMsg : PLBasebandMessage
{
    unsigned char _inited;
    NSDate * _bbDate;
    double * _bbTimeCal;
    NSNumber * _bbSeqNum;
    NSMutableString * _sdEvent;
    NSMutableString * _sdAct;
    NSMutableString * _sdState;
    NSMutableDictionary * _commonInfo;
    NSMutableDictionary * _kvPairs;
}

@property (retain) NSDate * bbDate;
@property double * bbTimeCal;
@property (retain) NSNumber * bbSeqNum;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableString * sdEvent;
@property (retain, nonatomic) NSMutableString * sdAct;
@property (retain, nonatomic) NSMutableString * sdState;
@property (retain, nonatomic) NSMutableDictionary * commonInfo;
@property (retain, nonatomic) NSMutableDictionary * kvPairs;

+ (PLBBEurekaLogMsg *)bbEuLogMsgNameICEStats;
+ (PLBBEurekaLogMsg *)bbEuLogMsgNameLTESleepMgrStats;

- (PLBBEurekaLogMsg *)init;
- (void).cxx_destruct;
- (void)setPayload:(NSData *)arg0;
- (void)setError:(NSError *)arg0;
- (void)setHeaderWithSeqNum:(NSNumber *)arg0 andDate:(NSDate *)arg1 andTimeCal:(double)arg2;
- (void)sendAndLogPLEntry:(id)arg0 withName:(NSString *)arg1 withType:(NSObject *)arg2;
- (NSDate *)bbDate;
- (void)setBbDate:(NSDate *)arg0;
- (NSMutableDictionary *)commonInfo;
- (void)setCommonInfo:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)kvPairs;
- (void)setKvPairs:(NSMutableDictionary *)arg0;
- (void)setEventCode:(unsigned int)arg0;
- (void)addPairWithKey:(NSString *)arg0 andWithVal:(id)arg1;
- (unsigned char)inited;
- (void)setInited:(unsigned char)arg0;
- (double *)bbTimeCal;
- (void)setBbTimeCal:(double *)arg0;
- (void)logEventBackwardICEStats;
- (void)logEventBackwardLTESleepMgrStatsWithVer:(id)arg0 andML1State:(NSObject *)arg1 andSES:(id)arg2 andSDS:(id)arg3 andStDur:(id)arg4 andDSlpDur:(id)arg5 andLSlpDur:(id)arg6;
- (NSMutableString *)sdEvent;
- (void)setSdEvent:(NSMutableString *)arg0;
- (NSMutableString *)sdAct;
- (void)setSdAct:(NSMutableString *)arg0;
- (NSMutableString *)sdState;
- (void)setSdState:(NSMutableString *)arg0;
- (NSNumber *)bbSeqNum;
- (void)setBbSeqNum:(NSNumber *)arg0;
- (void)refreshLTESleepMgrStats;
- (void)refreshICEStats;

@end
