/* Runtime dump - TSCH3DChartResizer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartResizer : NSObject
{
    TSCH3DChartBoundsLayout * mLayout;
    TSCH3DChartType * mChartType;
    TSCH3DScene * mScene;
    struct ChartScenePropertyAccessor * mAccessor;
    float mMinStep;
    float mPrecision;
    struct ResizeData mPrevious;
    struct ResizeData mCurrent;
    struct tvec2<float> mTarget;
    unsigned int mIndex;
    struct ? mLayoutSettings;
}

@property (nonatomic) float minStep;
@property (nonatomic) float precision;

+ (struct tvec2<float>)adjustLabelWrapSize:(struct tvec2<float> *)arg0;
+ (float)perspectiveness;
+ (struct tvec2<float>)adjustLabelWrapSize:(struct tvec2<float> *)arg0 forScene:(struct tvec2<float>)arg1;
+ (NSObject *)resizerWithLayout:(NSObject *)arg0 chartType:(NSObject *)arg1;
+ (float)minimumSize;

- (void)setContainingViewport:(struct tvec2<int> *)arg0;
- (TSCH3DChartResizer *)initWithLayout:(NSObject *)arg0 chartType:(NSObject *)arg1;
- (float)maxDepthRatio;
- (struct tvec2<bool>)converges;
- (struct tvec3<float>)adjust:(struct tvec3<float> *)arg0 by:(float)arg1;
- (float)minScale;
- (struct tvec3<float>)adjust:(struct tvec3<float> *)arg0;
- (struct tvec3<float>)clamp:(struct tvec3<float> *)arg0;
- (struct tvec3<float>)clampDepthRatio:(struct tvec3<float> *)arg0;
- (struct tvec2<int>)containingViewportFromCurrentSize;
- (struct tvec2<bool>)canImprove;
- (void)updateResizeData;
- (char)currentCanImprove;
- (struct tvec3<float>)adjustedScale;
- (void)updateSteps;
- (char)checkImprovement;
- (char)allConverges;
- (char)resize1;
- (float)perspectiveness;
- (void)seedResizeCondition;
- (struct tvec2<int>)containingViewportFromSize:(struct tvec2<float> *)arg0;
- (void)adjustContainingViewport;
- (struct tvec2<float>)updateResizerFromRequestedSize:(struct tvec2<float> *)arg0 startingSize:(struct tvec2<float>)arg1;
- (void)initializeResizing:(struct tvec2<float> *)arg0;
- (void)readjustContainingViewport;
- (float)containingViewportThreshold;
- (void)gingerClamp;
- (struct tvec2<float>)resize:(struct tvec2<float> *)arg0 startingSize:(struct tvec2<float>)arg1;
- (float)minStep;
- (void)setMinStep:(float)arg0;
- (float)precision;
- (void)setPrecision:(float)arg0;
- (void)dealloc;
- (void)setScale:(struct tvec3<float> *)arg0;
- (void).cxx_construct;
- (float)step;
- (void)loop;
- (void)setStep:(float)arg0;

@end
