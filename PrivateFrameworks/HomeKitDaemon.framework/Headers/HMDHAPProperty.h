/* Runtime dump - HMDHAPProperty
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPProperty : NSObject <NSSecureCoding>
{
    HAPMetadataProperty * _hapPropertyMetadata;
}

@property (retain, nonatomic) HAPMetadataProperty * hapPropertyMetadata;

+ (char)supportsSecureCoding;

- (HMDHAPProperty *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMDHAPProperty *)init;
- (void).cxx_destruct;
- (void)setHapPropertyMetadata:(HAPMetadataProperty *)arg0;
- (HMDHAPProperty *)initWithHAPProperty:(NSObject *)arg0;
- (HAPMetadataProperty *)hapPropertyMetadata;

@end
