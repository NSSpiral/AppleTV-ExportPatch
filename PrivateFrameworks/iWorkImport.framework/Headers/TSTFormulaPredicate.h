/* Runtime dump - TSTFormulaPredicate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFormulaPredicate : NSObject <NSCopying>
{
    struct TSCEFormula mFormula;
    int mPredicateType;
    int mQualifier1;
    int mQualifier2;
    int mArgIndex0;
    int mArgIndex1;
    int mArgIndex2;
    char mParamsAreDone;
    unsigned char mNodeTag0;
    unsigned char mNodeTag1;
    unsigned char mNodeTag2;
    double mNumberParam1;
    double mNumberParam2;
    NSString * mStringParam1;
    NSDate * mDateTimeParam1;
    NSDate * mDateTimeParam2;
    struct TSCENumberValue * mDurationParam1;
    struct TSCENumberValue * mDurationParam2;
    struct TSCEASTNodeCrossTableCellReference mCrossTableRefParam0;
    struct TSCEASTNodeCrossTableCellReference mCrossTableRefParam1;
    struct TSCEASTNodeCrossTableCellReference mCrossTableRefParam2;
    struct TSCEASTNodeCrossTableRowReference mCrossTableRowRefParam0;
    struct TSCEASTNodeCrossTableRowReference mCrossTableRowRefParam1;
    struct TSCEASTNodeCrossTableRowReference mCrossTableRowRefParam2;
    struct TSCEASTNodeCrossTableColumnReference mCrossTableColumnRefParam0;
    struct TSCEASTNodeCrossTableColumnReference mCrossTableColumnRefParam1;
    struct TSCEASTNodeCrossTableColumnReference mCrossTableColumnRefParam2;
    id mPredicateArgs;
}

+ (char)isThresholdNeededForType:(int)arg0;

- (TSTFormulaPredicate *)initFromArchive:(struct FormulaPredicateArchive *)arg0;
- (void)encodeToArchive:(struct FormulaPredicateArchive *)arg0 archiver:(NSObject *)arg1;
- (NSObject *)copyByRemappingOwnerUIDsWithMap:(struct TSUUuidMap *)arg0 calcEngine:(struct TSUUuidMap)arg1 error:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, TSU::UUIDData<TSP::UUIDData> >, void *> *> >)arg2;
- (double)numberParam1;
- (int)predicateType;
- (int)qualifier1;
- (TSTFormulaPredicate *)initWithLiteralTextType:(int)arg0 string:(NSString *)arg1 argumentCellReference:(struct ?)arg2 hostCell:(struct __CFUUID *)arg3;
- (TSTFormulaPredicate *)initWithLiteralDateType:(int)arg0 date1:(NSDate *)arg1 date2:(NSDate *)arg2 number1:(double)arg3 number2:(double)arg4 qualifier1:(int)arg5 qualifier2:(int)arg6 argumentCellReference:(struct ?)arg7 hostCell:(struct __CFUUID *)arg8;
- (TSTFormulaPredicate *)initWithLiteralDurationType:(int)arg0 duration1:(struct TSTDurationWrapper)arg1 duration2:(AWDCompanionSyncFullSyncDuration *)arg2 qualifier:(struct TSTDurationWrapper)arg3 argumentCellReference:(struct ?)arg4 hostCell:(int)arg5;
- (TSTFormulaPredicate *)initWithLiteralNumberType:(int)arg0 number1:(double)arg1 number2:(double)arg2 qualifier:(int)arg3 argumentCellReference:(struct ?)arg4 hostCell:(struct __CFUUID *)arg5;
- (NSObject *)copyByRewritingToUidFormWithTableModel:(TSTTableModel *)arg0;
- (NSObject *)copyByRewritingToGeometricFormWithTableModel:(TSTTableModel *)arg0 containsBadRef:(char *)arg1;
- (char)evaluateAtCellID:(struct ?)arg0 inFormulaOwner:(struct __CFUUID *)arg1 calculationEngine:(TSCECalculationEngine *)arg2;
- (id)stringParam1;
- (id)dateTimeParam1;
- (struct TSCENumberValue *)durationParam1;
- (void)p_clearDerivedVariables;
- (char)p_isEqualForNonFormulaItems:(NSArray *)arg0;
- (struct ? *)predicateArg1atHostCoordinate:(id)arg0;
- (char)p_predicateArg:(struct ? *)arg0 isEqual:(char)arg1;
- (struct ? *)predicateArg2atHostCoordinate:(id)arg0;
- (struct TSCEFormulaCreator)p_creatorForPeriodBoundaryWithScale:(int)arg0 direction:(int)arg1 offset:(struct ?)arg2 argIndex:(char)arg3 earlierBound:(char)arg4 isCalPers:(id)arg5 hostCell:(struct ?)arg6;
- (TSTFormulaPredicate *)initWithPredicateType:(int)arg0 arg1:(struct ?)arg1 arg2:(char)arg2 qualifier1:(char)arg3 qualifier2:(TSDGLShaderQualifier *)arg4 argumentCellReference:(struct ?)arg5 hostCell:(struct ?)arg6 forConditionalStyle:(NSObject *)arg7;
- (TSTFormulaPredicate *)initWithLiteralDateType:(int)arg0 date1:(NSDate *)arg1 date2:(NSDate *)arg2 number1:(double)arg3 number2:(double)arg4 qualifier1:(int)arg5 qualifier2:(int)arg6 argumentCellReference:(struct ?)arg7 hostCell:(struct __CFUUID *)arg8 forConditionalStyle:(NSObject *)arg9;
- (TSTFormulaPredicate *)initWithPredicateType:(int)arg0 arg1:(struct ?)arg1 arg2:(char)arg2 qualifier1:(char)arg3 qualifier2:(TSDGLShaderQualifier *)arg4 argumentCellReference:(struct ?)arg5 hostCell:(struct ?)arg6;
- (void)p_setPredicateType:(int)arg0;
- (void)p_setQualifier1:(int)arg0;
- (void)p_setQualifier2:(int)arg0;
- (void)p_setParamIndex0:(int)arg0;
- (void)p_setParamIndex1:(int)arg0;
- (void)p_setParamIndex2:(int)arg0;
- (struct TSCEASTNodeCrossTableCellReference *)crossTableRefParam0;
- (struct TSCEASTNodeCrossTableCellReference *)crossTableRefParam1;
- (struct TSCEASTNodeCrossTableCellReference *)crossTableRefParam2;
- (unsigned char)nodeTag0;
- (int)p_argTypeForNodeTag:(unsigned char)arg0 argNum:(unsigned int)arg1 calculationEngine:(TSCECalculationEngine *)arg2 hostCell:(struct ?)arg3;
- (unsigned char)nodeTag1;
- (unsigned char)nodeTag2;
- (char)p_testDataTypesForArg0:(int)arg0 arg1:(int)arg1 arg2:(int)arg2 predShouldReturn:(char *)arg3;
- (void)p_populateMembersFromFormula;
- (int)qualifier2;
- (char)isEqualForInspector:(id)arg0 atHostCoordinate:(struct ?)arg1;
- (void)p_setArgumentAt:(int)arg0 nodeTag:(unsigned char)arg1 withDouble:(double)arg2;
- (void)p_setArgumentAt:(int)arg0 nodeTag:(unsigned char)arg1 withString:(NSString *)arg2;
- (void)p_setArgumentAt:(int)arg0 nodeTag:(unsigned char)arg1 withDate:(NSDate *)arg2;
- (void)p_setArgumentAt:(int)arg0 nodeTag:(unsigned char)arg1 withDurationValue:(double)arg2 withUnit:(int)arg3;
- (void)p_setArgumentAt:(int)arg0 nodeTag:(unsigned char)arg1 withCellRef:(struct TSCEASTNodeCrossTableCellReference)arg2;
- (void)p_setArgumentAt:(int)arg0 nodeTag:(unsigned char)arg1 withColumnRef:(struct TSCEASTNodeCrossTableColumnReference)arg2;
- (void)p_setArgumentAt:(int)arg0 nodeTag:(unsigned char)arg1 withRowRef:(struct TSCEASTNodeCrossTableRowReference)arg2;
- (double)numberParam2;
- (id)dateTimeParam2;
- (struct TSCENumberValue *)durationParam2;
- (struct TSCEASTNodeCrossTableColumnReference *)crossTableColumnRefParam0;
- (struct TSCEASTNodeCrossTableColumnReference *)crossTableColumnRefParam1;
- (struct TSCEASTNodeCrossTableColumnReference *)crossTableColumnRefParam2;
- (struct TSCEASTNodeCrossTableRowReference *)crossTableRowRefParam0;
- (struct TSCEASTNodeCrossTableRowReference *)crossTableRowRefParam1;
- (struct TSCEASTNodeCrossTableRowReference *)crossTableRowRefParam2;
- (NSObject *)copyByRewritingWithSpec:(NSObject *)arg0 inOwner:(struct __CFUUID *)arg1 inCellCoordinate:(struct ?)arg2;
- (NSSet *)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg0 rowOffset:(int)arg1;
- (id)copyByUpdatingLinkedTable:(struct UUIDData<TSP::UUIDData> *)arg0 hostCell:(struct UUIDData<TSP::UUIDData>)arg1;
- (void)dealloc;
- (TSTFormulaPredicate *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSTFormulaPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct TSCEFormula *)formula;
- (void)setFormula:(struct TSCEFormula *)arg0;

@end
