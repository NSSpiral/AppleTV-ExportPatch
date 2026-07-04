/* Runtime dump - TSCH3DPieWedgeGeometry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPieWedgeGeometry : TSCH3DGeometry
{
    float mStartAngle;
    float mEndAngle;
    int mAngleSteps;
    int mRadiusSteps;
    int mBevelEdgeSteps;
    float mRadius;
    float mBottomZ;
    float mTopZ;
    int mCapOffset;
    int mCapCount;
    TSCH3DNormalDirectionMapper * mNormalDirectionMapper;
}

@property (nonatomic) float startAngle;
@property (nonatomic) float endAngle;
@property (nonatomic) int angleSteps;
@property (nonatomic) int radiusSteps;
@property (nonatomic) int bevelEdgeSteps;
@property (nonatomic) float radius;
@property (nonatomic) float bottomZ;
@property (nonatomic) float topZ;
@property (readonly, nonatomic) int capOffset;
@property (readonly, nonatomic) int capCount;
@property (readonly, nonatomic) TSCH3DNormalDirectionMapper * normalDirectionMapper;

- (TSCH3DNormalDirectionMapper *)normalDirectionMapper;
- (int)capOffset;
- (void)setAngleSteps:(int)arg0;
- (void)setRadiusSteps:(int)arg0;
- (void)setBevelEdgeSteps:(int)arg0;
- (void)setBottomZ:(float)arg0;
- (void)setTopZ:(float)arg0;
- (void)generateArrays;
- (int)capCount;
- (NSArray *)selectionKnobPositions;
- (float)bevelHeight;
- (void)generateRoundedTop:(struct vector<float, std::__1::allocator<float> > *)arg0 radiusArray:(NSArray *)arg1;
- (void)p_generateBevelCoordinates:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)arg0 andAngles:(struct tvec3<float> *)arg1 radiusArray:(struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > >)arg2 topArray:(NSArray *)arg3;
- (void)p_generateAngles:(struct vector<float, std::__1::allocator<float> > *)arg0;
- (char)isFullCircle;
- (float)topZ;
- (int)angleSteps;
- (int)radiusSteps;
- (float)bottomZ;
- (int)bevelEdgeSteps;
- (float)endAngle;
- (void)setEndAngle:(float)arg0;
- (void)dealloc;
- (TSCH3DPieWedgeGeometry *)init;
- (void)setStartAngle:(float)arg0;
- (float)startAngle;
- (float)radius;
- (void)setRadius:(float)arg0;
- (int)geometryCount;

@end
