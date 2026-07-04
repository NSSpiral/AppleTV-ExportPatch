/* Runtime dump - TSTPostfixOperatorNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTPostfixOperatorNode : TSTOperatorNode

- (TSTPostfixOperatorNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct PostfixOperatorNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTPostfixOperatorNode *)initFromArchive:(struct PostfixOperatorNodeArchive *)arg0 unarchiver:(struct PostfixOperatorNodeArchive)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;

@end
