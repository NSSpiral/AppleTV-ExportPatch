/* Runtime dump - TSCETrackedReferenceTSPObjectDeprecated
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCETrackedReferenceTSPObjectDeprecated : TSPObject
{
    struct TSCEASTNodeArray * mAST;
    struct ? mFormulaID;
}

- (TSCETrackedReferenceTSPObjectDeprecated *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)encodeToArchive:(struct TrackedReferenceArchive *)arg0;
- (struct TSCEASTNodeArray *)ast;
- (struct ?)formulaID;
- (void)dealloc;
- (void).cxx_construct;

@end
