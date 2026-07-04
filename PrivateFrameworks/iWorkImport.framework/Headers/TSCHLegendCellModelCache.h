/* Runtime dump - TSCHLegendCellModelCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendCellModelCache : NSObject
{
    int mLegendCellType;
    int mBadgeType;
    unsigned int mSeriesIndex;
    TSCHChartSeries * mSeries;
    NSString * mLabelString;
    TSDStroke * mStroke;
    TSDStroke * mSymbolStroke;
    int mSymbolType;
    int mLineType;
    struct CGSize mCellSize;
    float mEffectiveStrokeWidth;
    float mEffectiveSymbolStrokeWidth;
    struct CGRect mBadgeFrame;
    struct CGRect mLabelFrame;
    struct CGRect mBadgeFillFrame;
}

@property (readonly) int cellType;
@property (readonly) int badgeType;
@property (readonly) unsigned int seriesIndex;
@property (readonly) TSCHChartSeries * series;
@property (readonly) NSString * labelString;
@property (readonly) struct CGSize size;
@property (readonly) struct CGRect badgeFrame;
@property (readonly) struct CGRect labelFrame;
@property (readonly) struct CGRect badgeFillFrame;
@property (readonly) TSDStroke * stroke;
@property (readonly) id fill;
@property (readonly) TSDStroke * symbolStroke;
@property (readonly) id symbolFill;
@property (readonly) float effectiveStrokeWidth;
@property (readonly) float effectiveSymbolStrokeWidth;
@property (readonly) int symbolType;
@property (readonly) int lineType;

- (int)symbolType;
- (TSDStroke *)symbolStroke;
- (int)lineType;
- (id)symbolFill;
- (float)effectiveStrokeWidth;
- (struct CGRect)badgeFillFrame;
- (int)badgeType;
- (struct CGRect)badgeFrame;
- (TSCHLegendCellModelCache *)initWithChartModel:(NSObject *)arg0 cellType:(int)arg1 seriesIndex:(unsigned int)arg2 withMetrics:(SBFLockScreenMetrics *)arg3 overrideLabel:(NSString *)arg4;
- (float)effectiveSymbolStrokeWidth;
- (NSString *)labelString;
- (void)dealloc;
- (struct CGSize)size;
- (EDFill *)fill;
- (TSDStroke *)stroke;
- (struct CGRect)labelFrame;
- (TSCHChartSeries *)series;
- (unsigned int)seriesIndex;
- (int)cellType;

@end
