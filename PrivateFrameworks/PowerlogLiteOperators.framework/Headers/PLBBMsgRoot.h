/* Runtime dump - PLBBMsgRoot
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMsgRoot : NSObject
{
    NSString * _msgName;
    NSNumber * _msgType;
    NSString * _msgPayload;
    NSString * _msgProcErr;
    NSDate * _msgDate;
    NSDictionary * _msgEntry;
    NSDictionary * _msgKVPairs;
    PLAgent * _agent;
}

@property (retain, nonatomic) NSString * msgName;
@property (retain, nonatomic) NSNumber * msgType;
@property (retain, nonatomic) NSString * msgPayload;
@property (retain, nonatomic) NSString * msgProcErr;
@property (retain, nonatomic) NSDate * msgDate;
@property (retain, nonatomic) NSDictionary * msgEntry;
@property (retain, nonatomic) NSDictionary * msgKVPairs;
@property (retain, nonatomic) PLAgent * agent;

- (PLBBMsgRoot *)init;
- (void).cxx_destruct;
- (PLAgent *)agent;
- (void)setAgent:(PLAgent *)arg0;
- (NSNumber *)msgType;
- (NSString *)msgProcErr;
- (void)setMsgProcErr:(NSString *)arg0;
- (void)setMsgType:(NSNumber *)arg0;
- (void)appendToMsgProcError:(NSError *)arg0;
- (void)sendAndLogPLEntry:(id)arg0 andOverride:(id)arg1;
- (NSString *)msgName;
- (void)setMsgName:(NSString *)arg0;
- (NSString *)msgPayload;
- (void)setMsgPayload:(NSString *)arg0;
- (NSDate *)msgDate;
- (void)setMsgDate:(NSDate *)arg0;
- (NSDictionary *)msgEntry;
- (void)setMsgEntry:(NSDictionary *)arg0;
- (NSDictionary *)msgKVPairs;
- (void)setMsgKVPairs:(NSDictionary *)arg0;

@end
