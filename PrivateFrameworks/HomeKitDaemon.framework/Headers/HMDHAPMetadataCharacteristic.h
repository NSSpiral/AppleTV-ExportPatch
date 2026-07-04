/* Runtime dump - HMDHAPMetadataCharacteristic
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataCharacteristic : NSObject <NSSecureCoding>
{
    HAPMetadataCharacteristic * _hapCharacteristicMetadata;
    HMDHAPMetadataCharacteristicValue * _valueMetadata;
}

@property (retain, nonatomic) HAPMetadataCharacteristic * hapCharacteristicMetadata;
@property (retain, nonatomic) HMDHAPMetadataCharacteristicValue * valueMetadata;

+ (char)supportsSecureCoding;

- (HMDHAPMetadataCharacteristic *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMDHAPMetadataCharacteristic *)init;
- (void).cxx_destruct;
- (HMDHAPMetadataCharacteristicValue *)valueMetadata;
- (void)setValueMetadata:(HMDHAPMetadataCharacteristicValue *)arg0;
- (void)setHapCharacteristicMetadata:(HAPMetadataCharacteristic *)arg0;
- (HMDHAPMetadataCharacteristic *)initWithHAPCharacteristic:(HAPCharacteristic *)arg0;
- (HAPMetadataCharacteristic *)hapCharacteristicMetadata;

@end
