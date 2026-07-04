/* Runtime dump - HMHAPMetadata
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMHAPMetadata : NSObject <NSSecureCoding>
{
    NSNumber * _version;
    NSArray * _hapValueUnits;
    NSArray * _hapCharacteristics;
    NSArray * _hapServices;
    NSDictionary * _assistantServices;
    NSArray * _assistantCharacteristics;
    NSDictionary * _assistantUnits;
    NSArray * _accessoryCategories;
}

@property (retain, nonatomic) NSNumber * version;
@property (retain, nonatomic) NSArray * hapValueUnits;
@property (retain, nonatomic) NSArray * hapCharacteristics;
@property (retain, nonatomic) NSArray * hapServices;
@property (retain, nonatomic) NSDictionary * assistantServices;
@property (retain, nonatomic) NSArray * assistantCharacteristics;
@property (retain, nonatomic) NSDictionary * assistantUnits;
@property (retain, nonatomic) NSArray * accessoryCategories;

+ (char)supportsSecureCoding;
+ (HMHAPMetadata *)getSharedInstance;
+ (void)setSharedInstance:(id)arg0;

- (HMHAPMetadata *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setVersion:(NSNumber *)arg0;
- (NSNumber *)version;
- (void).cxx_destruct;
- (NSArray *)hapCharacteristics;
- (NSArray *)hapServices;
- (void)setHapValueUnits:(NSArray *)arg0;
- (void)setHapCharacteristics:(NSArray *)arg0;
- (void)setHapServices:(NSArray *)arg0;
- (NSArray *)hapValueUnits;
- (NSArray *)assistantCharacteristics;
- (void)setAssistantCharacteristics:(NSArray *)arg0;
- (void)setAssistantServices:(NSDictionary *)arg0;
- (void)setAssistantUnits:(NSDictionary *)arg0;
- (NSDictionary *)assistantServices;
- (NSDictionary *)assistantUnits;
- (id)getAssistantCharacteristic:(HMDHAPMetadataAssistantCharacteristic *)arg0;
- (NSString *)serviceTypeDescription:(NSString *)arg0;
- (NSString *)serviceTypeLocalizedDescription:(NSString *)arg0;
- (NSString *)characteristicTypeDescription:(NSString *)arg0;
- (NSString *)characteristicTypeLocalizedDescription:(NSString *)arg0;
- (id)characteristicValueUnit:(id)arg0;
- (char)supportsLocalization:(char)arg0;
- (NSString *)mapToAssistantServiceName:(NSString *)arg0;
- (NSString *)mapFromAssistantServiceName:(NSString *)arg0;
- (NSString *)mapToAssistantCharacteristicName:(NSString *)arg0;
- (NSString *)mapReadCharcteristicFromAssistantName:(NSString *)arg0;
- (NSString *)mapWriteCharcteristicFromAssistantName:(NSString *)arg0;
- (NSObject *)mapCharacteristicValueType:(NSObject *)arg0;
- (NSString *)mapToAssistantUnitName:(NSString *)arg0;
- (NSString *)mapFromAssistantUnitName:(NSString *)arg0;
- (id)mapFromAssistantCharacteristicValue:(id)arg0 name:(NSString *)arg1;
- (id)mapToAssistantCharacteristicValue:(id)arg0 name:(NSString *)arg1;
- (NSArray *)accessoryCategories;
- (void)setAccessoryCategories:(NSArray *)arg0;

@end
