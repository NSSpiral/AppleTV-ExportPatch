/* Runtime dump - TSCH3DSwitchSideAxisLabelPositioner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSwitchSideAxisLabelPositioner : TSCH3DGenericAxisLabelPositioner

- (unsigned int)alignmentForChartDirection:(struct tvec3<float> *)arg0;
- (struct tvec3<float>)positionForValue:(double)arg0 count:(unsigned int)arg1 chartDirection:(struct tvec3<float> *)arg2;
- (int)p_otherAxis;

@end
