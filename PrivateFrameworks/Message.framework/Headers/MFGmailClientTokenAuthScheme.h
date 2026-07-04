/* Runtime dump - MFGmailClientTokenAuthScheme
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFGmailClientTokenAuthScheme : MFAuthScheme

- (NSString *)name;
- (char)canAuthenticateAccountClass:(Class)arg0 connection:(NSURLConnection *)arg1;
- (Class)authenticatorClass;
- (NSNumber *)authenticatorForAccount:(NSObject *)arg0 connection:(NSURLConnection *)arg1;
- (NSString *)humanReadableName;

@end
