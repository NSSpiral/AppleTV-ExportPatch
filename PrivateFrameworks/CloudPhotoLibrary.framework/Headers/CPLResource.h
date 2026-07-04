/* Runtime dump - CPLResource
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLResource : NSObject <NSSecureCoding, NSCopying>
{
    char _generateDerivative;
    char _canGenerateDerivative;
    CPLResourceIdentity * _identity;
    NSString * _itemIdentifier;
    unsigned int _resourceType;
}

@property (retain, nonatomic) CPLResourceIdentity * identity;
@property (copy, nonatomic) NSString * itemIdentifier;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic) char generateDerivative;
@property (nonatomic) char canGenerateDerivative;

+ (char)supportsSecureCoding;
+ (NSArray *)normalizedResourcesFromResources:(NSArray *)arg0;
+ (char)hasPriorityBoostForResourceType:(unsigned int)arg0;
+ (char)cplShouldIgnorePropertyForEquality:(id)arg0;
+ (NSObject *)shortDescriptionForResourceType:(unsigned int)arg0;
+ (NSObject *)descriptionForResourceType:(unsigned int)arg0;
+ (unsigned int)maxPixelSizeForResourceType:(unsigned int)arg0;
+ (float)derivativeGenerationThreshold;

- (char)deleteAfterUpload;
- (void)setDeleteAfterUpload:(char)arg0;
- (void)setItemIdentifier:(NSString *)arg0;
- (CPLResource *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CPLResource *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSObject *)bestFileNameForResource;
- (CPLResource *)initWithResourceIdentity:(NSObject *)arg0 itemIdentifier:(NSString *)arg1;
- (void)setIdentity:(CPLResourceIdentity *)arg0;
- (void)setResourceType:(unsigned int)arg0;
- (char)generateDerivative;
- (void)setGenerateDerivative:(char)arg0;
- (char)canGenerateDerivative;
- (NSString *)itemIdentifier;
- (unsigned int)resourceType;
- (CPLResourceIdentity *)identity;
- (void)setCanGenerateDerivative:(char)arg0;
- (CPLResource *)initWithResourceIdentity:(NSObject *)arg0 itemIdentifier:(NSString *)arg1 resourceType:(unsigned int)arg2;

@end
