/* Runtime dump - CHDCategoryAxis
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDCategoryAxis : CHDAxis
{
    BOOL mAutomatic;
    BOOL mNoMultipleLevelLabel;
    int mLabelAlignment;
    long mLabelFrequency;
    BOOL mLabelFrequencyAutomatic;
    BOOL mShowSeriesNames;
}

- (CHDCategoryAxis *)initWithResources:(NSArray *)arg0;
- (void)setLabelFrequency:(long)arg0;
- (long)labelFrequency;
- (void)adjustAxisPositionForHorizontalChart;
- (BOOL)isAutomatic;
- (void)setAutomatic:(BOOL)arg0;
- (BOOL)isNoMultipleLabellevel;
- (void)setNoMultipleLevelLabel:(BOOL)arg0;
- (int)labelAlignment;
- (void)setLabelAlignment:(int)arg0;
- (void)setShowSeriesLabels:(BOOL)arg0;
- (BOOL)showSeriesLabels;
- (BOOL)isLabelFrequencyAutomatic;

@end
