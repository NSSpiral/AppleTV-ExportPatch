/* Runtime dump - PLBBEurekaEventMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBEurekaEventMsg : PLBasebandMessage
{
    unsigned char _inited;
    NSMutableString * _sdEvent;
    NSMutableString * _sdAct;
    NSMutableString * _sdState;
    NSMutableDictionary * _commonInfo;
    NSMutableDictionary * _kvPairs;
}

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableString * sdEvent;
@property (retain, nonatomic) NSMutableString * sdAct;
@property (retain, nonatomic) NSMutableString * sdState;
@property (retain, nonatomic) NSMutableDictionary * commonInfo;
@property (retain, nonatomic) NSMutableDictionary * kvPairs;

+ (PLBBEurekaEventMsg *)bbEuEvMsgNameCMCDMAExit;
+ (PLBBEurekaEventMsg *)bbEuEvMsgNameSDEventActionCode;
+ (NSObject *)bbEuEvMsgNameWCDMARRCState;
+ (NSObject *)bbEuEvMsgNameLTERRCState;
+ (NSObject *)bbEuEvMsgUTRANRRCState;
+ (NSObject *)bbEuEvMsgNameGSML1State;
+ (PLBBEurekaEventMsg *)bbEuEvMsgNameCMCallEventOrig;
+ (PLBBEurekaEventMsg *)bbEuEvMsgNameCMCallEventOrigV2;
+ (PLBBEurekaEventMsg *)bbEuEvMsgNameCMCallEventEnd;
+ (PLBBEurekaEventMsg *)bbEuEvMsgNameCMCallEventEndV2;
+ (PLBBEurekaEventMsg *)bbEuEvMsgNameCMCallEventConn;
+ (PLBBEurekaEventMsg *)bbEuEvMsgNameBBEurekaMsgLite;
+ (PLBBEurekaEventMsg *)bbEuEvMsgEventNotProcessed;
+ (PLBBEurekaEventMsg *)bbEuEvMsgNameCMCallEventConnV2;
+ (PLBBEurekaEventMsg *)bbEuEvMsgNameCMCallEventIncom;

- (PLBBEurekaEventMsg *)init;
- (void).cxx_destruct;
- (void)setPayload:(NSData *)arg0;
- (void)setError:(NSError *)arg0;
- (void)setHeaderWithSeqNum:(NSNumber *)arg0 andDate:(NSDate *)arg1 andTimeCal:(double)arg2;
- (void)appendToError:(NSError *)arg0;
- (NSMutableDictionary *)commonInfo;
- (void)setCommonInfo:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)kvPairs;
- (void)setKvPairs:(NSMutableDictionary *)arg0;
- (void)setEventCode:(unsigned int)arg0;
- (void)setSDEventActionCodeWith:(id)arg0 andSDAction:(NSObject *)arg1 andSDState:(NSObject *)arg2;
- (void)addPairWithKey:(NSString *)arg0 andWithVal:(id)arg1;
- (void)logEventForwardSDEventActionCode;
- (void)logEventCMCallEventConnWithId:(NSObject *)arg0 andCallType:(NSObject *)arg1 andSysMode:(id)arg2;
- (void)logEventCMCallEventEndWithId:(NSObject *)arg0 andNumCalls:(id)arg1;
- (void)logEventCMCallEventOrigWithId:(NSObject *)arg0 andCallType:(NSObject *)arg1 andSrvType:(NSObject *)arg2;
- (void)logEventCMCallEventConnWithId:(NSObject *)arg0 andCallType:(NSObject *)arg1 andSysMode:(id)arg2 andClientId:(NSObject *)arg3;
- (void)logEventCMCallEventEndWithId:(NSObject *)arg0 andNumCalls:(id)arg1 andClientId:(NSObject *)arg2;
- (void)logEventCMCallEventOrigWithId:(NSObject *)arg0 andCallType:(NSObject *)arg1 andSrvType:(NSObject *)arg2 andClientId:(NSObject *)arg3;
- (void)logEventPointCMExitCodeWithState:(NSObject *)arg0;
- (void)logEventForwardGSML1StateWith:(id)arg0;
- (void)logEventForwardWCDMARRCPrevStateAs:(id)arg0 andCurrState:(NSObject *)arg1 andRate:(id)arg2;
- (void)logEventForwardLTERRCStateAs:(id)arg0;
- (void)logEventForwardUTRANRRCNextStateAs:(id)arg0 andCurrStateAs:(id)arg1 andRateAs:(id)arg2;
- (void)logEventNoneEventNotProcessed;
- (void)logEventForwardBBEurekaEventMsgLite;
- (unsigned char)inited;
- (void)setInited:(unsigned char)arg0;
- (void)sendAndLogPLEntry:(id)arg0;
- (void)refreshBBEurekaEventMsgLite;
- (void)refreshSDEventActionCode;
- (void)refreshWCDMARRCState;
- (void)refreshLTERRCState;
- (void)refreshUTRANRRCState;
- (void)refreshEventNotProcessed;
- (NSMutableString *)sdEvent;
- (void)setSdEvent:(NSMutableString *)arg0;
- (NSMutableString *)sdAct;
- (void)setSdAct:(NSMutableString *)arg0;
- (NSMutableString *)sdState;
- (void)setSdState:(NSMutableString *)arg0;

@end
