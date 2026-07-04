/* Runtime dump - GQDChart
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDChart : GQDGraphic
{
    GQDChartLegend * mLegend;
    char mIsLegendRetained;
    GQDChartModel * mModel;
    GQDSStyle * mStyle;
    long mType;
}

+ (struct StateSpec *)stateForReading;

- (NSObject *)graphicStyle;
- (void)dealloc;
- (long)type;
- (NSDictionary *)style;
- (ABModel *)model;
- (TSCHLegendModel *)legend;
- (void)setLegend:(TSCHLegendModel *)arg0;

@end
