/* Runtime dump - TSCH3DVerticalChartTitlePositioner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DVerticalChartTitlePositioner : TSCH3DChartTitlePositioner

- (struct LabelTransform)mainTitleTransform;
- (struct LabelTransform)valueAxisTitleTransform;
- (struct LabelTransform)categoryAxisTitleTransform;
- (float)categoryVerticalPadding;
- (struct tvec2<float>)sizeOfValueAxisLabelsForAlignment:(unsigned int)arg0;

@end
