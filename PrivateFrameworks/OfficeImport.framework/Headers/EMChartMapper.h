/* Runtime dump - EMChartMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMChartMapper : CMMapper
{
    CHDChart * mChart;
    CMState * mState;
    EDResources * mResources;
    CHDChartType * mMainType;
    CHDSeries * mMainSeries;
    CHDAxis * mBaseAxis;
    CHDAxis * mPrimaryAxis;
    CHDAxis * mSecondaryAxis;
    char mIsHorizontal;
    char mIsStacked;
    char mIsPercentStacked;
    unsigned int mPieIndex;
    struct ? mPlotInfos;
    char mHasDateCategory;
    char mHasPrimaryDateAxis;
    char mHasSecondaryDateAxis;
}

+ (struct CGColor *)newColorWithCalibratedRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;

- (void).cxx_construct;
- (void)addTitleToDescription:(NSString *)arg0 withState:(NSObject *)arg1;
- (void)addBackgroundToDescription:(NSString *)arg0 withState:(NSObject *)arg1;
- (void)addLegendToDescription:(NSString *)arg0 chartSize:(struct CGSize)arg1 withState:(NSObject *)arg2;
- (void)_addCategoryAxis:(CHXCategoryAxis *)arg0 series:(struct Transform * *)arg1 state:(NSObject *)arg2 toDescription:(NSString *)arg3;
- (void)_addUnitAxis:(id)arg0 series:(struct Transform * *)arg1 state:(NSObject *)arg2 toDescription:(NSString *)arg3;
- (void)addSeries:(CHDPieSeries *)arg0 toDescription:(NSString *)arg1 withState:(NSObject *)arg2;
- (NSNumber *)dateFromXlDateTimeNumber:(double)arg0;
- (void)_addGraphicProperties:(NSDictionary *)arg0 toDescription:(NSString *)arg1 withState:(NSObject *)arg2;
- (void)_addStandardSeries:(id)arg0 toDescription:(NSString *)arg1 withState:(NSObject *)arg2;
- (EMChartMapper *)initWithChart:(GQHChart *)arg0 parent:(NSObject *)arg1;
- (NSObject *)copyPdfWithState:(NSObject *)arg0 withSize:(struct CGSize)arg1;

@end
