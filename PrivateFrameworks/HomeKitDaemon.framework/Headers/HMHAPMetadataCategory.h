/* Runtime dump - HMHAPMetadataCategory
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMHAPMetadataCategory : NSObject <NSSecureCoding>
{
    NSString * _uuidStr;
    NSString * _catDescription;
}

@property (retain, nonatomic) NSString * uuidStr;
@property (retain, nonatomic) NSString * catDescription;

+ (char)supportsSecureCoding;

- (HMHAPMetadataCategory *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSString *)uuidStr;
- (void)setUuidStr:(NSString *)arg0;
- (NSString *)catDescription;
- (void)setCatDescription:(NSString *)arg0;

@end
