/* Runtime dump - CKNotification
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKNotification : NSObject <NSSecureCoding>
{
    char _isPruned;
    int _notificationType;
    CKNotificationID * _notificationID;
    NSString * _containerIdentifier;
    NSString * _alertBody;
    NSString * _alertLocalizationKey;
    NSArray * _alertLocalizationArgs;
    NSString * _alertActionLocalizationKey;
    NSString * _alertLaunchImage;
    NSNumber * _badge;
    NSString * _soundName;
}

@property (nonatomic) int notificationType;
@property (copy, nonatomic) CKNotificationID * notificationID;
@property (copy, nonatomic) NSString * containerIdentifier;
@property (nonatomic) char isPruned;
@property (copy, nonatomic) NSString * alertBody;
@property (copy, nonatomic) NSString * alertLocalizationKey;
@property (copy, nonatomic) NSArray * alertLocalizationArgs;
@property (copy, nonatomic) NSString * alertActionLocalizationKey;
@property (copy, nonatomic) NSString * alertLaunchImage;
@property (copy, nonatomic) NSNumber * badge;
@property (copy, nonatomic) NSString * soundName;

+ (NSDictionary *)_realNotificationFromRemoteNotificationDictionary:(NSDictionary *)arg0;
+ (char)supportsSecureCoding;
+ (CKNotification *)notificationFromRemoteNotificationDictionary:(NSDictionary *)arg0;

- (CKNotification *)initWithRemoteNotificationDictionary:(NSDictionary *)arg0;
- (void)setIsPruned:(char)arg0;
- (char)isPruned;
- (CKNotification *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CKNotification *)init;
- (NSString *)description;
- (NSString *)alertBody;
- (NSString *)soundName;
- (void).cxx_destruct;
- (void)setAlertBody:(NSString *)arg0;
- (void)setAlertLaunchImage:(NSString *)arg0;
- (void)setSoundName:(NSString *)arg0;
- (NSString *)alertLaunchImage;
- (int)notificationType;
- (NSString *)CKPropertiesDescription;
- (CKNotification *)_initBare;
- (CKNotificationID *)notificationID;
- (void)setAlertLocalizationKey:(NSString *)arg0;
- (void)setAlertLocalizationArgs:(NSArray *)arg0;
- (void)setAlertActionLocalizationKey:(NSString *)arg0;
- (NSString *)alertLocalizationKey;
- (NSArray *)alertLocalizationArgs;
- (NSString *)alertActionLocalizationKey;
- (void)setNotificationID:(CKNotificationID *)arg0;
- (void)setBadge:(NSNumber *)arg0;
- (char)isRead;
- (void)setNotificationType:(int)arg0;
- (NSNumber *)badge;
- (NSString *)containerIdentifier;
- (void)setContainerIdentifier:(NSString *)arg0;

@end
