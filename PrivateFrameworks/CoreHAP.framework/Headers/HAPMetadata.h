/* Runtime dump - HAPMetadata
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadata : NSObject
{
    NSNumber * _version;
    NSNumber * _schemaVersion;
    NSString * _hapBaseUUIDSuffix;
    NSArray * _hapValueUnits;
    NSArray * _hapProperties;
    NSArray * _hapCharacteristics;
    NSArray * _hapServices;
    NSArray * _hapSupportsAuthDataTuples;
    NSMutableArray * _parsedUUIDs;
}

@property (retain, nonatomic) NSNumber * version;
@property (retain, nonatomic) NSNumber * schemaVersion;
@property (retain, nonatomic) NSString * hapBaseUUIDSuffix;
@property (retain, nonatomic) NSArray * hapValueUnits;
@property (retain, nonatomic) NSArray * hapProperties;
@property (retain, nonatomic) NSArray * hapCharacteristics;
@property (retain, nonatomic) NSArray * hapServices;
@property (retain, nonatomic) NSArray * hapSupportsAuthDataTuples;
@property (retain, nonatomic) NSMutableArray * parsedUUIDs;

+ (HAPMetadata *)getSharedInstance;
+ (NSObject *)shortenHAPType:(NSObject *)arg0 baseUUIDSuffix:(NSString *)arg1;
+ (HAPMetadata *)getBuiltinInstance;
+ (char)setSharedInstance:(id)arg0 version:(NSNumber *)arg1 schemaVersion:(NSNumber *)arg2;

- (void)setVersion:(NSNumber *)arg0;
- (NSNumber *)version;
- (void).cxx_destruct;
- (NSObject *)serviceUTIFromType:(NSObject *)arg0;
- (char)validateMandatoryCharacteristics:(id)arg0 forService:(struct __SCNetworkService *)arg1;
- (NSDictionary *)getDefaultCharacteristicProperties:(NSDictionary *)arg0;
- (NSObject *)btleToServiceType:(NSObject *)arg0;
- (NSDictionary *)generateDictionary;
- (void)setParsedUUIDs:(NSMutableArray *)arg0;
- (char)parseVersion:(NSString *)arg0;
- (NSNumber *)schemaVersion;
- (char)parseMetadata:(NSDictionary *)arg0;
- (HAPMetadata *)initWithDictionary:(NSDictionary *)arg0 error:(id *)arg1;
- (void)setSchemaVersion:(NSNumber *)arg0;
- (NSMutableArray *)parsedUUIDs;
- (NSString *)hapBaseUUIDSuffix;
- (id)parseCharacteristicValue:(id)arg0;
- (NSArray *)hapCharacteristics;
- (id)parseServiceCharacteristics:(id)arg0;
- (NSArray *)hapServices;
- (void)setHapBaseUUIDSuffix:(NSString *)arg0;
- (id)parseUnits:(id)arg0;
- (void)setHapValueUnits:(NSArray *)arg0;
- (NSDictionary *)parseProperties:(NSDictionary *)arg0;
- (void)setHapProperties:(NSArray *)arg0;
- (id)parseCharacteristics:(id)arg0;
- (void)setHapCharacteristics:(NSArray *)arg0;
- (id)parseServices:(id)arg0;
- (void)setHapServices:(NSArray *)arg0;
- (id)parseCharacteristicServiceTuples:(id)arg0;
- (void)setHapSupportsAuthDataTuples:(NSArray *)arg0;
- (NSArray *)hapValueUnits;
- (NSArray *)hapProperties;
- (NSArray *)hapSupportsAuthDataTuples;
- (NSDictionary *)generateHAPMetadataTuplesDictionary:(NSDictionary *)arg0;
- (NSObject *)characteristicUTIFromType:(NSObject *)arg0;
- (HAPMetadata *)initWithServices:(UpdateAndReportServices *)arg0 characteristics:(GEOVCharacteristics *)arg1 units:(SAWeatherUnits *)arg2 properties:(NSDictionary *)arg3 addAuthDataTuples:(id)arg4 hapBaseUUIDSuffix:(NSString *)arg5;
- (char)isStandardHAPService:(NSObject *)arg0;
- (char)isStandardHAPServiceName:(NSString *)arg0;
- (char)isStandardHAPCharacteristic:(id)arg0;
- (char)isStandardHAPCharacteristicName:(NSString *)arg0;
- (char)isStandardHAPUnitName:(NSString *)arg0;
- (char)allowAssociatedService:(char)arg0;
- (NSObject *)descriptionFromServiceType:(NSObject *)arg0;
- (NSObject *)shouldFilterServiceOfType:(NSObject *)arg0;
- (id)characteristicTypeFromUTI:(id)arg0;
- (NSObject *)descriptionFromCharacteristicType:(NSObject *)arg0;
- (char)isMandatoryCharacteristic:(id)arg0 forService:(struct __SCNetworkService *)arg1;
- (id)serviceTypeToBTLE:(id)arg0;
- (char)supportsAdditionalAuthorizationData:(char)arg0 forService:(struct __SCNetworkService *)arg1;
- (NSDictionary *)getDefaultCharacteristicMetadata:(NSDictionary *)arg0;

@end
