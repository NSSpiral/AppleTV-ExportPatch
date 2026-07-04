/* Runtime dump - TSCHLegendModelCache
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendModelCache : NSObject
{
    TSCHLegendCellMetrics * mMetrics;
    char mLegendOn;
    NSArray * mCells;
    unsigned int mCellCount;
    TSWPParagraphStyle * mParagraphStyle;
    TSDStroke * mStroke;
    TSDShadow * mShadow;
    id mFill;
    float mOpacity;
    float mHorizontalCellSpacing;
    float mVerticalCellSpacing;
    struct CGSize mLargestCellSize;
    float mEffectiveStrokeWidth;
    char mReverseSingleColumnLegendOrder;
    float mLastLegendWidth;
    TSCHLegendViewCache * mLastLegendViewCache;
    float mSymbolGap;
}

@property (readonly) char legendOn;
@property (readonly) unsigned int cellCount;
@property (readonly) NSArray * cells;
@property (readonly) TSWPParagraphStyle * paragraphStyle;
@property (readonly) TSDStroke * stroke;
@property (readonly) id fill;
@property (readonly) TSDShadow * shadow;
@property (readonly) float opacity;
@property (readonly) float horizontalCellSpacing;
@property (readonly) float verticalCellSpacing;
@property (readonly) float symbolGap;
@property (readonly) struct CGSize largestCellSize;
@property (readonly) float effectiveStrokeWidth;
@property (readonly) char reverseSingleColumnLegendOrder;

- (TSWPParagraphStyle *)paragraphStyle;
- (char)reverseSingleColumnLegendOrder;
- (float)effectiveStrokeWidth;
- (char)legendOn;
- (NSObject *)cellForSeriesIndex:(unsigned int)arg0 cellType:(int)arg1;
- (id)viewCacheForWidth:(float)arg0;
- (float)symbolGap;
- (float)horizontalCellSpacing;
- (TSCHLegendModelCache *)initWithChartModel:(NSObject *)arg0 textEditingSelectionPair:(id)arg1;
- (float)verticalCellSpacing;
- (struct CGSize)largestCellSize;
- (void)dealloc;
- (EDFill *)fill;
- (TSDStroke *)stroke;
- (float)opacity;
- (TSDShadow *)shadow;
- (unsigned int)cellCount;
- (NSArray *)cells;

@end
