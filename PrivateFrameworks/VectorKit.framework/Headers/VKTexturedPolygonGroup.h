/* Runtime dump - VKTexturedPolygonGroup
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTexturedPolygonGroup : VKPolygonGroup
{
    VKSharedResources * _sharedResources;
    struct shared_ptr<ggl::Texture2D> _texture;
    struct shared_ptr<ggl::Texture2D> _textureVariant;
    char _needsTextureUpdate;
}

@property (readonly, nonatomic) GEOFeatureStyleAttributes * styleAttributes;
@property (readonly, nonatomic) struct Texture2D * texture;
@property (readonly, nonatomic) struct Texture2D * textureVariant;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct Texture2D *)texture;
- (void)updateTexturesIfNecessary;
- (struct Texture2D *)textureVariant;
- (GEOFeatureStyleAttributes *)styleAttributes;
- (void)setNeedsTextureUpdate;
- (void)updateTextures;
- (VKTexturedPolygonGroup *)initWithStyleQuery:(struct shared_ptr<md::StyleQuery> *)arg0 tile:(struct __shared_weak_count *)arg1 fixedAroundCentroid:(id)arg2 contentScale:(float)arg3 sharedResources:(struct Matrix<float, 2, 1> *)arg4;
- (struct shared_ptr<ggl::Texture2D>)_textureForName:(NSString *)arg0;

@end
