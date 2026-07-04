/* Runtime dump - ACRemoteDeviceMessage
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACRemoteDeviceMessage : NSObject
{
    NSMutableDictionary * _payload;
    NSData * _data;
    char _needsReply;
    char _isReply;
    NSString * _identifier;
}

@property (readonly, nonatomic) NSString * command;
@property (readonly, nonatomic) ACAccount * account;
@property (readonly, nonatomic) NSDictionary * options;
@property (readonly, nonatomic) NSString * sentMessageIdentifier;
@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) NSObject<NSCoding> * result;
@property (readonly, nonatomic) NSData * data;
@property (readonly, nonatomic) NSString * identifier;
@property (nonatomic) char needsReply;
@property (nonatomic) char isReply;

+ (NSObject *)actionMessageWithCommand:(NSString *)arg0 account:(ACAccount *)arg1 options:(NSDictionary *)arg2;
+ (NSString *)replyForMessage:(NSString *)arg0 withSuccess:(char)arg1 result:(NSObject<NSCoding> *)arg2 error:(NSError *)arg3;
+ (NSString *)replyForMessage:(NSString *)arg0 withSuccess:(char)arg1 error:(NSError *)arg2;

- (char)success;
- (NSString *)command;
- (ACRemoteDeviceMessage *)init;
- (NSString *)description;
- (NSString *)identifier;
- (NSData *)data;
- (ACRemoteDeviceMessage *)initWithData:(NSData *)arg0;
- (NSDictionary *)options;
- (void).cxx_destruct;
- (NSObject<NSCoding> *)result;
- (void)_invalidateCachedData;
- (NSString *)sentMessageIdentifier;
- (char)needsReply;
- (void)_setPayloadObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)_payloadObjectForKey:(NSString *)arg0;
- (void)setNeedsReply:(char)arg0;
- (void)setIsReply:(char)arg0;
- (char)isReply;
- (NSError *)error;
- (ACAccount *)account;

@end
