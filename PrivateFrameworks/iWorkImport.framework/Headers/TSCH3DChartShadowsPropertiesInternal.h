/* Runtime dump - TSCH3DChartShadowsPropertiesInternal
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartShadowsPropertiesInternal : NSObject
{
    char mEnabled;
    TSCH3DCamera * mCamera;
    TSCH3DDataBufferResource * mQuad;
    TSCH3DDataBufferResource * mTexcoords;
    TSCH3DDataBufferResource * mFadecoords;
    NSObject<TSCH3DShadowsRenderer> * mRenderer;
    struct box<glm::detail::tvec3<float> > mShadowPlanePadding;
}

@property (nonatomic) char enabled;
@property (readonly, nonatomic) char shadowPlaneValid;
@property (retain, nonatomic) TSCH3DCamera * camera;
@property (retain, nonatomic) TSCH3DDataBufferResource * quad;
@property (retain, nonatomic) TSCH3DDataBufferResource * texcoords;
@property (retain, nonatomic) TSCH3DDataBufferResource * fadecoords;
@property (readonly, nonatomic) NSObject<TSCH3DShadowsRenderer> * renderer;

- (TSCH3DDataBufferResource *)texcoords;
- (void)setTexcoords:(TSCH3DDataBufferResource *)arg0;
- (void)setupResources;
- (TSCH3DChartShadowsPropertiesInternal *)initWithCamera:(TSCH3DCamera *)arg0 renderer:(NSObject<TSCH3DShadowsRenderer> *)arg1;
- (char)shadowPlaneValid;
- (TSCH3DDataBufferResource *)fadecoords;
- (void)setFadecoords:(TSCH3DDataBufferResource *)arg0;
- (void)dealloc;
- (void)invalidate;
- (void)setEnabled:(char)arg0;
- (char)enabled;
- (TSCH3DDataBufferResource *)quad;
- (void).cxx_construct;
- (void)setQuad:(TSCH3DDataBufferResource *)arg0;
- (NSObject<TSCH3DShadowsRenderer> *)renderer;
- (TSCH3DCamera *)camera;
- (void)setCamera:(TSCH3DCamera *)arg0;

@end
