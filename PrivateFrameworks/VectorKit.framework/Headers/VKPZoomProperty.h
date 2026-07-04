/* Runtime dump - VKPZoomProperty
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPZoomProperty : PBCodable <NSCopying>
{
    float _maxZ;
    float _minZ;
    VKPStyleProperties * _properties;
}

@property (nonatomic) float minZ;
@property (nonatomic) float maxZ;
@property (retain, nonatomic) VKPStyleProperties * properties;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (VKPZoomProperty *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void)setProperties:(VKPStyleProperties *)arg0;
- (VKPStyleProperties *)properties;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (float)minZ;
- (void)setMinZ:(float)arg0;
- (float)maxZ;
- (void)setMaxZ:(float)arg0;
- (void)applyTo:(id)arg0 zoom:(float)arg1;

@end
