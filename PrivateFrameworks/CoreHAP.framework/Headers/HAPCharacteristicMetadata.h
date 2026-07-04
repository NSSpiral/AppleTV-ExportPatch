/* Runtime dump - HAPCharacteristicMetadata
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristicMetadata : NSObject <NSCopying>
{
    HAPMetadataConstraints * _constraints;
    NSString * _manufacturerDescription;
    NSString * _format;
    NSString * _units;
}

@property (retain, nonatomic) HAPMetadataConstraints * constraints;
@property (copy, nonatomic) NSString * manufacturerDescription;
@property (retain, nonatomic) NSString * format;
@property (retain, nonatomic) NSString * units;

- (NSString *)description;
- (HAPCharacteristicMetadata *)copyWithZone:(struct _NSZone *)arg0;
- (HAPMetadataConstraints *)constraints;
- (void).cxx_destruct;
- (HAPCharacteristicMetadata *)initWithConstraints:(HAPMetadataConstraints *)arg0 description:(NSString *)arg1 format:(NSString *)arg2 units:(NSString *)arg3;
- (char)isEqualToCharacteristicMetadata:(NSDictionary *)arg0;
- (NSString *)units;
- (void)setUnits:(NSString *)arg0;
- (NSArray *)_generateValidConstraints:(NSArray *)arg0;
- (NSString *)manufacturerDescription;
- (void)setConstraints:(HAPMetadataConstraints *)arg0;
- (void)setManufacturerDescription:(NSString *)arg0;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;

@end
