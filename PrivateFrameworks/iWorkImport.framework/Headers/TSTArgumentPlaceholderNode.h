/* Runtime dump - TSTArgumentPlaceholderNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTArgumentPlaceholderNode : TSTExpressionNode
{
    short mMode;
    NSString * mDetokenizedText;
}

@property (nonatomic) short mode;

+ (NSObject *)argumentSpecForFunctionIndex:(int)arg0 argumentIndex:(int)arg1;

- (TSTArgumentPlaceholderNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ArgumentPlaceholderNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTArgumentPlaceholderNode *)initFromArchive:(struct ArgumentPlaceholderNodeArchive *)arg0 unarchiver:(struct ArgumentPlaceholderNodeArchive)arg1;
- (NSString *)formulaPlainText;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTArgumentPlaceholderNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTArgumentPlaceholderNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (NSString *)copyIntoContext:(NSObject *)arg0 bakeModes:(char)arg1 children:(NSArray *)arg2;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (NSString *)exportString;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTArgumentPlaceholderNode *)initWithContext:(NSObject *)arg0 firstIndex:(unsigned int)arg1 lastIndex:(unsigned int)arg2;
- (void)setArgumentSpec:(TSCEFunctionArgumentSpec *)arg0;
- (NSString *)detokenizedText;
- (char)hasMenu;
- (TSTArgumentPlaceholderNode *)initWithContext:(NSObject *)arg0 argumentSpec:(TSCEFunctionArgumentSpec *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (void)p_invalidate;
- (id)bakedValue;
- (void)dealloc;
- (NSString *)string;
- (void)setMode:(short)arg0;
- (short)mode;
- (int)tokenType;

@end
