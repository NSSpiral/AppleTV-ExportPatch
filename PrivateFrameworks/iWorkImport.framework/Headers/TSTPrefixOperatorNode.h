/* Runtime dump - TSTPrefixOperatorNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTPrefixOperatorNode : TSTOperatorNode

- (TSTPrefixOperatorNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct PrefixOperatorNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTPrefixOperatorNode *)initFromArchive:(struct PrefixOperatorNodeArchive *)arg0 unarchiver:(struct PrefixOperatorNodeArchive)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;

@end
