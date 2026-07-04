/* Runtime dump - HMDHAPMetadataCharacteristicValue
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataCharacteristicValue : NSObject <NSSecureCoding>
{
    HAPMetadataCharacteristicValue * _hapValueMetadata;
}

@property (retain, nonatomic) HAPMetadataCharacteristicValue * hapValueMetadata;

+ (char)supportsSecureCoding;

- (HMDHAPMetadataCharacteristicValue *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMDHAPMetadataCharacteristicValue *)init;
- (void).cxx_destruct;
- (void)setHapValueMetadata:(HAPMetadataCharacteristicValue *)arg0;
- (HMDHAPMetadataCharacteristicValue *)initWithHAPCharacteristicValue:(id)arg0;
- (HAPMetadataCharacteristicValue *)hapValueMetadata;

@end
