/* Runtime dump - CHDPlotArea
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDPlotArea : NSObject
{
    CHDChartTypesCollection * mChartTypes;
    CHDAxesCollection * mAxes;
    OADGraphicProperties * mGraphicProperties;
    BOOL mCategoryAxesReversed;
    BOOL mCategoryAxesReversedOverridden;
    BOOL mContainsVolumeStockType;
}

- (void)dealloc;
- (NSDictionary *)graphicProperties;
- (id)axes;
- (CHDPlotArea *)initWithChart:(GQHChart *)arg0;
- (void)setGraphicProperties:(NSDictionary *)arg0;
- (NSArray *)chartTypes;
- (BOOL)hasSecondaryAxis;
- (BOOL)hasSecondaryYAxisDeleted;
- (void)markSecondaryAxes;
- (BOOL)containsVolumeStockType;
- (BOOL)isCategoryAxesReversed:(BOOL)arg0;
- (void)setContainsVolumeStockType:(BOOL)arg0;

@end
