/* Runtime dump - TSTIdentifierNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTIdentifierNode : TSTExpressionNode
{
    NSString * mSheetName;
    NSString * mTableName;
    NSString * mIdentifier;
    unsigned int mSymbol;
}

@property (nonatomic) unsigned int symbol;

- (TSTIdentifierNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct IdentifierNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTIdentifierNode *)initFromArchive:(struct IdentifierNodeArchive *)arg0 unarchiver:(struct IdentifierNodeArchive)arg1;
- (NSString *)formulaPlainText;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTIdentifierNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTIdentifierNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (NSString *)copyByResolvingIdentifiers:(id)arg0 hostTable:(id)arg1 forceReferenceInterpretation:(char)arg2 symbolTable:(struct TSCESymbolTable *)arg3 oldToNewNodeMap:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> >)arg4;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (TSTIdentifierNode *)initWithContext:(NSObject *)arg0 identifier:(NSString *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (NSString *)detokenizedText;
- (NSString *)identifierWithWhitespaceAppended;
- (void)setSheetName:(NSString *)arg0;
- (NSString *)tableName;
- (void)setTableName:(NSString *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSString *)identifier;
- (NSString *)string;
- (unsigned int)symbol;
- (void)setSymbol:(unsigned int)arg0;
- (int)tokenType;
- (NSString *)sheetName;

@end
