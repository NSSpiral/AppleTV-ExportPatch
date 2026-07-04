/* Runtime dump - TSTOperatorNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTOperatorNode : TSTExpressionNode
{
    unsigned short mOperator;
}

@property (nonatomic) unsigned short operatorChar;

- (TSTOperatorNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct OperatorNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTOperatorNode *)initFromArchive:(struct OperatorNodeArchive *)arg0 unarchiver:(struct OperatorNodeArchive)arg1;
- (TSCEFunctionArgumentSpec *)argumentSpec;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTOperatorNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (char)forceReferenceInterpretationOfChildren;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTOperatorNode *)initWithContext:(NSObject *)arg0 operatorChar:(unsigned short)arg1 children:(NSArray *)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (TSTOperatorNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1;
- (void)setOperatorChar:(unsigned short)arg0;
- (NSString *)string;
- (unsigned short)operatorChar;
- (int)tokenType;

@end
