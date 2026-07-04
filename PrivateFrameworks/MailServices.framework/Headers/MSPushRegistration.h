/* Runtime dump - MSPushRegistration
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSPushRegistration : MSMailDefaultService
{
    NSString * _bundleIdentifier;
    NSString * _accountIdentifier;
    NSString * _notificationNamePrefix;
    NSArray * _mailboxNames;
}

@property (copy, nonatomic) NSString * bundleIdentifier;
@property (copy, nonatomic) NSString * accountIdentifier;
@property (copy, nonatomic) NSString * notificationNamePrefix;
@property (copy, nonatomic) NSArray * mailboxNames;

- (void)setAccountIdentifier:(NSString *)arg0;
- (void)dealloc;
- (MSPushRegistration *)init;
- (NSString *)bundleIdentifier;
- (void)setBundleIdentifier:(NSString *)arg0;
- (NSString *)accountIdentifier;
- (NSString *)notificationNamePrefix;
- (NSArray *)mailboxNames;
- (void)setNotificationNamePrefix:(NSString *)arg0;
- (void)setMailboxNames:(NSArray *)arg0;
- (void)registerForPush:(id)arg0;

@end
