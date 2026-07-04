/* Runtime dump - HMDCharacteristic
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristic : NSObject <NSSecureCoding>
{
    char _notificationEnabled;
    HMDAccessory * _accessory;
    HMDService * _service;
    NSData * _authorizationData;
    NSString * _characteristicType;
    id _lastKnownValue;
    NSNumber * _characteristicInstanceID;
    int _characteristicProperties;
    HMDCharacteristicMetadata * _characteristicMetadata;
    NSMutableSet * _notificationRegistrations;
    NSMutableSet * _hapCharacteristicTuples;
    unsigned long long _lastKnownValueUpdateTime;
}

@property (readonly, copy, nonatomic) NSString * contextID;
@property (readonly, nonatomic) NSDictionary * bulletinContext;
@property (readonly, nonatomic) HMDBulletinCategory * category;
@property (readonly, weak, nonatomic) HMDAccessory * accessory;
@property (readonly, weak, nonatomic) HMDService * service;
@property (readonly, copy, nonatomic) NSString * type;
@property (readonly, copy, nonatomic) NSNumber * instanceID;
@property (readonly, nonatomic) int properties;
@property (readonly, copy, nonatomic) id value;
@property (readonly, nonatomic) HMDCharacteristicMetadata * metadata;
@property (readonly, nonatomic) char notificationEnabled;
@property (copy, nonatomic) NSData * authorizationData;
@property (retain, nonatomic) NSString * characteristicType;
@property (retain, nonatomic) id lastKnownValue;
@property (nonatomic) unsigned long long lastKnownValueUpdateTime;
@property (retain, nonatomic) NSNumber * characteristicInstanceID;
@property (nonatomic) int characteristicProperties;
@property (retain, nonatomic) HMDCharacteristicMetadata * characteristicMetadata;
@property (retain, nonatomic) NSMutableSet * notificationRegistrations;
@property (retain, nonatomic) NSMutableSet * hapCharacteristicTuples;

+ (char)supportsSecureCoding;

- (HMDCharacteristic *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (HMDBulletinCategory *)category;
- (NSString *)type;
- (void *)value;
- (NSString *)contextID;
- (void).cxx_destruct;
- (int)properties;
- (id)validateValue:(id *)arg0 outValue:(id *)arg1;
- (NSNumber *)instanceID;
- (HMDService *)service;
- (HMDAccessory *)accessory;
- (NSData *)authorizationData;
- (NSString *)characteristicType;
- (int)characteristicProperties;
- (HMDCharacteristicMetadata *)characteristicMetadata;
- (void)setAuthorizationData:(NSData *)arg0;
- (struct NSDictionary *)bulletinContext;
- (NSString *)localizedCategoryName;
- (NSObject *)localizedCategoryState;
- (char)isNotificationEnabled;
- (void)setNotificationEnabled:(char)arg0 forClientIdentifier:(NSString *)arg1;
- (char)isNotificationEnabledForClientIdentifier:(NSString *)arg0;
- (void)unconfigure;
- (void)unconfigureForServerIdentifier:(NSString *)arg0 linkType:(int)arg1;
- (id)characteristicForHAPAccessory:(id)arg0;
- (void)updateValue:(id)arg0;
- (char)deregisterNotificationForClientIdentifier:(NSString *)arg0;
- (NSMutableSet *)notificationRegistrations;
- (void)configureWithCharacteristic:(id)arg0 service:(HMDService *)arg1 accessory:(HMDAccessory *)arg2;
- (HMDCharacteristic *)initWithCharacteristic:(HMCharacteristic *)arg0 service:(HMDService *)arg1 accessory:(HMDAccessory *)arg2;
- (void)updateLastKnownValue;
- (NSMutableSet *)hapCharacteristicTuples;
- (NSString *)hapCharacteristicTupleWithIdentifier:(NSString *)arg0 linkType:(int)arg1;
- (NSNumber *)characteristicInstanceID;
- (id)lastKnownValue;
- (void)setLastKnownValue:(id)arg0;
- (void)setLastKnownValueUpdateTime:(unsigned long long)arg0;
- (unsigned long long)lastKnownValueUpdateTime;
- (void)unconfigureAll;
- (NSString *)characteristicForServerIdentifier:(NSString *)arg0 linkType:(int)arg1;
- (void)updateValue:(id)arg0 serverIdentifier:(NSString *)arg1 linkType:(int)arg2;
- (void)setCharacteristicType:(NSString *)arg0;
- (void)setCharacteristicInstanceID:(NSNumber *)arg0;
- (void)setCharacteristicProperties:(int)arg0;
- (void)setCharacteristicMetadata:(HMDCharacteristicMetadata *)arg0;
- (void)setNotificationRegistrations:(NSMutableSet *)arg0;
- (void)setHapCharacteristicTuples:(NSMutableSet *)arg0;
- (HMDCharacteristicMetadata *)metadata;

@end
