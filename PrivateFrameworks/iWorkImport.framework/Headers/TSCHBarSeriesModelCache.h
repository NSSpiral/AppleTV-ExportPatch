/* Runtime dump - TSCHBarSeriesModelCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHBarSeriesModelCache : NSObject
{
    TSCHChartSeries * mSeries;
    TSCHChartValueAxis * mValueAxis;
    TSCHChartAxis * mGroupAxis;
    TSWPParagraphStyle * mParagraphStyle;
    unsigned int mSeriesIndex;
    char mValueLabelsOn;
    float mBarWidthRatio;
    float mBarGroupGapRatio;
    float mBarGapRatio;
    double mUnitSpaceIntercept;
    unsigned int mLabelPosition;
    TSDShadow * mShadow;
    TSDStroke * mStroke;
    id mFill;
    float mOpacity;
}

@property (readonly) TSCHChartSeries * series;
@property (readonly) TSCHChartValueAxis * valueAxis;
@property (readonly) TSCHChartAxis * groupAxis;
@property (readonly) TSWPParagraphStyle * paragraphStyle;
@property (readonly) unsigned int seriesIndex;
@property (readonly) char valueLabelsOn;
@property (readonly) double unitSpaceIntercept;
@property (readonly) unsigned int labelPosition;
@property (readonly) float barWidthRatio;
@property (readonly) float barGroupGapRatio;
@property (readonly) float barGapRatio;
@property (readonly) TSDShadow * shadow;
@property (readonly) TSDStroke * stroke;
@property (readonly) id fill;
@property (readonly) float opacity;

- (TSWPParagraphStyle *)paragraphStyle;
- (TSCHChartValueAxis *)valueAxis;
- (double)unitSpaceIntercept;
- (char)valueLabelsOn;
- (TSCHChartAxis *)groupAxis;
- (float)barWidthRatio;
- (float)barGroupGapRatio;
- (float)barGapRatio;
- (TSCHBarSeriesModelCache *)initWithChartModel:(NSObject *)arg0 forSeries:(unsigned int)arg1;
- (void)dealloc;
- (EDFill *)fill;
- (TSDStroke *)stroke;
- (float)opacity;
- (TSDShadow *)shadow;
- (TSCHChartSeries *)series;
- (unsigned int)labelPosition;
- (unsigned int)seriesIndex;

@end
