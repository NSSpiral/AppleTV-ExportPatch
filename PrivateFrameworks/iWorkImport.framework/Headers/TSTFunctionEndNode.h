/* Runtime dump - TSTFunctionEndNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFunctionEndNode : TSTExpressionNode
{
    TSTFunctionNode * mFunctionNode;
}

@property (nonatomic) TSTFunctionNode * functionNode;

- (TSTFunctionEndNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct FunctionEndNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTFunctionEndNode *)initFromArchive:(struct FunctionEndNodeArchive *)arg0 unarchiver:(struct FunctionEndNodeArchive)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTFunctionEndNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTFunctionEndNode *)initWithContext:(NSObject *)arg0 functionNode:(TSTFunctionNode *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (NSString *)exportString;
- (void)setFunctionNode:(TSTFunctionNode *)arg0;
- (TSTFunctionNode *)functionNode;
- (void)dealloc;
- (NSString *)string;
- (int)tokenType;

@end
