/* Runtime dump - TSCH3DGetBoundsRenderProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetBoundsRenderProcessor : TSCH3DTransformGeometryRenderProcessor
{
    int mMode;
    struct ObjectBounds mBounds;
}

@property (nonatomic) int mode;
@property (readonly, nonatomic) struct ObjectBounds * bounds;

- (void)submit:(struct PrimitiveInfo *)arg0;
- (void)resetBounds;
- (void)extend2DProjectedBounds:(struct box<glm::detail::tvec3<float> > *)arg0;
- (struct ObjectBounds *)bounds;
- (TSCH3DGetBoundsRenderProcessor *)init;
- (void)setMode:(int)arg0;
- (int)mode;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
