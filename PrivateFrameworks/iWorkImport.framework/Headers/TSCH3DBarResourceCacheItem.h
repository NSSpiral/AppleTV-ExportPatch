/* Runtime dump - TSCH3DBarResourceCacheItem
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarResourceCacheItem : NSObject
{
    TSCH3DBarExtrusionGeometry * mBarGeometry;
    TSCH3DBarVertexResource * mVertexResource;
    TSCH3DBarNormalResource * mNormalResource;
    TSCH3DBarTexCoordResource * mTexCoordResource;
}

@property (readonly, nonatomic) TSCH3DBarVertexResource * vertexResource;
@property (readonly, nonatomic) TSCH3DBarNormalResource * normalResource;
@property (readonly, nonatomic) TSCH3DBarTexCoordResource * texCoordResource;

+ (TSCH3DBarResourceCacheItem *)itemWithExtrusionSetting:(struct BarExtrusionSetting *)arg0;

- (TSCH3DBarVertexResource *)vertexResource;
- (TSCH3DBarNormalResource *)normalResource;
- (TSCH3DBarTexCoordResource *)texCoordResource;
- (TSCH3DBarResourceCacheItem *)initWithExtrusionSetting:(struct BarExtrusionSetting *)arg0;
- (void)dealloc;

@end
