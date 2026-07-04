/* Runtime dump - CKNotificationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKNotificationInfo : NSObject <NSSecureCoding, NSCopying>
{
    char _shouldBadge;
    char _shouldSendContentAvailable;
    NSString * _alertBody;
    NSString * _alertLocalizationKey;
    NSArray * _alertLocalizationArgs;
    NSString * _alertActionLocalizationKey;
    NSString * _alertLaunchImage;
    NSString * _soundName;
    NSArray * _desiredKeys;
}

@property (copy, nonatomic) NSString * alertBody;
@property (copy, nonatomic) NSString * alertLocalizationKey;
@property (copy, nonatomic) NSArray * alertLocalizationArgs;
@property (copy, nonatomic) NSString * alertActionLocalizationKey;
@property (copy, nonatomic) NSString * alertLaunchImage;
@property (copy, nonatomic) NSString * soundName;
@property (copy, nonatomic) NSArray * desiredKeys;
@property (nonatomic) char shouldBadge;
@property (nonatomic) char shouldSendContentAvailable;

+ (char)supportsSecureCoding;
+ (CKNotificationInfo *)notificationInfo;

- (CKNotificationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)debugDescription;
- (NSString *)alertBody;
- (NSString *)soundName;
- (CKNotificationInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setAlertBody:(NSString *)arg0;
- (void)setAlertLaunchImage:(NSString *)arg0;
- (void)setSoundName:(NSString *)arg0;
- (NSString *)alertLaunchImage;
- (void)setDesiredKeys:(NSArray *)arg0;
- (NSArray *)desiredKeys;
- (void)setAlertLocalizationKey:(NSString *)arg0;
- (void)setAlertLocalizationArgs:(NSArray *)arg0;
- (void)setAlertActionLocalizationKey:(NSString *)arg0;
- (char)shouldBadge;
- (void)setShouldBadge:(char)arg0;
- (char)shouldSendContentAvailable;
- (void)setShouldSendContentAvailable:(char)arg0;
- (NSString *)alertLocalizationKey;
- (NSArray *)alertLocalizationArgs;
- (NSString *)alertActionLocalizationKey;

@end
