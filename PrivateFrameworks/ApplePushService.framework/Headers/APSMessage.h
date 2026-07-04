/* Runtime dump - APSMessage
 * Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSMessage : NSObject <NSCoding>
{
    NSMutableDictionary * _plist;
    void * _xpcMessage;
    NSObject<OS_dispatch_queue> * _ivarQueue;
}

@property (retain, nonatomic) NSString * topic;
@property (retain, nonatomic) NSDictionary * userInfo;
@property (nonatomic) unsigned int identifier;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)setObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)dealloc;
- (APSMessage *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (APSMessage *)initWithDictionary:(NSDictionary *)arg0;
- (unsigned int)identifier;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (void)setIdentifier:(unsigned int)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (APSMessage *)initWithDictionary:(NSDictionary *)arg0 xpcMessage:(void *)arg1;
- (NSString *)topic;
- (APSMessage *)initWithTopic:(NSString *)arg0 userInfo:(NSDictionary *)arg1;
- (void)setGuid:(NSString *)arg0;
- (NSString *)guid;
- (void)setTopic:(NSString *)arg0;

@end
