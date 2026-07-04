/* Runtime dump - TSTConditionalStyleRule
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTConditionalStyleRule : NSObject <NSCopying>
{
    TSTFormulaPredicate * mPredicate;
    TSWPParagraphStyle * mTextStyle;
    TSTCellStyle * mCellStyle;
    int mPredicateType;
}

@property (readonly, nonatomic) struct TSCEFormula * formula;
@property (readonly, copy, nonatomic) TSTFormulaPredicate * predicate;
@property (readonly, nonatomic) int predicateType;
@property (readonly, copy, nonatomic) TSTCellStyle * cellStyle;
@property (readonly, copy, nonatomic) TSWPParagraphStyle * textStyle;

+ (NSObject *)conditionalStyleRuleWithRule:(NSObject *)arg0;

- (NSString *)copyWithContext:(NSObject *)arg0;
- (NSObject *)copyByRemappingOwnerUIDsWithMap:(struct TSUUuidMap *)arg0 calcEngine:(struct TSUUuidMap)arg1 error:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> >)arg2;
- (int)predicateType;
- (NSObject *)copyByRewritingWithSpec:(NSObject *)arg0 inOwner:(struct __CFUUID *)arg1 inCellCoordinate:(struct ?)arg2;
- (NSSet *)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg0 rowOffset:(int)arg1;
- (TSTConditionalStyleRule *)initWithPredicate:(TSTFormulaPredicate *)arg0 cellStyle:(TSTCellStyle *)arg1 textStyle:(TSWPParagraphStyle *)arg2;
- (char)evaluateFormulaAtCellID:(struct ?)arg0 withCalcEngine:(TSCECalculationEngine *)arg1 withFormulaTableID:(struct __CFUUID *)arg2;
- (id)copyByUpdatingHostCellRef:(struct TSCECellRef *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TSTConditionalStyleRule *)copyWithZone:(struct _NSZone *)arg0;
- (TSTFormulaPredicate *)predicate;
- (TSWPParagraphStyle *)textStyle;
- (struct TSCEFormula *)formula;
- (TSTCellStyle *)cellStyle;

@end
