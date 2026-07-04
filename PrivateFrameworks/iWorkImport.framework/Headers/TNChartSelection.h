/* Runtime dump - TNChartSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartSelection : TSDDrawableSelection
{
    TSCHChartDrawableInfo * mChart;
    struct ? mReference;
}

@property (readonly, nonatomic) struct ? reference;
@property (readonly, nonatomic) TSCHChartDrawableInfo * chart;

+ (Class)archivedSelectionClass;

- (void)saveToArchive:(struct ChartSelectionArchive *)arg0 archiver:(NSObject *)arg1;
- (TNChartSelection *)initWithChartInfo:(TSCHChartDrawableInfo *)arg0;
- (TNChartSelection *)initFromArchive:(struct ChartSelectionArchive *)arg0 unarchiver:(struct ChartSelectionArchive)arg1;
- (char)returnChartFrameForAutoscroll;
- (TNChartSelection *)initWithChartInfo:(TSCHChartDrawableInfo *)arg0 reference:(struct ?)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (TNChartSelection *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (TSCHChartDrawableInfo *)chart;
- (void)setReference:(struct ?)arg0;
- (struct ?)reference;

@end
