/* Runtime dump - CPLContainerRelation
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLContainerRelation : NSObject <NSSecureCoding, NSCopying>
{
    char _keyAsset;
    NSString * _containerIdentifier;
    int _position;
}

@property (copy, nonatomic) NSString * containerIdentifier;
@property (nonatomic) int position;
@property (nonatomic) char keyAsset;

+ (char)supportsSecureCoding;

- (CPLContainerRelation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CPLContainerRelation *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPosition:(int)arg0;
- (int)position;
- (void).cxx_destruct;
- (NSString *)proposedIdentifierForItemIdentifier:(NSString *)arg0;
- (void)setKeyAsset:(char)arg0;
- (NSString *)containerIdentifier;
- (char)isKeyAsset;
- (void)setContainerIdentifier:(NSString *)arg0;

@end
