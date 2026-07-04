/* Runtime dump - TSCH3DExtrusionDoubleBevelGenerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DExtrusionDoubleBevelGenerator : NSObject
{
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > mInputSpinePoints;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > mSpinePoints;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > mScaleValues;
    float mBevelHeight;
    int mBevelSlices;
    char mEnableBevelEdges;
}

@property (nonatomic) float bevelHeight;
@property (nonatomic) int bevelSlices;
@property (nonatomic) char enableBevelEdges;
@property (readonly, nonatomic) int bottomNonBevelStartIndex;
@property (readonly, nonatomic) int bottomBevelStartIndex;

+ (TSCH3DExtrusionDoubleBevelGenerator *)namedBevelInterpolationShaderFunction;
+ (void *)generator;

- (int)bottomNonBevelStartIndex;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)inputSpinePoints;
- (void)setBevelHeight:(float)arg0;
- (void)setBevelSlices:(int)arg0;
- (void)setEnableBevelEdges:(char)arg0;
- (void)generate;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)spinePoints;
- (struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > *)scaleValues;
- (float)bevelHeight;
- (void)createSpinePointArray;
- (void)generateTop;
- (void)generateBottom;
- (void)adjustBottomOffset;
- (void)resetAllScales;
- (void)adjustTopScales;
- (void)adjustBottomScales;
- (int)bottomSlices;
- (int)topSlices;
- (int)topBevelStartIndex;
- (float)spineUValueAtIndex:(int)arg0;
- (int)bottomBevelStartIndex;
- (struct tvec3<float>)bottomDirection;
- (float)scaleUValueAtIndex:(int)arg0;
- (int)bevelSlices;
- (char)enableBevelEdges;
- (TSCH3DExtrusionDoubleBevelGenerator *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
