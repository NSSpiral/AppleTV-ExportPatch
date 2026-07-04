/* Runtime dump - TSTReferenceNode
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTReferenceNode : TSTExpressionNode
{
    struct ? mRangeReference;
    unsigned char mStickyBits;
    struct __CFUUID * mHostTableID;
    char mRangeWithFunction;
    TSCECalculationEngine * mCalculationEngine;
    int mRangeContext;
    NSString * mRefString;
    NSString * mFormulaPlainText;
    TSTReferenceColorHelper * mReferenceColorHelper;
    char mBlankForKeyboardInsertion;
}

@property (nonatomic) struct ? rangeReference;
@property (nonatomic) struct TSCERangeCoordinate rangeCoordinate;
@property (nonatomic) struct __CFUUID * tableID;
@property (nonatomic) struct __CFUUID * hostTableID;
@property (nonatomic) unsigned char stickyBits;
@property (nonatomic) int rangeContext;
@property (readonly, nonatomic) char nonSpanningRange;
@property (readonly, nonatomic) char range;
@property (readonly, nonatomic) char localReference;
@property (nonatomic) char rangeWithFunction;
@property (readonly, nonatomic) char simpleRowOrColumnReference;
@property (readonly, nonatomic) char resizable;
@property (retain, nonatomic) TSTReferenceColorHelper * referenceColorHelper;
@property (nonatomic) char blankForKeyboardInsertion;
@property (readonly, nonatomic) char singleASTNode;
@property (readonly, retain, nonatomic) TSCECalculationEngine * calculationEngine;

- (TSTReferenceNode *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (struct ?)rangeReference;
- (int)rangeContext;
- (void)setRangeContext:(int)arg0;
- (struct __CFUUID *)tableID;
- (void)saveToArchive:(struct ReferenceNodeArchive *)arg0 archiver:(NSObject *)arg1;
- (void)setStickyBits:(unsigned char)arg0;
- (unsigned char)stickyBits;
- (TSCECalculationEngine *)calculationEngine;
- (TSTReferenceNode *)initFromArchive:(struct ReferenceNodeArchive *)arg0 unarchiver:(struct ReferenceNodeArchive)arg1;
- (void)setTableID:(struct __CFUUID *)arg0;
- (NSString *)formulaPlainText;
- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct ?)arg1 symbolTable:(struct TSCESymbolTable *)arg2;
- (TSTReferenceNode *)initWithContext:(NSObject *)arg0 children:(NSArray *)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (TSTReferenceNode *)initAsCopyOf:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 children:(NSArray *)arg2;
- (void)insertFormulaText:(NSString *)arg0 includeWhitespace:(char)arg1;
- (NSString *)exportString;
- (struct TSTCSENodeData)recordHashesForSubexpressions:(id)arg0;
- (char)isEqualToExpressionNode:(NSObject *)arg0;
- (TSTReferenceNode *)initWithReferenceStart:(id)arg0 referenceEnd:(id)arg1 firstIndex:(unsigned int)arg2 lastIndex:(unsigned int)arg3;
- (void)setRangeWithFunction:(char)arg0;
- (TSTReferenceNode *)initWithContext:(NSObject *)arg0 calculationEngine:(TSCECalculationEngine *)arg1 cellRange:(struct TSCERangeCoordinate)arg2 stickyBits:(struct ?)arg3 hostTableID:(struct __CFUUID *)arg4 tableID:(unsigned char)arg5 referenceColorHelper:(struct __CFUUID *)arg6 firstIndex:(struct __CFUUID *)arg7 lastIndex:(unsigned int)arg8;
- (char)isSingleASTNode;
- (struct __CFUUID *)hostTableID;
- (struct TSCERangeCoordinate)rangeCoordinate;
- (TSTReferenceColorHelper *)referenceColorHelper;
- (void)p_invalidate;
- (void)setRangeCoordinate:(struct TSCERangeCoordinate)arg0;
- (char)isRangeWithFunction;
- (void)p_resetMenu;
- (char)isValidReference;
- (char)isLocalReference;
- (void)p_buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 forRangeComponent:(struct ?)arg1 stickyBits:(unsigned char)arg2 hostCell:(struct ?)arg3;
- (void)setRangeReference:(struct ?)arg0;
- (void)setHostTableID:(struct __CFUUID *)arg0;
- (char)isNonSpanningRange;
- (char)isResizable;
- (char)isSimpleRowOrColumnReference;
- (char)isBlankForKeyboardInsertion;
- (void)setBlankForKeyboardInsertion:(char)arg0;
- (void)setReferenceColorHelper:(TSTReferenceColorHelper *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSTReferenceNode *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)string;
- (void).cxx_construct;
- (char)isRange;
- (int)tokenType;

@end
