/* Runtime dump - TSCH3DExtrusionGeometry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DExtrusionGeometry : TSCH3DGeometry
{
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > mCrossSection;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > mSpine;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > mScale;
    char mBeginCap;
    char mEndCap;
    float mCrossSectionCreaseAngle;
    float mSpineCreaseAngle;
    unsigned int mEndCapOffset;
    int mEndCapCount;
    unsigned int mBeginCapOffset;
    int mBeginCapCount;
    struct tvec3<float> mNormalBias;
    struct tvec3<float> mSpineDirectionBias;
}

@property (nonatomic) char beginCap;
@property (nonatomic) char endCap;
@property (nonatomic) float crossSectionCreaseAngle;
@property (nonatomic) float spineCreaseAngle;
@property (nonatomic) struct tvec3<float> normalBias;
@property (readonly, nonatomic) unsigned int capOffset;
@property (readonly, nonatomic) int capCount;
@property (nonatomic) struct tvec3<float> spineDirectionBias;

- (unsigned int)capOffset;
- (void)generateArrays;
- (void)setCrossSectionCreaseAngle:(float)arg0;
- (void)setSpineCreaseAngle:(float)arg0;
- (int)capCount;
- (void)setSpine:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)arg0;
- (void)setSpineDirectionBias:(struct tvec3<float>)arg0;
- (void)setNormalBias:(struct tvec3<float>)arg0;
- (void)setCrossSection:(struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > *)arg0;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)spine;
- (struct tvec3<float>)spineDirectionBias;
- (struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > *)crossSection;
- (void)debug_dumpGeometryBounds;
- (char)beginCap;
- (void)setBeginCap:(char)arg0;
- (float)crossSectionCreaseAngle;
- (float)spineCreaseAngle;
- (struct tvec3<float>)normalBias;
- (void)dealloc;
- (TSCH3DExtrusionGeometry *)init;
- (struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > *)scale;
- (void)setScale:(struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setEndCap:(char)arg0;
- (char)endCap;

@end
