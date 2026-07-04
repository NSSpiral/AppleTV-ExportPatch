/* Runtime dump - CKContainerID
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKContainerID : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _containerIdentifier;
    int _environment;
}

@property (readonly, nonatomic) NSString * containerIdentifier;
@property (readonly, nonatomic) int environment;

+ (char)supportsSecureCoding;

- (CKContainerID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)environment;
- (CKContainerID *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (CKContainerID *)initWithContainerIdentifier:(NSString *)arg0 environment:(int)arg1;
- (NSString *)CKPropertiesDescription;
- (NSString *)containerIdentifier;
- (CKContainerID *)initWithDictionaryRepresentation:(NSDictionary *)arg0;

@end
