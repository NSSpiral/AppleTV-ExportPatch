/* Runtime dump - HMDHAPMetadataCategory
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataCategory : NSObject <NSSecureCoding>
{
    NSNumber * _identifier;
    NSString * _uuidStr;
    NSString * _name;
    NSString * _catDescription;
}

@property (retain, nonatomic) NSNumber * identifier;
@property (retain, nonatomic) NSString * uuidStr;
@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSString * catDescription;

+ (char)supportsSecureCoding;

- (HMDHAPMetadataCategory *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMDHAPMetadataCategory *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSNumber *)identifier;
- (void)setIdentifier:(NSNumber *)arg0;
- (void).cxx_destruct;
- (NSDictionary *)generateDictionary;
- (NSString *)uuidStr;
- (void)setUuidStr:(NSString *)arg0;
- (NSString *)catDescription;
- (HMDHAPMetadataCategory *)initWithIdentifier:(NSNumber *)arg0 uuid:(NSUUID *)arg1 name:(NSString *)arg2 description:(NSString *)arg3;
- (void)setCatDescription:(NSString *)arg0;

@end
