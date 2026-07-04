/* Runtime dump - TSCH3DLabelsRendererTransforms
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLabelsRendererTransforms : NSObject
{
    TSCH3DScene * mScene;
    TSCH3DCamera * mCamera;
    struct ChartScenePropertyAccessor * mAccessor;
    struct tmat4x4<float> mProjector;
    struct tmat4x4<float> mUnitToWorld;
    struct tmat4x4<float> mStageToWorld;
    struct tmat4x4<float> mWorldToStage;
    struct bitset<5> mValidBits;
}

@property (retain, nonatomic) TSCH3DScene * scene;
@property (retain, nonatomic) TSCH3DCamera * camera;

+ (NSString *)transforms;

- (void)resetWithScene:(TSCH3DScene *)arg0 camera:(TSCH3DCamera *)arg1;
- (struct ChartScenePropertyAccessor *)accessor;
- (struct tmat4x4<float> *)p_stageToWorld;
- (struct tmat4x4<float> *)unitToWorld;
- (struct tmat4x4<float> *)p_projector;
- (struct tmat4x4<float> *)worldToStage;
- (TSCH3DScene *)scene;
- (void)setScene:(TSCH3DScene *)arg0;
- (struct tvec3<float>)projectPoint:(struct tvec3<float> *)arg0;
- (void)dealloc;
- (void).cxx_construct;
- (struct tvec3<float>)samples;
- (TSCH3DCamera *)camera;
- (void)setCamera:(TSCH3DCamera *)arg0;

@end
