/* Runtime dump - TSCHLineAreaSeriesModelCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLineAreaSeriesModelCache : NSObject
{
    unsigned int mSeriesIndex;
    TSCHChartSeries * mSeries;
    TSCHChartValueAxis * mValueAxis;
    TSCHChartAxis * mGroupAxis;
    TSWPParagraphStyle * mParagraphStyle;
    unsigned int mLabelPosition;
    char mShowLabelsInFront;
    int mSymbolType;
    TSDStroke * mSymbolStroke;
    TSDStroke * mSeriesStroke;
    TSDShadow * mSeriesShadow;
    float mDataPointSize;
    float mOpacity;
    int mLineType;
    id mSeriesFill;
    id mSymbolFill;
    char mShowValueLabels;
    struct CGPath * mUnitSymbolPath;
}

@property (readonly) unsigned int seriesIndex;
@property (readonly) TSCHChartSeries * series;
@property (readonly) TSCHChartValueAxis * valueAxis;
@property (readonly) TSCHChartAxis * groupAxis;
@property (readonly) TSWPParagraphStyle * paragraphStyle;
@property (readonly) unsigned int labelPosition;
@property (readonly) char showLabelsInFront;
@property (readonly) int symbolType;
@property (readonly) TSDStroke * symbolStroke;
@property (readonly) id symbolFill;
@property (readonly) TSDStroke * seriesStroke;
@property (readonly) id seriesFill;
@property (readonly) float dataPointSize;
@property (readonly) float opacity;
@property (readonly) int lineType;
@property (readonly) char showValueLabels;
@property (readonly) TSDShadow * seriesShadow;
@property (readonly) struct CGPath * unitSymbolPath;

- (TSWPParagraphStyle *)paragraphStyle;
- (TSCHChartValueAxis *)valueAxis;
- (char)showValueLabels;
- (TSDFill *)seriesFill;
- (int)symbolType;
- (TSDStroke *)symbolStroke;
- (struct CGPath *)unitSymbolPath;
- (TSDShadow *)seriesShadow;
- (char)showLabelsInFront;
- (TSDStroke *)seriesStroke;
- (int)lineType;
- (id)symbolFill;
- (TSCHChartAxis *)groupAxis;
- (float)dataPointSize;
- (TSCHLineAreaSeriesModelCache *)initWithChartModel:(NSObject *)arg0 forSeries:(unsigned int)arg1;
- (void)dealloc;
- (float)opacity;
- (TSCHChartSeries *)series;
- (unsigned int)labelPosition;
- (unsigned int)seriesIndex;

@end
