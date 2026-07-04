/* Runtime dump - TSTNumberNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTNumberNode : TSTExpressionNode
{
    double mNumber;
    NSString * mString;
}

@property (retain, nonatomic) NSString * string;

- (TSTNumberNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct NumberNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTNumberNode *)initFromArchive:(struct NumberNodeArchive *)arg0 unarchiver:(struct NumberNodeArchive)arg1;
- (TSCEFunctionArgumentSpec *)argumentSpec;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTNumberNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTNumberNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (NSString *)exportString;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTNumberNode *)initWithContext:(NSObject *)arg0 number:(double)arg1 string:(NSString *)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (TSTNumberNode *)initWithContext:(NSObject *)arg0 number:(double)arg1 locale:(NSObject *)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (TSTNumberNode *)initWithContext:(NSObject *)arg0 string:(NSString *)arg1 locale:(NSObject *)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (void)setNumber:(double)arg0 withLocale:(NSObject *)arg1;
- (void)dealloc;
- (NSString *)string;
- (void)setString:(NSString *)arg0;
- (double)number;
- (int)tokenType;

@end
