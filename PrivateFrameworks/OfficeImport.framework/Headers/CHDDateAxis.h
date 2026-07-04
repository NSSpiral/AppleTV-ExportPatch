/* Runtime dump - CHDDateAxis
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDateAxis : CHDAxis
{
    BOOL mAutomatic;
    double mMajorUnitValue;
    double mMinorUnitValue;
    int mMinorTimeUnit;
    int mMajorTimeUnit;
    int mBaseTimeUnit;
}

- (CHDDateAxis *)initWithResources:(NSArray *)arg0;
- (void)setMajorUnitValue:(double)arg0;
- (void)setMinorUnitValue:(double)arg0;
- (double)minorUnitValue;
- (double)majorUnitValue;
- (BOOL)isDate;
- (BOOL)isAutomatic;
- (void)setAutomatic:(BOOL)arg0;
- (int)majorTimeUnit;
- (void)setMajorTimeUnit:(int)arg0;
- (int)minorTimeUnit;
- (void)setMinorTimeUnit:(int)arg0;
- (int)baseTimeUnit;
- (void)setBaseTimeUnit:(int)arg0;

@end
