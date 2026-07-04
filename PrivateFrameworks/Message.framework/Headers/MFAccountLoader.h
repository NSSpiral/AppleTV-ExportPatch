/* Runtime dump - MFAccountLoader
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAccountLoader : NSObject

+ (Class)accountClassForPersistentAccount:(NSObject *)arg0 error:(id *)arg1;
+ (NSNumber *)_accountClassStringWithPersistentAccount:(ACAccount *)arg0 error:(id *)arg1;
+ (Class)_accountClassForString:(NSString *)arg0 error:(id *)arg1;
+ (char)loadBundleForAccountClassString:(NSString *)arg0 error:(id *)arg1;
+ (NSString *)_bundlePathForAccountClassString:(NSString *)arg0;
+ (NSNumber *)accountWithPersistentAccount:(ACAccount *)arg0 error:(id *)arg1;
+ (NSString *)accountWithAccountTypeIdentifier:(NSString *)arg0 error:(id *)arg1;

@end
