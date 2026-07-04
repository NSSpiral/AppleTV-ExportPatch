/* Runtime dump - MFAuthScheme
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAuthScheme : NSObject

+ (void)initialize;
+ (MFAuthScheme *)knownSchemes;
+ (NSString *)schemeWithName:(NSString *)arg0;
+ (void)registerSchemeClass:(Class)arg0;
+ (NSNumber *)authSchemesForAccount:(NSObject *)arg0 connection:(NSURLConnection *)arg1;

- (char)requiresPassword;
- (NSString *)name;
- (char)canAuthenticateAccountClass:(Class)arg0 connection:(NSURLConnection *)arg1;
- (Class)connectionClassForAccountClass:(Class)arg0;
- (Class)authenticatorClass;
- (unsigned int)defaultPortForAccount:(NSObject *)arg0;
- (char)hasEncryption;
- (NSNumber *)authenticatorForAccount:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (NSString *)humanReadableName;

@end
