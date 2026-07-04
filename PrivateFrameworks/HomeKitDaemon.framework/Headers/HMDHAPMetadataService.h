/* Runtime dump - HMDHAPMetadataService
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataService : NSObject <NSSecureCoding>
{
    HAPMetadataService * _hapServiceMetadata;
    NSArray * _mandatoryCharacteristics;
    NSArray * _optionalCharacteristics;
}

@property (retain, nonatomic) HAPMetadataService * hapServiceMetadata;
@property (retain, nonatomic) NSArray * mandatoryCharacteristics;
@property (retain, nonatomic) NSArray * optionalCharacteristics;

+ (char)supportsSecureCoding;

- (HMDHAPMetadataService *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSArray *)mandatoryCharacteristics;
- (NSArray *)optionalCharacteristics;
- (void)setMandatoryCharacteristics:(NSArray *)arg0;
- (void)setOptionalCharacteristics:(NSArray *)arg0;
- (void)setHapServiceMetadata:(HAPMetadataService *)arg0;
- (id)hmdCharacteristics:(id)arg0 hapCharacteristics:(NSArray *)arg1;
- (HAPMetadataService *)hapServiceMetadata;
- (HMDHAPMetadataService *)initWithHAPService:(NSObject *)arg0 hapCharacteristics:(NSArray *)arg1;
- (id)hapCharacteristics:(NSArray *)arg0 hapCharacteristics:(NSArray *)arg1;

@end
