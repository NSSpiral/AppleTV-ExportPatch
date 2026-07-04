/* Runtime dump - PLBBMsgAll
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMsgAll : PLBBMsgRoot
{
    NSNumber * _seqNum;
    NSDate * _bbDate;
    NSString * _payload;
    NSString * _error;
    NSMutableDictionary * _info;
    NSNumber * _iseqNum;
    NSDate * _ibbDate;
    NSString * _ieventCode;
    NSString * _ipayload;
    NSString * _ierror;
}

@property (retain) NSNumber * seqNum;
@property (retain) NSDate * bbDate;
@property (retain) NSString * payload;
@property (retain) NSString * error;
@property (retain) NSMutableDictionary * info;
@property (retain) NSNumber * iseqNum;
@property (retain) NSDate * ibbDate;
@property (retain) NSString * ieventCode;
@property (retain) NSString * ipayload;
@property (retain) NSString * ierror;

+ (PLBBMsgAll *)entryEventNoneBBMsgAll;

- (NSString *)payload;
- (NSMutableDictionary *)info;
- (void).cxx_destruct;
- (void)setPayload:(NSString *)arg0;
- (void)setInfo:(NSMutableDictionary *)arg0;
- (NSString *)error;
- (void)setError:(NSString *)arg0;
- (NSNumber *)seqNum;
- (void)sendAndLogPLEntry:(id)arg0 withName:(NSString *)arg1 withType:(NSObject *)arg2;
- (NSDate *)bbDate;
- (void)setISeqNum:(id)arg0;
- (void)refreshBBMsgAll;
- (void)logEventNoneBBMsgAll;
- (void)setSeqNum:(NSNumber *)arg0;
- (void)setBbDate:(NSDate *)arg0;
- (NSNumber *)iseqNum;
- (void)setIseqNum:(NSNumber *)arg0;
- (NSDate *)ibbDate;
- (void)setIbbDate:(NSDate *)arg0;
- (NSString *)ieventCode;
- (void)setIeventCode:(NSString *)arg0;
- (NSString *)ipayload;
- (void)setIpayload:(NSString *)arg0;
- (NSString *)ierror;
- (void)setIerror:(NSString *)arg0;

@end
