/* Runtime dump - HMDHAPMetadataUnit
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataUnit : NSObject <NSSecureCoding>
{
    HAPMetadataUnit * _hapUnitMetadata;
}

@property (retain, nonatomic) HAPMetadataUnit * hapUnitMetadata;

+ (char)supportsSecureCoding;

- (HMDHAPMetadataUnit *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMDHAPMetadataUnit *)init;
- (void).cxx_destruct;
- (void)setHapUnitMetadata:(HAPMetadataUnit *)arg0;
- (HMDHAPMetadataUnit *)initWithHAPUnit:(id)arg0;
- (HAPMetadataUnit *)hapUnitMetadata;

@end
