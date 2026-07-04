/* Runtime dump - TSCH3DChartPieResizer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartPieResizer : TSCH3DChartResizer
{
    struct tvec2<bool> mDirections;
}

+ (struct tvec2<float>)adjustLabelWrapSize:(struct tvec2<float> *)arg0;
+ (float)perspectiveness;

- (struct tvec3<float>)adjust:(struct tvec3<float> *)arg0 by:(float)arg1;
- (struct tvec2<bool>)canImprove;
- (struct tvec2<float>)updateResizerFromRequestedSize:(struct tvec2<float> *)arg0 startingSize:(struct tvec2<float>)arg1;
- (struct tvec2<float>)squareSize:(struct tvec2<float> *)arg0;
- (struct tvec2<float>)updateDirectionsFromRequestedSize:(struct tvec2<float> *)arg0 startingSize:(struct tvec2<float>)arg1;
- (void)setScale:(struct tvec3<float> *)arg0;
- (void).cxx_construct;

@end
