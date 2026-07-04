/* Runtime dump - MFGoogleOAuth2TokenAuthScheme
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFGoogleOAuth2TokenAuthScheme : MFAuthScheme

- (NSString *)name;
- (char)canAuthenticateAccountClass:(Class)arg0 connection:(NSURLConnection *)arg1;
- (Class)authenticatorClass;
- (NSNumber *)authenticatorForAccount:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (NSString *)humanReadableName;

@end
