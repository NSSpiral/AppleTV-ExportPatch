/* Runtime dump - HMHAPMetadataUnit
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMHAPMetadataUnit : NSObject <NSSecureCoding>
{
    NSString * _name;
    NSString * _unitDescription;
    NSString * _localizedDescription;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * unitDescription;
@property (retain, nonatomic) NSString * localizedDescription;

+ (char)supportsSecureCoding;

- (HMHAPMetadataUnit *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)localizedDescription;
- (void).cxx_destruct;
- (NSString *)unitDescription;
- (void)setUnitDescription:(NSString *)arg0;
- (void)setLocalizedDescription:(NSString *)arg0;

@end
