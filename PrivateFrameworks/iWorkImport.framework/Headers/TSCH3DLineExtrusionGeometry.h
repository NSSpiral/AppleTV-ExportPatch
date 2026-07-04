/* Runtime dump - TSCH3DLineExtrusionGeometry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DLineExtrusionGeometry : TSCH3DExtrusionGeometry
{
    struct tvec2<float> mYlimits;
    struct tvec2<float> mXlimits;
}

@property (nonatomic) struct tvec2<float> ylimits;
@property (nonatomic) struct tvec2<float> xlimits;

+ (NSArray *)lineFromValues:(struct vector<float, std::__1::allocator<float> > *)arg0 yLimits:(struct vector<float, std::__1::allocator<float> >)arg1;

- (void)generateArrays;
- (NSArray *)selectionKnobPositions;
- (void)setYlimits:(struct tvec2<float>)arg0;
- (void)setXlimits:(struct tvec2<float>)arg0;
- (void)setSpine:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)arg0;
- (struct tmat3x3<float>)p_rotationMatrixForCrossSectionIndex:(NSObject *)arg0;
- (struct tmat4x4<float>)matrixAtXPosition:(NSObject *)arg0 returningXRangeInfo:(SEL)arg1;
- (NSArray *)elementsBoundsPositions;
- (struct tvec2<float>)ylimits;
- (struct tvec2<float>)xlimits;
- (TSCH3DLineExtrusionGeometry *)init;
- (void).cxx_construct;

@end
