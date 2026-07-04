/* Runtime dump - TSCETrackedReference
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCETrackedReference : NSObject <NSCopying>
{
    struct TSCEASTNodeArray * mAST;
    struct ? mFormulaID;
}

- (id)displayStringWithCalculationEngine:(TSCECalculationEngine *)arg0;
- (TSCETrackedReference *)initFromArchive:(struct TrackedReferenceArchive *)arg0;
- (id)referenceEnumeratorWithCalculationEngine:(TSCECalculationEngine *)arg0 referenceTrackerID:(struct __CFUUID *)arg1;
- (TSCETrackedReference *)initByCopyingASTNodeArray:(struct TSCEASTNodeArray *)arg0 formulaID:(struct ?)arg1;
- (struct TSCEASTNodeArray *)ast;
- (struct ?)formulaID;
- (TSCETrackedReference *)initWithCReference:(struct ?)arg0 formulaID:(struct __CFUUID *)arg1;
- (void)replaceContentsWithContentsOfTrackedReference:(NSObject *)arg0;
- (void)setFormulaID:(struct ?)arg0;
- (void)registerWithCalculationEngine:(TSCECalculationEngine *)arg0 inOwner:(struct __CFUUID *)arg1;
- (char)isValidWithReferenceTracker:(id)arg0;
- (void)encodeToArchive:(struct TrackedReferenceArchive *)arg0 archiver:(NSObject *)arg1;
- (TSCETrackedReference *)initWithTrackedReferenceTSPObjectDeprecated:(TSCETrackedReferenceTSPObjectDeprecated *)arg0;
- (void)dealloc;
- (NSString *)description;
- (TSCETrackedReference *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
