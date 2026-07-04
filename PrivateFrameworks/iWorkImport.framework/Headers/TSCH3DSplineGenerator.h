/* Runtime dump - TSCH3DSplineGenerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSplineGenerator : NSObject
{
    float mDetail;
    float mTension;
    float mAdaptiveThreshold;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > mControlPts;
    struct vector<int, std::__1::allocator<int> > mSplineExclude;
}

@property (nonatomic) float detail;
@property (nonatomic) float tension;
@property (nonatomic) float adaptiveThreshold;

+ (void *)generator;

- (struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > *)controlPts;
- (void)setTension:(float)arg0;
- (void)setAdaptiveThreshold:(float)arg0;
- (void)generatePoints:(struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > *)arg0;
- (void)calcControlMatrix:(struct tmat4x4<float> *)arg0 pointNum:(id)arg1;
- (struct vector<int, std::__1::allocator<int> > *)splineExclude;
- (float)tension;
- (float)adaptiveThreshold;
- (TSCH3DSplineGenerator *)init;
- (void)setDetail:(float)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)isClosed;
- (float)detail;

@end
