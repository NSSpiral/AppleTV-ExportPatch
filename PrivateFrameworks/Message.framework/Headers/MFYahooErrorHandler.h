/* Runtime dump - MFYahooErrorHandler
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFYahooErrorHandler : NSObject <NSSecureCoding>

+ (char)supportsSecureCoding;

- (MFYahooErrorHandler *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)attemptRecoveryFromError:(NSError *)arg0 optionIndex:(unsigned int)arg1 delegate:(NSObject *)arg2 didRecoverSelector:(SEL)arg3 contextInfo:(void *)arg4;

@end
