/* Runtime dump - HMDHAPMetadata
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadata : NSObject <NSSecureCoding>
{
    char _incomplete;
    NSNumber * _version;
    NSNumber * _schemaVersion;
    HAPMetadata * _hapMetadata;
    NSArray * _hapValueUnits;
    NSArray * _hapProperties;
    NSArray * _hapCharacteristics;
    NSArray * _hapServices;
    NSArray * _hapSupportsAuthDataTuples;
    NSArray * _hmRequiresDeviceUnlockTuples;
    NSArray * _hmAccessoryCategories;
    NSArray * _hmBlacklistedServices;
    NSArray * _hmBlacklistedCharacteristics;
    NSDictionary * _assistantServices;
    NSArray * _assistantCharacteristics;
    NSDictionary * _assistantUnits;
}

@property (retain, nonatomic) NSNumber * version;
@property (retain, nonatomic) NSNumber * schemaVersion;
@property (nonatomic) char incomplete;
@property (retain, nonatomic) HAPMetadata * hapMetadata;
@property (retain, nonatomic) NSArray * hapValueUnits;
@property (retain, nonatomic) NSArray * hapProperties;
@property (retain, nonatomic) NSArray * hapCharacteristics;
@property (retain, nonatomic) NSArray * hapServices;
@property (retain, nonatomic) NSArray * hapSupportsAuthDataTuples;
@property (retain, nonatomic) NSArray * hmRequiresDeviceUnlockTuples;
@property (retain, nonatomic) NSArray * hmAccessoryCategories;
@property (retain, nonatomic) NSArray * hmBlacklistedServices;
@property (retain, nonatomic) NSArray * hmBlacklistedCharacteristics;
@property (retain, nonatomic) NSDictionary * assistantServices;
@property (retain, nonatomic) NSArray * assistantCharacteristics;
@property (retain, nonatomic) NSDictionary * assistantUnits;

+ (char)supportsSecureCoding;
+ (HMDHAPMetadata *)getSharedInstance;
+ (HMDHAPMetadata *)getBuiltinInstance;
+ (char)setSharedInstance:(id)arg0;
+ (HMDHAPMetadata *)initWithURL:(NSString *)arg0 error:(id *)arg1;

- (HMDHAPMetadata *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setVersion:(NSNumber *)arg0;
- (NSNumber *)version;
- (void).cxx_destruct;
- (NSDictionary *)generateDictionary;
- (NSNumber *)schemaVersion;
- (void)setSchemaVersion:(NSNumber *)arg0;
- (NSArray *)hapCharacteristics;
- (NSArray *)hapServices;
- (void)setHapValueUnits:(NSArray *)arg0;
- (void)setHapProperties:(NSArray *)arg0;
- (void)setHapCharacteristics:(NSArray *)arg0;
- (void)setHapServices:(NSArray *)arg0;
- (void)setHapSupportsAuthDataTuples:(NSArray *)arg0;
- (NSArray *)hapValueUnits;
- (NSArray *)hapProperties;
- (NSArray *)hapSupportsAuthDataTuples;
- (NSDictionary *)generateHAPMetadataTuplesDictionary:(NSDictionary *)arg0;
- (char)shouldFilterServiceOfType:(NSObject *)arg0;
- (char)requiresDeviceUnlock:(id)arg0 forService:(struct __SCNetworkService *)arg1;
- (HMDHAPMetadata *)initWithDictionary:(NSDictionary *)arg0 hapMetadata:(HAPMetadata *)arg1 error:(id *)arg2;
- (HAPMetadata *)hapMetadata;
- (NSArray *)hmBlacklistedServices;
- (NSArray *)hmBlacklistedCharacteristics;
- (NSArray *)hmAccessoryCategories;
- (void)setHmBlacklistedServices:(NSArray *)arg0;
- (void)setHmBlacklistedCharacteristics:(NSArray *)arg0;
- (void)setHmAccessoryCategories:(NSArray *)arg0;
- (NSArray *)assistantCharacteristics;
- (void)setAssistantCharacteristics:(NSArray *)arg0;
- (char)incomplete;
- (void)setIncomplete:(char)arg0;
- (void)setHapMetadata:(HAPMetadata *)arg0;
- (void)createHMDContainersForHAPMetadata;
- (char)parseHMMetadata:(NSDictionary *)arg0;
- (char)parseAssistantMetadata:(NSDictionary *)arg0;
- (void)setHmRequiresDeviceUnlockTuples:(NSArray *)arg0;
- (char)parseRequiresDeviceUnlockMetadata:(NSDictionary *)arg0;
- (char)parseCategories:(id)arg0;
- (char)parseBlacklistedServices:(id)arg0;
- (id)parseHAPAssistantServices:(id)arg0;
- (void)setAssistantServices:(NSDictionary *)arg0;
- (id)parseAssistantCharacteristics:(id)arg0;
- (id)parseAssistantUnits:(id)arg0;
- (void)setAssistantUnits:(NSDictionary *)arg0;
- (NSArray *)hmRequiresDeviceUnlockTuples;
- (NSDictionary *)generateCategoriesDictionary:(NSDictionary *)arg0;
- (id)generateBlacklistedServices:(id)arg0;
- (id)generateBlacklistedCharacteristics:(id)arg0;
- (NSDictionary *)assistantServices;
- (NSDictionary *)assistantUnits;
- (NSDictionary *)generateHMDictionary;
- (NSDictionary *)generateAssistantDictionary;
- (char)checkTuples:(id)arg0 forCharacteristic:(HMCharacteristic *)arg1 service:(NSObject *)arg2;
- (NSDictionary *)createHAPMetadata:(NSDictionary *)arg0;
- (char)shouldFilterCharacteristicOfType:(NSObject *)arg0;
- (void)augmentMissingInformation:(id)arg0;
- (char)supportsAuthorizationData:(NSData *)arg0 forService:(struct __SCNetworkService *)arg1;
- (NSObject *)validateAssociatedServiceType:(NSObject *)arg0 forService:(struct __SCNetworkService *)arg1;
- (id)categoryForOther;
- (NSString *)categoryForIdentifier:(NSString *)arg0;
- (NSObject *)descriptionForServiceType:(NSObject *)arg0;
- (NSObject *)descriptionForCharacteristicType:(NSObject *)arg0;

@end
