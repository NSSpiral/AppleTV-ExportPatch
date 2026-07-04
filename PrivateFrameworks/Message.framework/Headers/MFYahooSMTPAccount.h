/* Runtime dump - MFYahooSMTPAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFYahooSMTPAccount : SMTPAccount
{
    YahooAccount * _account;
}

@property (retain, nonatomic) YahooAccount * mailAccount;

+ (NSString *)accountTypeIdentifier;

- (void)dealloc;
- (void)setMailAccount:(YahooAccount *)arg0;
- (char)usesSSL;
- (NSString *)preferredAuthScheme;
- (id)mailAccountIfAvailable;
- (NSString *)displayHostname;
- (char)shouldUseSaveSentForAccount:(NSObject *)arg0;

@end
