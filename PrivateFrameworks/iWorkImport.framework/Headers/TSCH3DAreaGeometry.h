/* Runtime dump - TSCH3DAreaGeometry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DAreaGeometry : TSCH3DGeometry
{
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > mTopLine;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > mBottomLine;
    float mMinZ;
    float mMaxZ;
    float mZeroValue;
    unsigned int mCapOffset;
    int mCapCount;
    char mStacked;
}

@property (nonatomic) float minZ;
@property (nonatomic) float maxZ;
@property (nonatomic) float zeroValue;
@property (nonatomic) char stacked;

- (unsigned int)capOffset;
- (void)generateArrays;
- (int)capCount;
- (NSArray *)selectionKnobPositions;
- (NSArray *)elementsBoundsPositions;
- (void)setStacked:(char)arg0;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)bottomLine;
- (void)setTopLine:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)arg0 bottomLine:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >)arg1 zeroValue:(struct tvec3<float> *)arg2;
- (char)stacked;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)topLine;
- (struct tvec2<float>)bottomTopAtPosition:(float)arg0;
- (float)zeroValue;
- (void)setZeroValue:(float)arg0;
- (TSCH3DAreaGeometry *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (int)geometryCount;
- (float)minZ;
- (void)setMinZ:(float)arg0;
- (float)maxZ;
- (void)setMaxZ:(float)arg0;

@end
