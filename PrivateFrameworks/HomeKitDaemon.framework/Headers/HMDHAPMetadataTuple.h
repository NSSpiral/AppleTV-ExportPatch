/* Runtime dump - HMDHAPMetadataTuple
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataTuple : NSObject <NSSecureCoding>
{
    HAPMetadataTuple * _hapMetadataTuple;
}

@property (retain, nonatomic) HAPMetadataTuple * hapMetadataTuple;

+ (char)supportsSecureCoding;

- (HMDHAPMetadataTuple *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMDHAPMetadataTuple *)init;
- (void).cxx_destruct;
- (void)setHapMetadataTuple:(HAPMetadataTuple *)arg0;
- (HMDHAPMetadataTuple *)initWithHAPTuple:(id)arg0;
- (HAPMetadataTuple *)hapMetadataTuple;

@end
