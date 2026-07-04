/* Runtime dump - TSTFunctionNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFunctionNode : TSTExpressionNode
{
    int mFunctionIndex;
    TSTFunctionEndNode * mFunctionEndNode;
    NSString * mWhitespaceAfterFunctionName;
    NSString * mWhitespaceAfterLeftParen;
    NSArray * mWhitespaceAfterDelimiters;
    NSString * mInvalidFunctionName;
}

@property (readonly, nonatomic) int functionIndex;
@property (retain, nonatomic) TSTFunctionEndNode * functionEndNode;
@property (readonly, nonatomic) unsigned int numArguments;
@property (readonly, nonatomic) short minArguments;
@property (readonly, nonatomic) short maxArguments;
@property (retain) NSString * whitespaceAfterLeftParen;
@property (retain, nonatomic) NSArray * whitespaceAfterDelimiters;
@property (retain, nonatomic) NSString * whitespaceAfterFunctionName;
@property (retain, nonatomic) NSString * invalidFunctionName;

+ (NSString *)newDefaultFunctionNodeWithContext:(NSObject *)arg0 functionIndex:(int)arg1;
+ (NSString *)newSumNodeWithContext:(NSObject *)arg0 children:(NSArray *)arg1;

- (TSTFunctionNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (int)functionIndex;
- (short)minArguments;
- (short)maxArguments;
- (void)saveToArchive:(struct FunctionNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTFunctionNode *)initFromArchive:(struct FunctionNodeArchive *)arg0 unarchiver:(struct FunctionNodeArchive)arg1;
- (NSString *)formulaPlainText;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTFunctionNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTFunctionNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (void)setFunctionEndNode:(TSTFunctionEndNode *)arg0;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (NSString *)exportString;
- (void)addTSTCanvasReferencesToSet:(NSSet *)arg0 inRangeContext:(int)arg1 withColorHelper:(NSObject *)arg2 preferringNodesFromStorage:(id)arg3 allVisitedNodes:(id)arg4;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTFunctionNode *)initWithContext:(NSObject *)arg0 functionIndex:(int)arg1 children:(NSArray *)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (void)setWhitespaceAfterFunctionName:(NSString *)arg0;
- (void)resurrectModeTokens;
- (void)setInvalidFunctionName:(NSString *)arg0;
- (void)p_resetArgumentSpecForChildren;
- (NSObject *)p_functionSpec;
- (char)isDescendantOfChild:(NSObject *)arg0;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1 unwrapped:(char)arg2;
- (TSTFunctionEndNode *)functionEndNode;
- (char)isEmptyFunctionNode;
- (char)isMissingRequiredArgument;
- (NSString *)whitespaceAfterLeftParen;
- (void)setWhitespaceAfterLeftParen:(NSString *)arg0;
- (NSArray *)whitespaceAfterDelimiters;
- (void)setWhitespaceAfterDelimiters:(NSArray *)arg0;
- (NSString *)whitespaceAfterFunctionName;
- (NSString *)invalidFunctionName;
- (unsigned int)numArguments;
- (void)dealloc;
- (NSString *)string;
- (void)setChildren:(NSArray *)arg0;
- (int)tokenType;

@end
