/* Runtime dump - TSTArrayNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTArrayNode : TSTExpressionNode
{
    struct TSCEVectorIndexPair mDimensions;
    NSString * mWhitespaceBeforeFirstChild;
    NSArray * mWhitespaceAfterDelimiters;
}

@property (retain) NSString * whitespaceBeforeFirstChild;
@property (retain) NSArray * whitespaceAfterDelimiters;

- (TSTArrayNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ArrayNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTArrayNode *)initFromArchive:(struct ArrayNodeArchive *)arg0 unarchiver:(struct ArrayNodeArchive)arg1;
- (TSCEFunctionArgumentSpec *)argumentSpec;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTArrayNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTArrayNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (TSTArrayNode *)initWithContext:(NSObject *)arg0 firstIndex:(unsigned int)arg1 lastIndex:(unsigned int)arg2;
- (TSTArrayNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 columns:(unsigned char)arg2 rows:(unsigned short)arg3 firstIndex:(unsigned int)arg4 lastIndex:(unsigned int)arg5;
- (NSArray *)whitespaceAfterDelimiters;
- (void)setWhitespaceAfterDelimiters:(NSArray *)arg0;
- (void)setWhitespaceBeforeFirstChild:(NSString *)arg0;
- (NSString *)whitespaceBeforeFirstChild;
- (void)dealloc;
- (NSString *)string;
- (void).cxx_construct;
- (struct TSCEVectorIndexPair)dimensions;
- (int)tokenType;

@end
