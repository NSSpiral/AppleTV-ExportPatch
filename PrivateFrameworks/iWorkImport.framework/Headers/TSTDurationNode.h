/* Runtime dump - TSTDurationNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTDurationNode : TSTExpressionNode
{
    struct TSTDurationWrapper mValue;
    char mBlank;
}

@property (nonatomic) struct TSTDurationWrapper value;
@property (nonatomic) char blank;

- (TSTDurationNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct DurationNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTDurationNode *)initFromArchive:(struct DurationNodeArchive *)arg0 unarchiver:(struct DurationNodeArchive)arg1;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTDurationNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTDurationNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (NSString *)exportString;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTDurationNode *)initWithContext:(NSObject *)arg0 duration:(struct TSTDurationWrapper)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTDurationNode *)initWithContext:(NSObject *)arg0 asBlank:(char)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (struct TSTDurationWrapper)durationWrapper;
- (void)setBlank:(char)arg0;
- (NSString *)description;
- (NSDate *)date;
- (struct TSTDurationWrapper)value;
- (void)setValue:(struct TSTDurationWrapper)arg0;
- (NSString *)string;
- (void).cxx_construct;
- (NSString *)format;
- (int)tokenType;
- (char)isBlank;

@end
