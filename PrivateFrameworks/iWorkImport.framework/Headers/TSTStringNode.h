/* Runtime dump - TSTStringNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStringNode : TSTExpressionNode
{
    NSString * mValue;
}

@property (retain, nonatomic) NSString * value;

- (TSTStringNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct StringNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTStringNode *)initFromArchive:(struct StringNodeArchive *)arg0 unarchiver:(struct StringNodeArchive)arg1;
- (NSString *)formulaPlainText;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTStringNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTStringNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (NSString *)exportString;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTStringNode *)initWithContext:(NSObject *)arg0 stringValue:(NSString *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (NSString *)p_languageGuessForString:(NSString *)arg0 isRTL:(char *)arg1;
- (void)dealloc;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (NSString *)string;
- (int)tokenType;

@end
