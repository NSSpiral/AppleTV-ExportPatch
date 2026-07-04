/* Runtime dump - MFXYMCOOKIEAuthScheme
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFXYMCOOKIEAuthScheme : MFAuthScheme

+ (void)load;

- (char)requiresPassword;
- (NSString *)name;
- (NSNumber *)authenticatorForAccount:(NSObject *)arg0 connection:(NSURLConnection *)arg1;

@end
