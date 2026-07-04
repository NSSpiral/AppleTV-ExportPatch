/* Runtime dump - TSTListNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTListNode : TSTExpressionNode
{
    NSString * mWhitespaceAfterLeftParen;
    NSArray * mWhitespaceAfterDelimiters;
}

@property (retain) NSString * whitespaceAfterLeftParen;
@property (retain, nonatomic) NSArray * whitespaceAfterDelimiters;

- (TSTListNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ListNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTListNode *)initFromArchive:(struct ListNodeArchive *)arg0 unarchiver:(struct ListNodeArchive)arg1;
- (TSCEFunctionArgumentSpec *)argumentSpec;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTListNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTListNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTListNode *)initWithContext:(NSObject *)arg0 firstIndex:(unsigned int)arg1 lastIndex:(unsigned int)arg2;
- (NSString *)whitespaceAfterLeftParen;
- (void)setWhitespaceAfterLeftParen:(NSString *)arg0;
- (NSArray *)whitespaceAfterDelimiters;
- (void)setWhitespaceAfterDelimiters:(NSArray *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSString *)string;
- (int)tokenType;

@end
