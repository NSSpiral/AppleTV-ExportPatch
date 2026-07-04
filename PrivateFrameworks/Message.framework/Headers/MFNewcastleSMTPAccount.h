/* Runtime dump - MFNewcastleSMTPAccount
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFNewcastleSMTPAccount : SMTPAccount
{
    CastleIMAPAccount * _castleAccount;
}

@property (retain, nonatomic) CastleIMAPAccount * castleAccount;

+ (NSString *)accountTypeIdentifier;

- (void)dealloc;
- (CastleIMAPAccount *)castleAccount;
- (void)setCastleAccount:(CastleIMAPAccount *)arg0;
- (char)shouldUseAuthentication;
- (id)mailAccountIfAvailable;
- (NSString *)displayHostname;

@end
