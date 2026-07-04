/* Runtime dump - HMDBulletinCategory
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBulletinCategory : NSObject
{
    NSArray * _entries;
}

@property (retain, nonatomic) NSArray * entries;

+ (NSString *)categoryForIdentifier:(NSString *)arg0;
+ (HMDBulletinCategory *)defaultCategories;
+ (NSArray *)_enumerationValueLocalizationKeys;
+ (NSObject *)_secureStateMap;

- (NSString *)identifier;
- (NSString *)localizedName;
- (NSArray *)entries;
- (void).cxx_destruct;
- (char)hasCharacteristic:(HMCharacteristic *)arg0;
- (id)localizedStateForCharacteristic:(id)arg0;
- (NSObject *)_presentationTypeForType:(NSObject *)arg0;
- (id)_presentationValueForValue:(id)arg0 type:(NSObject *)arg1;
- (id)_localizedStateForValue:(id)arg0 characteristicType:(NSObject *)arg1;
- (char)_isSecureState:(struct NSDictionary *)arg0;
- (char)_isUnsecureState:(struct NSDictionary *)arg0;
- (char)_alarmTriggerChange:(struct NSDictionary *)arg0 previousContext:(struct NSDictionary *)arg1;
- (char)shouldChangeSecureStateForCharacteristic:(id)arg0 previousContext:(struct NSDictionary *)arg1;
- (void)setEntries:(NSArray *)arg0;

@end
