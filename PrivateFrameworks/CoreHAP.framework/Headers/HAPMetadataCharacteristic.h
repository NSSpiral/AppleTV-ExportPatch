/* Runtime dump - HAPMetadataCharacteristic
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadataCharacteristic : NSObject
{
    NSString * _name;
    NSString * _chrDescription;
    NSString * _uuidStr;
    NSNumber * _properties;
    NSString * _format;
    NSString * _units;
    HAPMetadataCharacteristicValue * _valueMetadata;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * chrDescription;
@property (retain, nonatomic) NSString * uuidStr;
@property (retain, nonatomic) NSNumber * properties;
@property (retain, nonatomic) NSString * format;
@property (retain, nonatomic) NSString * units;
@property (retain, nonatomic) HAPMetadataCharacteristicValue * valueMetadata;

- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void).cxx_destruct;
- (void)setProperties:(NSNumber *)arg0;
- (NSNumber *)properties;
- (void)dump;
- (NSString *)uuidStr;
- (NSString *)chrDescription;
- (NSString *)units;
- (HAPMetadataCharacteristicValue *)valueMetadata;
- (HAPMetadataCharacteristic *)initWithName:(NSString *)arg0 uuid:(NSUUID *)arg1 description:(NSString *)arg2 format:(NSString *)arg3 properties:(NSNumber *)arg4;
- (NSDictionary *)generateDictionary:(NSDictionary *)arg0;
- (void)setChrDescription:(NSString *)arg0;
- (void)setUuidStr:(NSString *)arg0;
- (void)setUnits:(NSString *)arg0;
- (void)setValueMetadata:(HAPMetadataCharacteristicValue *)arg0;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;

@end
