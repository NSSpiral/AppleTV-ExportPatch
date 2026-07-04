/* Runtime dump - MBMessage
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBMessage : NSObject
{
    NSObject<OS_xpc_object> * _xpcObject;
    NSMutableDictionary * _messageInfo;
    NSMutableDictionary * _replyInfo;
}

@property (copy, nonatomic) NSObject<NSCoding><NSCopying> * reply;
@property (copy, nonatomic) NSError * replyError;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSArray * arguments;
@property (copy, nonatomic) NSError * error;

+ (NSString *)messageWithName:(NSString *)arg0 arguments:(NSArray *)arg1;

- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (void)setReply:(NSObject<NSCoding><NSCopying> *)arg0;
- (NSError *)error;
- (NSObject<NSCoding><NSCopying> *)reply;
- (NSObject *)_initWithXPCObject:(NSObject *)arg0;
- (NSObject<OS_xpc_object> *)_xpcObject;
- (MBMessage *)initWithName:(NSString *)arg0 arguments:(NSArray *)arg1;
- (void)sendReply;
- (void)setReplyError:(NSError *)arg0;
- (void)setError:(NSError *)arg0;
- (NSArray *)arguments;
- (NSError *)replyError;

@end
