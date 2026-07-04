/* Runtime dump - RadioTrackAdInfo
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrackAdInfo : NSObject <NSSecureCoding>
{
    char _gatewayAdSlot;
    NSString * _slotIdentifier;
}

@property (readonly, nonatomic) char gatewayAdSlot;
@property (readonly, copy, nonatomic) NSString * slotIdentifier;

+ (char)supportsSecureCoding;

- (RadioTrackAdInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (RadioTrackAdInfo *)initWithAdInfoDictionary:(RadioTrackAdInfo *)arg0;
- (NSString *)slotIdentifier;
- (char)isGatewayAdSlot;

@end
