/* Runtime dump - CPLPersonReference
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPersonReference : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _personIdentifier;
    NSDictionary * _extraProperties;
}

@property (copy, nonatomic) NSString * personIdentifier;
@property (copy, nonatomic) NSDictionary * extraProperties;

+ (char)supportsSecureCoding;

- (CPLPersonReference *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CPLPersonReference *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CPLPersonReference *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (CPLPersonReference *)initWithSerializedString:(NSString *)arg0;
- (NSString *)serializedString;
- (void)setPersonIdentifier:(NSString *)arg0;
- (void)setExtraProperties:(NSDictionary *)arg0;
- (NSString *)personIdentifier;
- (NSDictionary *)extraProperties;

@end
