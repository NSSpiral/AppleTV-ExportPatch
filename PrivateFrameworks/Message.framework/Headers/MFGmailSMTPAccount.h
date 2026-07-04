/* Runtime dump - MFGmailSMTPAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFGmailSMTPAccount : SMTPAccount <MFGmailAccountAuthProtocol>
{
    GmailAccount * _account;
}

@property (retain, nonatomic) GmailAccount * mailAccount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)accountTypeIdentifier;

- (void)dealloc;
- (NSString *)password;
- (NSString *)clientToken;
- (void)setMailAccount:(GmailAccount *)arg0;
- (NSURLResponse *)_urlFromResponse:(NSURLResponse *)arg0;
- (char)usesSSL;
- (NSString *)preferredAuthScheme;
- (unsigned int)portNumber;
- (char)shouldFetchACEDBInfoForError:(NSError *)arg0;
- (NSString *)oauth2Token;
- (char)shouldUseAuthentication;
- (id)mailAccountIfAvailable;
- (NSString *)displayHostname;
- (NSURLResponse *)errorForResponse:(NSURLResponse *)arg0;
- (NSString *)username;
- (NSString *)hostname;

@end
