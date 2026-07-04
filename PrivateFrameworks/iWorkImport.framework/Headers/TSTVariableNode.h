/* Runtime dump - TSTVariableNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTVariableNode : TSTExpressionNode
{
    unsigned int mSymbol;
    NSString * mIdentifier;
}

@property (nonatomic) NSString * identifier;
@property (nonatomic) unsigned int symbol;

- (TSTVariableNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct VariableNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTVariableNode *)initFromArchive:(struct VariableNodeArchive *)arg0 unarchiver:(struct VariableNodeArchive)arg1;
- (NSString *)formulaPlainText;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTVariableNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTVariableNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (NSString *)copyByResolvingIdentifiers:(id)arg0 hostTable:(id)arg1 forceReferenceInterpretation:(char)arg2 symbolTable:(struct TSCESymbolTable *)arg3 oldToNewNodeMap:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> >)arg4;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (NSString *)exportString;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (TSTVariableNode *)initWithContext:(NSObject *)arg0 identifier:(NSString *)arg1 symbol:(unsigned int)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (NSString *)detokenizedText;
- (NSString *)identifier;
- (NSString *)string;
- (void)setIdentifier:(NSString *)arg0;
- (unsigned int)symbol;
- (void)setSymbol:(unsigned int)arg0;
- (int)tokenType;

@end
