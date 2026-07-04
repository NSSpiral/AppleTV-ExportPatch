/* Runtime dump - MFError
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFError : NSError
{
    NSMutableDictionary * _moreUserInfo;
}

+ (NSString *)errorWithDomain:(NSString *)arg0 code:(int)arg1 localizedDescription:(NSString *)arg2;
+ (NSString *)errorWithDomain:(NSString *)arg0 code:(int)arg1 localizedDescription:(NSString *)arg2 title:(NSString *)arg3 userInfo:(NSDictionary *)arg4;
+ (NSException *)errorWithException:(JSValue *)arg0;

- (void)dealloc;
- (NSDictionary *)userInfo;
- (NSString *)localizedDescription;
- (id)recoveryAttempter;
- (void)setUserInfoObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)setLocalizedDescription:(NSString *)arg0;
- (void)setMoreInfo:(NSDictionary *)arg0;
- (NSString *)mf_shortDescription;
- (NSDictionary *)mf_moreInfo;
- (void)useGenericDescription:(NSString *)arg0;
- (void)setShortDescription:(NSString *)arg0;

@end
