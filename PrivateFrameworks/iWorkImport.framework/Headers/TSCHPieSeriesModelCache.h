/* Runtime dump - TSCHPieSeriesModelCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPieSeriesModelCache : NSObject
{
    TSCHChartModel * mChartModel;
    TSCHChartInfo * mChartInfo;
    char mIsSingleCircleSpecialCase;
    TSCHChartSeries * mSingleCircleSeriesElement;
    unsigned int mNumberOfSeries;
    double mTotalValue;
    TSCHChartSeries * mCurrentSeries;
    unsigned int mCurrentSeriesIndex;
    double mCurrentSeriesAxisValue;
    double mCurrentSeriesPercentage;
    double mCurrentSeriesStartAngle;
    double mCurrentSeriesAngleSweep;
    char mCurrentSeriesNullData;
    double mMidAngle;
    double mEndAngle;
    float mWedgeExplosion;
    float mLabelExplosion;
    float mEffectiveWedgeExplosion;
    float mEffectiveLabelExplosion;
    NSString * mLabelString;
    TSWPParagraphStyle * mParagraphStyle;
    TSDShadow * mSeriesShadow;
    TSDStroke * mSeriesStroke;
    TSDFill * mSeriesFill;
    float mSeriesOpacity;
    char mGroupedShadow;
    TSCHChartAxis * mAxis;
}

@property (readonly) TSCHChartSeries * series;
@property (readonly) unsigned int seriesIndex;
@property (readonly) double totalValue;
@property (readonly) double seriesAxisValue;
@property (readonly) double startAngle;
@property (readonly) double midAngle;
@property (readonly) double endAngle;
@property (readonly) double percentage;
@property (readonly) char nullData;
@property (readonly) float wedgeExplosion;
@property (readonly) float labelExplosion;
@property (readonly) float effectiveWedgeExplosion;
@property (readonly) float effectiveLabelExplosion;
@property (readonly) char shouldRenderLabel;
@property (readonly) NSString * labelString;
@property (readonly) TSWPParagraphStyle * paragraphStyle;
@property (readonly) TSDShadow * seriesShadow;
@property (readonly) TSDStroke * seriesStroke;
@property (readonly) TSDFill * seriesFill;
@property (readonly) char groupedShadow;
@property (readonly) float seriesOpacity;
@property (readonly) TSCHChartAxis * axis;

- (TSWPParagraphStyle *)paragraphStyle;
- (double)midAngle;
- (char)shouldRenderLabel;
- (float)effectiveLabelExplosion;
- (double)seriesAxisValue;
- (TSDFill *)seriesFill;
- (TSDShadow *)seriesShadow;
- (TSDStroke *)seriesStroke;
- (float)seriesOpacity;
- (float)effectiveWedgeExplosion;
- (char)nullData;
- (TSCHPieSeriesModelCache *)initWithPrior:(id)arg0 orChartModel:(NSObject *)arg1 forSeries:(unsigned int)arg2;
- (double)totalValue;
- (float)wedgeExplosion;
- (float)labelExplosion;
- (char)groupedShadow;
- (NSString *)labelString;
- (double)endAngle;
- (void)dealloc;
- (TSCHPieSeriesModelCache *)init;
- (TSCHChartAxis *)axis;
- (double)startAngle;
- (double)percentage;
- (TSCHChartSeries *)series;
- (unsigned int)seriesIndex;

@end
