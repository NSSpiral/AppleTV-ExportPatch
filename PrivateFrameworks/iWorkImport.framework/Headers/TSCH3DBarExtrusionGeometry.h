/* Runtime dump - TSCH3DBarExtrusionGeometry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DBarExtrusionGeometry : TSCH3DExtrusionGeometry
{
    struct BarExtrusionSetting mExtrusionSetting;
    TSCH3DNormalDirectionMapper * mNormalDirectionMapper;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > mNormalizedSpine;
    float mScaleMappingStartingHeight;
    float mBottomCapScale;
}

@property (nonatomic) struct BarExtrusionSetting extrusionSetting;
@property (readonly, nonatomic) TSCH3DNormalDirectionMapper * normalDirectionMapper;
@property (readonly, nonatomic) float scaleMappingStartingHeight;
@property (readonly, nonatomic) float bottomCapScale;
@property (readonly, nonatomic) char isCylindrical;
@property (readonly, nonatomic) char hasTopBevel;
@property (readonly, nonatomic) char hasBottomBevel;
@property (readonly, nonatomic) float size;

+ (TSCH3DBarExtrusionGeometry *)namedBevelInterpolationShaderFunction;

- (TSCH3DNormalDirectionMapper *)normalDirectionMapper;
- (unsigned int)capOffset;
- (void)generateArrays;
- (void)p_insertCrossPointsIntoVector:(struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > *)arg0;
- (char)hasBottomBevel;
- (char)hasTopBevel;
- (void)p_updateNormalizedSpineScaleMappingsUsingTransform:(struct tmat4x4<float> *)arg0 forSpineGenerator:(struct tmat4x4<float>)arg1;
- (void)debug_printDataPoints;
- (char)isCylindrical;
- (unsigned int)geometryOffset;
- (int)capCount;
- (NSArray *)selectionKnobPositions;
- (struct BarExtrusionSetting)extrusionSetting;
- (void)setExtrusionSetting:(struct BarExtrusionSetting)arg0;
- (float)scaleMappingStartingHeight;
- (float)bottomCapScale;
- (void)dealloc;
- (float)size;
- (TSCH3DBarExtrusionGeometry *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (int)geometryCount;

@end
