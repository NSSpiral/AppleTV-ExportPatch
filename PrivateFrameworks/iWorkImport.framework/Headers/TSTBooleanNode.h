/* Runtime dump - TSTBooleanNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTBooleanNode : TSTExpressionNode
{
    char mValue;
}

@property (nonatomic) char value;

- (TSTBooleanNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct BooleanNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTBooleanNode *)initFromArchive:(struct BooleanNodeArchive *)arg0 unarchiver:(struct BooleanNodeArchive)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTBooleanNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTBooleanNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (NSString *)exportString;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTBooleanNode *)initWithContext:(NSObject *)arg0 boolValue:(char)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (char)value;
- (void)setValue:(char)arg0;
- (NSString *)string;
- (int)tokenType;

@end
