/* Runtime dump - TSCH3DRectangleLens
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DRectangleLens : TSCH3DLens
{
    float mLeft;
    float mRight;
    float mBottom;
    float mTop;
}

@property (nonatomic) float left;
@property (nonatomic) float right;
@property (nonatomic) float bottom;
@property (nonatomic) float top;
@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) float height;

- (void)deviceNormalize;
- (void)setPerPixelSize:(struct tvec2<int> *)arg0;
- (id)narrowByNormalizedBounds:(struct box<glm::detail::tvec2<float> > *)arg0;
- (id)shiftByPercentage:(struct tvec2<float> *)arg0;
- (struct FrustumRect)frustumRect;
- (void)setPerPixel:(struct box<glm::detail::tvec2<int> > *)arg0;
- (id)narrowedByNormalizedBounds:(struct box<glm::detail::tvec2<float> > *)arg0;
- (id)shiftedByPercentage:(struct tvec2<float> *)arg0;
- (TSCH3DRectangleLens *)init;
- (NSString *)description;
- (TSCH3DRectangleLens *)copyWithZone:(struct _NSZone *)arg0;
- (float)width;
- (float)height;
- (void)setLeft:(float)arg0;
- (float)bottom;
- (void)setBottom:(float)arg0;
- (float)left;
- (float)right;
- (void)setRight:(float)arg0;
- (float)top;
- (void)setTop:(float)arg0;
- (void)normalize;

@end
