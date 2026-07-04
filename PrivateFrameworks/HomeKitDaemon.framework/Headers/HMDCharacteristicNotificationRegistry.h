/* Runtime dump - HMDCharacteristicNotificationRegistry
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicNotificationRegistry : NSObject <NSSecureCoding>
{
    NSMutableDictionary * _notificationRegistry;
}

@property (retain, nonatomic) NSMutableDictionary * notificationRegistry;

+ (char)supportsSecureCoding;
+ (HMDCharacteristicNotificationRegistry *)_keyForCharacteristic:(id)arg0;

- (HMDCharacteristicNotificationRegistry *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMDCharacteristicNotificationRegistry *)init;
- (void).cxx_destruct;
- (NSMutableDictionary *)notificationRegistry;
- (char)enableNotificationForCharacteristics:(id)arg0 forUser:(HMUser *)arg1;
- (char)disableNotificationForCharacteristics:(id)arg0 forUser:(HMUser *)arg1 characteristicsToDisableEvents:(id *)arg2;
- (id)filterCharacteristics:(id)arg0 forUser:(HMUser *)arg1;
- (id)usersRegisteredForNotificationsForCharacteristics:(id)arg0;
- (NSString *)allCharacteristicIdentifiers;
- (void)deregisterUsers:(id)arg0 forHome:(HMHome *)arg1;
- (void)setNotificationRegistry:(NSMutableDictionary *)arg0;

@end
