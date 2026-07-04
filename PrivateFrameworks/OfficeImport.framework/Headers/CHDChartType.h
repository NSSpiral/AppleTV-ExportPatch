/* Runtime dump - CHDChartType
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDChartType : NSObject
{
    CHDChart * mChart;
    EDCollection * mAxisIds;
    CHDSeriesCollection * mSeries;
    CHDDataLabel * mDefaultDataLabel;
    BOOL mVaryColors;
}

+ (CHDChartType *)chartTypeWithChart:(id)arg0;
+ (BOOL)is3DType;

- (void)dealloc;
- (BOOL)isHorizontal;
- (EDContentFormat *)contentFormat;
- (id)axes;
- (CHDSeriesCollection *)seriesCollection;
- (NSString *)defaultDataLabel;
- (BOOL)chart;
- (CHDChartType *)initWithChart:(GQHChart *)arg0;
- (void)setVaryColors:(BOOL)arg0;
- (id)axisIds;
- (void)setDefaultDataLabel:(NSString *)arg0;
- (int)defaultLabelPosition;
- (BOOL)isPlotedOnSecondaryAxis;
- (unsigned int)seriesCount;
- (unsigned int)categoryCount;
- (void)setSeriesCollection:(CHDSeriesCollection *)arg0;
- (BOOL)isVaryColors;
- (NSArray *)defaultTitleWithResources:(NSArray *)arg0;
- (NSObject *)axisForClass:(Class)arg0;

@end
