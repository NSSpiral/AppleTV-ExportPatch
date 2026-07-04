/* Runtime dump - TSTTableFilterSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableFilterSet : TSPObject <TSPCopying>
{
    int mType;
    char mIsEnabled;
    NSArray * mRules;
    char mNeedsFormulaRewriteForImport;
    struct vector<unsigned int, std::__1::allocator<unsigned int> > mFilterOffsets;
}

@property (readonly, nonatomic) unsigned int filterCount;
@property (readonly, nonatomic) unsigned int ruleCount;
@property (readonly, nonatomic) char canAddRules;
@property (readonly, nonatomic) unsigned int newFilterIndex;
@property (nonatomic) char isEnabled;
@property (nonatomic) int filterSetType;

- (TSTTableFilterSet *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (void)saveToArchive:(struct FilterSetArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTTableFilterSet *)initFromArchive:(struct FilterSetArchive *)arg0 unarchiver:(struct FilterSetArchive)arg1;
- (TSTTableFilterSet *)initWithFilterRules:(id)arg0 type:(int)arg1 context:(NSObject *)arg2;
- (char)containsFilterRulesInUIDForm;
- (NSString *)copyByRewritingFilterRulesToGeometricFormWithContext:(NSObject *)arg0 withTableModel:(TSTTableModel *)arg1;
- (NSString *)copyByRewritingFilterRulesToUidFormWithContext:(NSObject *)arg0 withTableModel:(TSTTableModel *)arg1;
- (char)needsFormulaRewriteForImport;
- (void)setNeedsFormulaRewriteForImport:(char)arg0;
- (NSObject *)ruleAtAbsoluteIndex:(unsigned int)arg0;
- (void)setFilterSetType:(int)arg0;
- (void)enumerateFiltersInTable:(id)arg0 usingBlock:(id /* block */)arg1;
- (char)rowIsShown:(unsigned short)arg0 withHiddenStateFormulaOwner:(NSObject *)arg1 withCalculationEngine:(TSCECalculationEngine *)arg2;
- (id)removeRulesWithAbsoluteIndices:(id)arg0;
- (int)filterSetType;
- (char)p_thresholdComparisonMatchesFilter:(int)arg0 withPredicateType:(int)arg1;
- (unsigned int)numberOfRulesInFilter:(unsigned int)arg0;
- (void)p_addRules:(id)arg0 atRuleIndices:(id)arg1 inFilter:(unsigned int)arg2 isNew:(char)arg3;
- (NSObject *)filterAtIndex:(unsigned int)arg0 inTable:(struct __CFUUID *)arg1;
- (NSObject *)ruleInFilter:(unsigned int)arg0 atIndex:(unsigned int)arg1;
- (char)canAddRules;
- (unsigned int)newFilterIndex;
- (void)removeRulesWithIndices:(id)arg0 inFilter:(unsigned int)arg1;
- (void)removeRulesForColumnIndices:(id)arg0 withTableModel:(TSTTableModel *)arg1;
- (void)addRules:(VCImageAttributeRules *)arg0 inFilter:(unsigned int)arg1;
- (void)replaceRule:(NSObject *)arg0 atRuleIndex:(unsigned int)arg1 inFilter:(unsigned int)arg2;
- (void)enumerateFilterIndicesInTable:(id)arg0 usingBlock:(id /* block */)arg1;
- (void)enumerateFiltersForColumn:(unsigned char)arg0 withTable:(GKTable *)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateRulesInFilterIndex:(unsigned int)arg0 usingBlock:(id /* block */)arg1;
- (id)filterIndicesForColumn:(unsigned char)arg0 inTable:(struct __CFUUID *)arg1;
- (unsigned int)firstFilterIndexForColumn:(unsigned char)arg0 inTable:(struct __CFUUID *)arg1;
- (unsigned int)ruleIndexInFilter:(unsigned int)arg0 matchingCell:(NSObject *)arg1;
- (id)absoluteRuleIndicesForColumn:(unsigned char)arg0 inTable:(struct __CFUUID *)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (char)isEnabled;
- (void)setIsEnabled:(char)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)ruleCount;
- (unsigned int)filterCount;

@end
