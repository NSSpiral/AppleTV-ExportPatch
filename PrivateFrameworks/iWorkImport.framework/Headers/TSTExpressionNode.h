/* Runtime dump - TSTExpressionNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTExpressionNode : TSPObject <TSTFormulaToken>
{
    NSArray * mChildren;
    TSCEFunctionArgumentSpec * mArgumentSpec;
    TSTWPTokenAttachment * mTokenAttachment;
    unsigned int mFirstIndex;
    unsigned int mLastIndex;
    NSString * mWhitespaceBefore;
    NSString * mWhitespaceAfter;
}

@property (retain, nonatomic) NSArray * children;
@property (retain, nonatomic) TSCEFunctionArgumentSpec * argumentSpec;
@property (nonatomic) TSTWPTokenAttachment * tokenAttachment;
@property (nonatomic) unsigned int firstIndex;
@property (nonatomic) unsigned int lastIndex;
@property (retain, nonatomic) NSString * whitespaceBefore;
@property (retain, nonatomic) NSString * whitespaceAfter;
@property (readonly, retain, nonatomic) UIViewController * popover;
@property (readonly, nonatomic) int tokenType;
@property (readonly, nonatomic) NSString * string;

- (TSTExpressionNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct ExpressionNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTExpressionNode *)initFromArchive:(struct ExpressionNodeArchive *)arg0 unarchiver:(struct ExpressionNodeArchive)arg1;
- (TSCEFunctionArgumentSpec *)argumentSpec;
- (NSString *)formulaPlainText;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTExpressionNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTExpressionNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (TSTWPTokenAttachment *)tokenAttachment;
- (NSString *)deepCopyIntoContext:(NSObject *)arg0 bakeModes:(char)arg1 withTokenDict:(id)arg2;
- (NSString *)copyIntoContext:(NSObject *)arg0 bakeModes:(char)arg1 children:(NSArray *)arg2;
- (char)forceReferenceInterpretationOfChildren;
- (NSString *)copyByResolvingIdentifiers:(id)arg0 hostTable:(id)arg1 forceReferenceInterpretation:(char)arg2 symbolTable:(struct TSCESymbolTable *)arg3 oldToNewNodeMap:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> >)arg4;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (NSString *)exportString;
- (void)addTSTCanvasReferencesToSet:(NSSet *)arg0 inRangeContext:(int)arg1 withColorHelper:(NSObject *)arg2 preferringNodesFromStorage:(id)arg3 allVisitedNodes:(id)arg4;
- (unsigned int)firstIndexOfSubtree;
- (unsigned int)lastIndexOfSubtree;
- (void)addVariablesMatchingPrefix:(NSString *)arg0 forFormulaIndex:(unsigned int)arg1 toDictionary:(NSDictionary *)arg2 symbolTable:(struct TSCESymbolTable *)arg3;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (id)largestCommonSubexpressionExcludingExisting:(id)arg0 cseData:(NSData *)arg1;
- (void)addAllIdentifiersToSymbolTable:(struct TSCESymbolTable *)arg0;
- (void)replaceOccurrencesOfChildrenInSet:(NSSet *)arg0 withIdentifier:(NSString *)arg1 symbol:(unsigned int)arg2;
- (id)largestCommonSubexpression;
- (id)eliminateLargestCommonSubexpression:(id)arg0 withSymbolTable:(struct TSCESymbolTable *)arg1 newIdentifierOut:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> >)arg2;
- (id)lowestCommonAncestor:(id)arg0;
- (id)p_eliminateLargestCommonSubexpressionWithLCA:(id)arg0 expressions:(id)arg1 withSymbolTable:(struct TSCESymbolTable *)arg2 newIdentifierOut:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> >)arg3;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTExpressionNode *)initWithContext:(NSObject *)arg0 firstIndex:(unsigned int)arg1 lastIndex:(unsigned int)arg2;
- (void)setArgumentSpec:(TSCEFunctionArgumentSpec *)arg0;
- (NSString *)detokenizedText;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1;
- (char)hasMenu;
- (void)enumerateExpressionNodesUsingBlock:(id /* block */)arg0;
- (int)compareFirstLastIndices:(id)arg0;
- (char)canEliminateLargestCommonSubexpressionWithSymbolTable:(struct TSCESymbolTable *)arg0;
- (id)eliminateLargestCommonSubexpressionWithSymbolTable:(struct TSCESymbolTable *)arg0 newIdentifierOut:(struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> >)arg1;
- (void)setTokenAttachment:(TSTWPTokenAttachment *)arg0;
- (void)setFirstIndex:(unsigned int)arg0;
- (void)setLastIndex:(unsigned int)arg0;
- (NSString *)whitespaceBefore;
- (void)setWhitespaceBefore:(NSString *)arg0;
- (NSString *)whitespaceAfter;
- (void)setWhitespaceAfter:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (unsigned int)firstIndex;
- (TSTExpressionNode *)initWithContext:(TSPObjectContext *)arg0;
- (struct _NSRange)range;
- (unsigned int)lastIndex;
- (unsigned int)symbol;
- (UIViewController *)popover;
- (void)setChildren:(NSArray *)arg0;
- (NSArray *)children;

@end
