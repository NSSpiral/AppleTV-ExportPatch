/* Runtime dump - TSCH3DTransformGeometryRenderProcessor
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DTransformGeometryRenderProcessor : TSCH3DRetargetRenderProcessor
{
    TSCH3DDataBuffer * mBuffer;
}

@property (readonly, nonatomic) TSCH3DDataBuffer * buffer;

+ (TSCH3DTransformGeometryRenderProcessor *)processorWithOriginal:(TSCH3DRenderProcessor *)arg0;

- (void)geometry:(TSDInfoGeometry *)arg0;
- (TSCH3DTransformGeometryRenderProcessor *)initWithOriginal:(TSCH3DRenderProcessor *)arg0;
- (void)setOriginal:(TSCH3DRenderProcessor *)arg0;
- (void)dealloc;
- (TSCH3DTransformGeometryRenderProcessor *)init;
- (TSCH3DDataBuffer *)buffer;
- (struct tmat4x4<float>)matrix;

@end
