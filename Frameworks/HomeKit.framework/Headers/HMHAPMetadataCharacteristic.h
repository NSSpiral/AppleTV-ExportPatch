/* Runtime dump - HMHAPMetadataCharacteristic
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHAPMetadataCharacteristic : NSObject <NSSecureCoding>
{
    NSString * _name;
    NSString * _chrDescription;
    NSString * _localizedDescription;
    NSString * _type;
    NSString * _format;
    NSString * _unit;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * chrDescription;
@property (retain, nonatomic) NSString * localizedDescription;
@property (retain, nonatomic) NSString * type;
@property (retain, nonatomic) NSString * format;
@property (retain, nonatomic) NSString * unit;

+ (char)supportsSecureCoding;

- (HMHAPMetadataCharacteristic *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)localizedDescription;
- (void).cxx_destruct;
- (NSString *)chrDescription;
- (void)setChrDescription:(NSString *)arg0;
- (void)setLocalizedDescription:(NSString *)arg0;
- (NSString *)unit;
- (void)setUnit:(NSString *)arg0;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;

@end
