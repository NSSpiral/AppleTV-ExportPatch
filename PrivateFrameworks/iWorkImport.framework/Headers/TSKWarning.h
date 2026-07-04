/* Runtime dump - TSKWarning
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKWarning : NSObject
{
    NSString * _message;
    NSDictionary * _userInfo;
    NSSet * _affectedObjects;
    NSString * _localizedLocation;
}

@property (copy, nonatomic) NSString * message;
@property (copy, nonatomic) NSDictionary * userInfo;
@property (copy, nonatomic) NSSet * affectedObjects;
@property (copy, nonatomic) NSString * localizedLocation;

+ (NSString *)warningWithMessage:(NSString *)arg0;
+ (NSString *)warningWithMessage:(NSString *)arg0 affectedObjects:(NSSet *)arg1;
+ (NSString *)warningWithMessage:(NSString *)arg0 affectedObject:(NSObject *)arg1;

- (void)setLocalizedLocation:(NSString *)arg0;
- (TSKWarning *)initWithMessage:(NSString *)arg0 affectedObjects:(NSSet *)arg1;
- (void)setAffectedObjects:(NSSet *)arg0;
- (NSString *)localizedLocation;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSDictionary *)userInfo;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (NSSet *)affectedObjects;

@end
