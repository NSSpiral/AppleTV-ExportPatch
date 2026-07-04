/* Runtime dump - AAKeychainManager
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAKeychainManager : NSObject

+ (void)initialize;
+ (NSString *)passwordForServiceName:(NSString *)arg0 username:(NSString *)arg1 accessGroup:(NSString *)arg2;
+ (void)setPassword:(NSString *)arg0 forServiceName:(NSString *)arg1 username:(NSString *)arg2 accessGroup:(NSString *)arg3;
+ (void)removePasswordForService:(NSObject *)arg0 username:(NSString *)arg1 accessGroup:(NSString *)arg2;

@end
