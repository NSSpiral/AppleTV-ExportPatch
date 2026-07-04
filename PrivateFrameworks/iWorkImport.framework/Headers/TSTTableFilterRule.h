/* Runtime dump - TSTTableFilterRule
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableFilterRule : NSObject <NSCopying>
{
    TSTFormulaPredicate * mPredicate;
    char mDoesNotNeedFormulaRewriteForImport;
}

+ (NSPredicate *)ruleWithFormulaPredicate:(NSPredicate *)arg0;
+ (TSTTableFilterRule *)ruleWhereValuesInTable:(id)arg0 inColumn:(unsigned char)arg1 matchCell:(NSObject *)arg2;

- (TSTTableFilterRule *)initFromArchive:(struct FilterRuleArchive *)arg0;
- (void)encodeToArchive:(struct FilterRuleArchive *)arg0 archiver:(NSObject *)arg1;
- (char)needsFormulaRewriteForImport;
- (unsigned char)columnIndexForFilterRuleInTableModel:(NSObject *)arg0;
- (char)needsThreshold;
- (TSTTableFilterRule *)initWithFormulaPredicate:(NSPredicate *)arg0;
- (TSTTableFilterRule *)initRuleWhereValuesInTable:(id)arg0 inColumn:(unsigned char)arg1 matchCell:(NSObject *)arg2;
- (NSObject *)copyByRewritingToUidFormWithTableModel:(TSTTableModel *)arg0;
- (NSObject *)copyByRewritingToGeometricFormWithTableModel:(TSTTableModel *)arg0 containsBadRef:(char *)arg1;
- (void)setDoesNotNeedFormulaRewriteForImport;
- (char)matchesRow:(unsigned short)arg0 withFormulaTableID:(struct __CFUUID *)arg1 withCalculationEngine:(TSCECalculationEngine *)arg2;
- (char)matchesCell:(NSObject *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSTTableFilterRule *)copyWithZone:(struct _NSZone *)arg0;
- (NSPredicate *)predicate;
- (struct TSCEFormula *)formula;

@end
