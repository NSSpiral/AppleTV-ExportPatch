/* Runtime dump - CHDValueAxis
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDValueAxis : CHDAxis
{
    BOOL mPercentageFormattingFlag;
    BOOL mAutoMajorUnitValue;
    BOOL mAutoMinorUnitValue;
    double mMajorUnitValue;
    double mMinorUnitValue;
    double mScalingLogBase;
}

- (CHDValueAxis *)initWithResources:(NSArray *)arg0;
- (void)setMajorUnitValue:(double)arg0;
- (void)setMinorUnitValue:(double)arg0;
- (void)setScalingLogBase:(double)arg0;
- (double)minorUnitValue;
- (BOOL)isAutoMinorUnitValue;
- (double)majorUnitValue;
- (BOOL)isAutoMajorUnitValue;
- (double)scalingLogBase;
- (void)adjustAxisPositionForHorizontalChart;
- (void)setPercentageFormattingFlag:(BOOL)arg0;
- (BOOL)isPercentageFormattingFlag;

@end
