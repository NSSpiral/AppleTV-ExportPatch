/* Runtime dump - ACDKeychain
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychain : NSObject

+ (char)canAccessPasswordsWithPolicy:(void *)arg0;
+ (NSString *)passwordForServiceName:(NSString *)arg0 username:(NSString *)arg1 accessGroup:(NSString *)arg2 error:(id *)arg3;
+ (void)updateItemForServiceName:(NSString *)arg0 username:(NSString *)arg1 accessGroup:(NSString *)arg2 newValues:(NSArray *)arg3 error:(id *)arg4;
+ (void)addItemWithServiceName:(NSString *)arg0 username:(NSString *)arg1 accessGroup:(NSString *)arg2 passwordData:(NSData *)arg3 options:(NSDictionary *)arg4 error:(id *)arg5;
+ (void)removeItemForServiceName:(NSString *)arg0 username:(NSString *)arg1 accessGroup:(NSString *)arg2 error:(id *)arg3;
+ (NSArray *)_knownMissingKeychainItems;
+ (NSObject *)_missingKeychainItemSpecifierForService:(NSObject *)arg0 username:(NSString *)arg1;

@end
