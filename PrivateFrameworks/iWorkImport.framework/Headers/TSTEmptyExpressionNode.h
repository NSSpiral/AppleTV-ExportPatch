/* Runtime dump - TSTEmptyExpressionNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTEmptyExpressionNode : TSTExpressionNode

- (TSTEmptyExpressionNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct EmptyExpressionNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTEmptyExpressionNode *)initFromArchive:(struct EmptyExpressionNodeArchive *)arg0 unarchiver:(struct EmptyExpressionNodeArchive)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTEmptyExpressionNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (NSString *)description;
- (NSString *)string;
- (int)tokenType;

@end
