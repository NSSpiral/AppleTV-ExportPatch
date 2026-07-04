/* Runtime dump - IDSMessageContext
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMessageContext : NSObject
{
    NSMutableDictionary * _dict;
    id _boostContext;
}

@property (copy, nonatomic) NSString * outgoingResponseIdentifier;
@property (copy, nonatomic) NSString * incomingResponseIdentifier;
@property (nonatomic) char expectsPeerResponse;
@property (nonatomic) char wantsAppAck;
@property (copy, nonatomic) NSString * storageGuid;
@property (nonatomic) NSNumber * originalCommand;
@property (nonatomic) NSNumber * broadcastTime;
@property (nonatomic) NSNumber * priority;
@property (retain, nonatomic) id boostContext;
@property (nonatomic) long long broadcastID;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (void)setPriority:(NSNumber *)arg0;
- (NSNumber *)priority;
- (void)setWantsAppAck:(char)arg0;
- (void)setExpectsPeerResponse:(char)arg0;
- (IDSMessageContext *)initWithDictionary:(NSDictionary *)arg0 boostContext:(NSObject *)arg1;
- (NSString *)storageGuid;
- (NSString *)outgoingResponseIdentifier;
- (NSNumber *)broadcastTime;
- (long long)broadcastID;
- (char)wantsAppAck;
- (void)setBoostContext:(NSObject *)arg0;
- (NSString *)boostContext;
- (void)setOutgoingResponseIdentifier:(NSString *)arg0;
- (void)setIncomingResponseIdentifier:(NSString *)arg0;
- (NSString *)incomingResponseIdentifier;
- (void)setStorageGuid:(NSString *)arg0;
- (void)setOriginalCommand:(NSNumber *)arg0;
- (NSNumber *)originalCommand;
- (void)setBroadcastTime:(NSNumber *)arg0;
- (char)expectsPeerResponse;
- (void)setBroadcastID:(long long)arg0;

@end
