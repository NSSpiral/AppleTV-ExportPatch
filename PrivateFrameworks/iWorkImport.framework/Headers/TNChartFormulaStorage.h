/* Runtime dump - TNChartFormulaStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaStorage : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary * mStorage;
    int mDirection;
    unsigned int mCachedNumberOfGroups;
    char mCachedNumberOfGroupsValid;
}

+ (struct vector<TNChartFormulaType, std::__1::allocator<TNChartFormulaType> >)persistentFormulaTypes;

- (void)saveToArchive:(struct ChartMediatorFormulaStorage *)arg0 archiver:(NSObject *)arg1;
- (TNChartFormulaStorage *)initWithArchive:(struct ChartMediatorFormulaStorage *)arg0 unarchiver:(struct ChartMediatorFormulaStorage)arg1;
- (unsigned int)numberOfSeries;
- (TNChartFormulaStorage *)initWithDirection:(int)arg0;
- (TNChartFormulaStorage *)initWithChartFormulaStorage:(TNChartFormulaStorage *)arg0;
- (NSEnumerator *)formulaTypeEnumerator;
- (NSObject *)formulaListForType:(unsigned int)arg0;
- (unsigned int)p_calculateNumberOfGroupsWithCalcEngine:(TSCECalculationEngine *)arg0 inEntity:(struct __CFUUID *)arg1;
- (char)formulasOfType:(unsigned int)arg0 areAllStaticWithCalcEngine:(TSCECalculationEngine *)arg1 inEntity:(struct __CFUUID *)arg2;
- (unsigned int)numberOfDataFormulas;
- (char)isEqualToFormulaStorage:(id)arg0;
- (NSObject *)formulaForID:(struct ?)arg0;
- (NSObject *)formulaOrNilForID:(struct ?)arg0;
- (unsigned int)numberOfGroupsWithCalcEngine:(TSCECalculationEngine *)arg0 inEntity:(struct __CFUUID *)arg1;
- (char)labelFormulasAreAllStaticWithCalcEngine:(TSCECalculationEngine *)arg0 inEntity:(struct __CFUUID *)arg1;
- (unsigned int)seriesLabelFormulaType;
- (unsigned int)categoryLabelFormulaType;
- (char)dataFormulaAreRegularForSeriesInsertionWithCalcEngine:(TSCECalculationEngine *)arg0 inOwner:(struct __CFUUID *)arg1;
- (void)clearCachesForCalculationEngine:(id)arg0;
- (id)areaFormulaWithCalcEngine:(TSCECalculationEngine *)arg0 inOwner:(struct __CFUUID *)arg1;
- (void)dealloc;
- (unsigned int)count;
- (TNChartFormulaStorage *)init;
- (NSString *)description;
- (TNChartFormulaStorage *)copyWithZone:(struct _NSZone *)arg0;
- (int)direction;
- (TNChartFormulaStorage *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (struct __CFDictionary *)p_cfDictionary;

@end
