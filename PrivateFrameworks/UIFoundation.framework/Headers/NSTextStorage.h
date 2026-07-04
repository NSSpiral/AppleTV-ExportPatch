/* Runtime dump - NSTextStorage
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextStorage : NSMutableAttributedString
{
    struct _NSRange _editedRange;
    int _editedDelta;
    struct ? _flags;
    NSMutableArray * _layoutManagers;
    id _sideData;
    int _changeInLength;
}

@property (readonly, nonatomic) NSArray * layoutManagers;
@property (nonatomic) unsigned int editedMask;
@property (nonatomic) struct _NSRange editedRange;
@property (nonatomic) int changeInLength;
@property (nonatomic) <NSTextStorageDelegate> * delegate;
@property (readonly, nonatomic) char fixesAttributesLazily;

+ (NSTextStorage *)allocWithZone:(struct _NSZone *)arg0;

- (void)_undoRedoTextOperation:(NSObject *)arg0;
- (NSObject *)_undoRedoAttributedSubstringFromRange:(struct _NSRange)arg0;
- (void)edited:(unsigned int)arg0 range:(struct _NSRange)arg1 changeInLength:(int)arg2;
- (void)dealloc;
- (NSTextStorage *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setDelegate:(<NSTextStorageDelegate> *)arg0;
- (NSTextStorage *)init;
- (<NSTextStorageDelegate> *)delegate;
- (Class)classForCoder;
- (void)addLayoutManager:(NSObject *)arg0;
- (void)coordinateAccess:(id)arg0;
- (void)beginEditing;
- (void)endEditing;
- (void)coordinateEditing:(id)arg0;
- (void)_setUsesSimpleTextEffects:(char)arg0;
- (char)_usesSimpleTextEffects;
- (char)_shouldSetOriginalFontAttribute;
- (void)coordinateReading:(id)arg0;
- (struct _NSRange)editedRange;
- (unsigned int)editedMask;
- (CUICatalog *)cuiCatalog;
- (CUIStyleEffectConfiguration *)cuiStyleEffects;
- (char)_isEditing;
- (char)_lockForReading;
- (void)_unlock;
- (void)_setForceFixAttributes:(char)arg0;
- (NSArray *)layoutManagers;
- (void)removeLayoutManager:(NSObject *)arg0;
- (char)_lockForWriting;
- (char)_attributeFixingInProgress;
- (void)_setAttributeFixingInProgress:(char)arg0;
- (void)invalidateAttributesInRange:(struct _NSRange)arg0;
- (int)changeInLength;
- (void)_notifyEdited:(unsigned int)arg0 range:(struct _NSRange)arg1 changeInLength:(int)arg2 invalidatedRange:(struct _NSRange)arg3;
- (void)fontSetChanged;
- (void)processEditing;
- (char)_lockForWritingWithExceptionHandler:(char)arg0;
- (char)fixesAttributesLazily;
- (struct _NSRange)_rangeByEstimatingAttributeFixingForRange:(struct _NSRange)arg0;
- (char)_forceFixAttributes;
- (void)setEditedMask:(unsigned int)arg0;
- (void)ensureAttributesAreFixedInRange:(struct _NSRange)arg0;
- (void)setEditedRange:(struct _NSRange)arg0;
- (void)setChangeInLength:(int)arg0;
- (void)finalize;

@end
