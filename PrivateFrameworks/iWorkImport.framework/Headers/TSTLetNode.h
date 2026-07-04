/* Runtime dump - TSTLetNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLetNode : TSTExpressionNode
{
    NSString * _whitespaceAfterLet;
    NSString * _whitespaceAfterIdentifier;
    NSString * _whitespaceAfterEquals;
    NSString * _whitespaceAfterDelimiter;
}

@property (retain, nonatomic) NSString * whitespaceAfterLet;
@property (retain, nonatomic) NSString * whitespaceAfterIdentifier;
@property (retain, nonatomic) NSString * whitespaceAfterEquals;
@property (retain, nonatomic) NSString * whitespaceAfterDelimiter;

+ (TSTLetNode *)defaultNameWithIndex:(unsigned int)arg0;
+ (NSString *)letString;
+ (NSString *)newBareLetNodeWithContext:(NSObject *)arg0;

- (TSTLetNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct LetNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTLetNode *)initFromArchive:(struct LetNodeArchive *)arg0 unarchiver:(struct LetNodeArchive)arg1;
- (TSCEFunctionArgumentSpec *)argumentSpec;
- (NSString *)formulaPlainText;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTLetNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTLetNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (NSString *)copyByResolvingIdentifiers:(id)arg0 hostTable:(id)arg1 forceReferenceInterpretation:(char)arg2 symbolTable:(struct TSCESymbolTable *)arg3 oldToNewNodeMap:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> >)arg4;
- (void)addVariablesMatchingPrefix:(NSString *)arg0 forFormulaIndex:(unsigned int)arg1 toDictionary:(NSDictionary *)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (void)addAllIdentifiersToSymbolTable:(struct TSCESymbolTable *)arg0;
- (void)setWhitespaceAfterDelimiter:(NSString *)arg0;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTLetNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1;
- (void)setWhitespaceAfterLet:(NSString *)arg0;
- (void)setWhitespaceAfterIdentifier:(NSString *)arg0;
- (void)setWhitespaceAfterEquals:(NSString *)arg0;
- (void)p_fixupNodeIfFunctionNode:(NSObject *)arg0;
- (NSString *)whitespaceAfterLet;
- (NSString *)whitespaceAfterIdentifier;
- (NSString *)whitespaceAfterEquals;
- (NSString *)whitespaceAfterDelimiter;
- (unsigned int)boundSymbol;
- (NSString *)string;
- (void)setChildren:(NSArray *)arg0;
- (int)tokenType;

@end
