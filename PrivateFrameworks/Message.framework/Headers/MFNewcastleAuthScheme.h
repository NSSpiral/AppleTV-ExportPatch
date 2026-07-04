/* Runtime dump - MFNewcastleAuthScheme
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFNewcastleAuthScheme : MFAuthScheme

+ (void)load;

- (char)requiresPassword;
- (NSString *)name;
- (char)canAuthenticateAccountClass:(Class)arg0 connection:(NSURLConnection *)arg1;
- (Class)authenticatorClass;
- (NSString *)humanReadableName;

@end
