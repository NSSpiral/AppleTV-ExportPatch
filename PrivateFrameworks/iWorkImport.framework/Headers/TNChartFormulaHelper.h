/* Runtime dump - TNChartFormulaHelper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaHelper : NSObject
{
    TNChartMediator * mChartMediator;
    char mCreateSpanningReferences;
}

@property (nonatomic) char createSpanningReferences;
@property (readonly, nonatomic) TNChartMediator * chartMediator;

- (TNChartFormulaHelper *)initWithMediator:(TSCHChartMediator *)arg0 createSpanningReferences:(char)arg1;
- (TNChartMediator *)chartMediator;
- (id)p_rangeListsForFormulas:(id)arg0 byRow:(char)arg1 resolveSpanning:(char)arg2;
- (void)p_addSeriesForRangeList:(NSArray *)arg0 rowLabelRangeList:(NSArray *)arg1 columnLabelRangeList:(NSArray *)arg2 rowLabels:(id)arg3 columnLabels:(id)arg4 toFormulaMap:(NSObject *)arg5;
- (void)p_rangeListsForFormula:(id)arg0 argumentIndexes:(NSArray *)arg1 byRow:(char)arg2 resolveSpanning:(char)arg3 orderedListOfOwnerIDs:(id)arg4 ownerIDToRangeList:(NSArray *)arg5;
- (char)p_hasOneValuePerSeries;
- (NSObject *)p_labelsOfType:(unsigned int)arg0 formulaMap:(NSObject *)arg1;
- (void)p_addFormulasOfType:(unsigned int)arg0 rangeList:(TSURangeList *)arg1 byRow:(char)arg2 toFormulaMap:(NSObject *)arg3;
- (void)p_addStringFormulasOfType:(unsigned int)arg0 rangeList:(TSURangeList *)arg1 byRow:(char)arg2 labels:(TSCH3DLabelResources *)arg3 toFormulaMap:(NSObject *)arg4;
- (id)p_formulaForExistingSeriesInTable:(struct __CFUUID *)arg0 withRowOrColumnIndex:(unsigned short)arg1 inFormulaMap:(NSObject *)arg2 argumentCollectionMap:(NSObject *)arg3;
- (NSObject *)chartFormulaByAppendingRangeReference:(struct ?)arg0 toFormula:(struct ?)arg1 andLocale:(NSObject *)arg2;
- (TNChartFormulaHelper *)initWithMediator:(TSCHChartMediator *)arg0;
- (id)formulaStorageForChartGridDirection:(int)arg0;
- (id)p_rangeListsForFormula:(id)arg0 argumentIndexes:(NSArray *)arg1 byRow:(char)arg2 resolveSpanning:(char)arg3;
- (void)p_addSeriesForRangeList:(NSArray *)arg0 rowLabelRangeList:(NSArray *)arg1 columnLabelRangeList:(NSArray *)arg2 toFormulaMap:(NSObject *)arg3;
- (void)p_addSeriesForTableModel:(NSObject *)arg0 seriesRange:(struct TSCERangeCoordinate)arg1 rowLabelRange:(struct ?)arg2 columnLabelRange:(NSObject *)arg3 toFormulaMap:(struct TSCERangeCoordinate)arg4;
- (char)p_extendExistingSeriesWithSeriesRangeList:(id *)arg0 rowLabelRangeList:(id *)arg1 columnLabelRangeList:(id *)arg2 toFormulaMap:(NSObject *)arg3 withLocale:(NSObject *)arg4;
- (char)createSpanningReferences;
- (void)setCreateSpanningReferences:(char)arg0;
- (void)dealloc;

@end
