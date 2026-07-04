/* Runtime dump - TSCEReferenceEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEReferenceEnumerator : NSObject
{
    struct TSCEASTNodeArray * mAST;
    struct TSCEASTNodeArrayReferenceIteratorState * mReferenceIteratorState;
}

- (TSCEReferenceEnumerator *)initWithCalculationEngine:(TSCECalculationEngine *)arg0 defaultFormulaOwnerID:(struct __CFUUID *)arg1 nodeArray:(struct TSCEASTNodeArray *)arg2 myHostCellID:(struct TSCEASTNodeArray)arg3 doImplicitIntersection:(struct ?)arg4 doUidReferences:(char)arg5;
- (void)dealloc;
- (struct ? *)nextReference;

@end
