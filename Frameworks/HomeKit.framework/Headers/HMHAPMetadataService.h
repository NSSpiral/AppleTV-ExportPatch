/* Runtime dump - HMHAPMetadataService
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMHAPMetadataService : NSObject <NSSecureCoding>
{
    NSString * _name;
    NSString * _svcDescription;
    NSString * _localizedDescription;
    NSString * _type;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * svcDescription;
@property (retain, nonatomic) NSString * localizedDescription;
@property (retain, nonatomic) NSString * type;

+ (char)supportsSecureCoding;

- (HMHAPMetadataService *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)localizedDescription;
- (void).cxx_destruct;
- (NSString *)svcDescription;
- (void)setSvcDescription:(NSString *)arg0;
- (void)setLocalizedDescription:(NSString *)arg0;

@end
