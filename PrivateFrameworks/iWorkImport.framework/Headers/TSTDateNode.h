/* Runtime dump - TSTDateNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTDateNode : TSTExpressionNode
{
    NSDate * mValue;
    char mBlank;
    NSString * mDateFormat;
}

@property (retain, nonatomic) NSDate * value;
@property (nonatomic) char blank;
@property (retain, nonatomic) NSString * format;

- (TSTDateNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct DateNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTDateNode *)initFromArchive:(struct DateNodeArchive *)arg0 unarchiver:(struct DateNodeArchive)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTDateNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTDateNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (NSString *)exportString;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTDateNode *)initWithContext:(NSObject *)arg0 dateValue:(ICSDateValue *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTDateNode *)initWithContext:(NSObject *)arg0 asBlank:(char)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (struct TSTDurationWrapper)durationWrapper;
- (void)setBlank:(char)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSDate *)date;
- (NSDate *)value;
- (void)setValue:(NSDate *)arg0;
- (NSString *)string;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;
- (int)tokenType;
- (char)isBlank;

@end
