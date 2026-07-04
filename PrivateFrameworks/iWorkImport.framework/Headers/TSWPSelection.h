/* Runtime dump - TSWPSelection
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPSelection : TSKSelection <TSDTextSelection>
{
    int _type;
    struct _NSRange _range;
    unsigned int _headChar;
    unsigned int _tailChar;
    char _leadingEdge;
    unsigned int _leadingCharIndex;
    char _validVisualRanges;
    int _styleInsertionBehavior;
    int _caretAffinity;
    struct _NSRange _smartFieldRange;
    struct TSWPRangeVector _visualRanges;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) struct _NSRange rawRange;
@property (readonly, nonatomic) struct _NSRange smartFieldRange;
@property (nonatomic) unsigned int headChar;
@property (nonatomic) unsigned int tailChar;
@property (readonly, nonatomic) char leadingEdge;
@property (readonly, nonatomic) unsigned int leadingCharIndex;
@property (readonly, nonatomic) char validVisualRanges;
@property (readonly, nonatomic) char isVisual;
@property (readonly, nonatomic) int styleInsertionBehavior;
@property (readonly, nonatomic) int caretAffinity;
@property (readonly, nonatomic) char isAtEndOfLine;
@property (readonly, nonatomic) char isRange;
@property (readonly, nonatomic) char isInsertionPoint;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char isEmpty;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct _NSRange range;

+ (NSObject *)selectionWithRange:(struct _NSRange)arg0;
+ (Class)archivedSelectionClass;
+ (NSObject *)selectionWithRange:(struct _NSRange)arg0 type:(int)arg1 leadingEdge:(char)arg2 storage:(TSWPStorage *)arg3;
+ (TSWPSelection *)selectionFromWPSelection:(id)arg0;
+ (char)p_checkEndOfLineFlagForRange:(struct _NSRange *)arg0 leadingEdge:(char *)arg1 type:(int *)arg2 endOfLine:(char)arg3 storage:(TSWPStorage *)arg4;

- (void)saveToArchive:(struct SelectionArchive *)arg0 archiver:(NSObject *)arg1;
- (char)isAtEndOfLine;
- (char)isInsertionPoint;
- (struct _NSRange)superRange;
- (char)isVisual;
- (struct TSWPRangeVector *)visualRanges;
- (unsigned int)visualRangeCount;
- (NSObject *)copyWithNewRange:(struct _NSRange)arg0;
- (NSArray *)copyWithNewVisualRanges:(struct TSWPRangeVector *)arg0;
- (NSObject *)copyWithNewType:(int)arg0 range:(struct _NSRange)arg1;
- (NSArray *)visualRangesArray;
- (int)caretAffinity;
- (unsigned int)insertionChar;
- (char)leadingEdge;
- (TSWPSelection *)initWithType:(int)arg0 range:(struct _NSRange)arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 smartFieldRange:(struct _NSRange)arg4 leadingEdge:(char)arg5 leadingCharIndex:(unsigned int)arg6;
- (TSWPSelection *)initWithType:(int)arg0 range:(struct _NSRange)arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3 smartFieldRange:(struct _NSRange)arg4 leadingEdge:(char)arg5 storage:(TSWPStorage *)arg6;
- (struct _NSRange)rawRange;
- (int)styleInsertionBehavior;
- (struct _NSRange)smartFieldRange;
- (unsigned int)leadingCharIndex;
- (char)p_isEqual:(id)arg0;
- (void)setHeadChar:(unsigned int)arg0 tailChar:(unsigned int)arg1;
- (void)i_setVisualRanges:(struct TSWPRangeVector *)arg0;
- (TSWPSelection *)initWithType:(int)arg0 range:(struct _NSRange)arg1 styleInsertionBehavior:(int)arg2 caretAffinity:(int)arg3;
- (char)isEquivalentForInsertionStyle:(NSObject *)arg0;
- (NSObject *)copyWithNewType:(int)arg0 smartFieldRange:(struct _NSRange)arg1;
- (NSObject *)copyWithNewVisualTypeRange:(struct _NSRange)arg0 head:(unsigned int)arg1 tail:(unsigned int)arg2;
- (NSObject *)copyWithNewType:(int)arg0;
- (NSObject *)constrainToRange:(struct _NSRange)arg0;
- (NSArray *)copyWithVisualRanges:(struct TSWPRangeVector *)arg0 startChar:(struct TSWPRangeVector)arg1 endChar:(struct _NSRange *)arg2 rightToLeft:(struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> >)arg3 sameLine:(id)arg4;
- (id)copyWithNewStyleInsertionBehavior:(int)arg0 caretAffinity:(int)arg1;
- (struct TSWPRangeVector *)i_visualRanges;
- (unsigned int)leftEdge;
- (unsigned int)rightEdge;
- (char)containsCharacterAtIndex:(unsigned int)arg0;
- (char)containsCharacterAtIndex:(unsigned int)arg0 allowRightEdge:(char)arg1;
- (unsigned int)headChar;
- (void)setHeadChar:(unsigned int)arg0;
- (unsigned int)tailChar;
- (void)setTailChar:(unsigned int)arg0;
- (char)validVisualRanges;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (int)compare:(NSObject *)arg0;
- (char)isValid;
- (int)type;
- (TSWPSelection *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (unsigned int)start;
- (unsigned int)end;
- (struct _NSRange)range;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)isRange;
- (TSWPSelection *)initWithArchive:(struct SelectionArchive *)arg0;
- (TSWPSelection *)initWithRange:(struct _NSRange)arg0;
- (char)intersectsRange:(struct _NSRange)arg0;

@end
