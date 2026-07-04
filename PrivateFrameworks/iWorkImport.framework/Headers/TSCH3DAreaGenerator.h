/* Runtime dump - TSCH3DAreaGenerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DAreaGenerator : NSObject
{
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > mTop;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > mBottom;
    struct tvec2<float> mYLimits;
    float mZeroValue;
}

+ (TSCH3DAreaGenerator *)generatorWithYLimits:(struct tvec2<float>)arg0 zeroValue:(float)arg1;

- (NSObject *)createGeometry:(struct vector<float, std::__1::allocator<float> > *)arg0;
- (TSCH3DAreaGenerator *)initWithYLimits:(struct tvec2<float>)arg0 zeroValue:(float)arg1;
- (float)clampedZero;
- (void)clipLine:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > *)arg0 into:(struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >)arg1;
- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)addRow:(struct vector<float, std::__1::allocator<float> > *)arg0;

@end
