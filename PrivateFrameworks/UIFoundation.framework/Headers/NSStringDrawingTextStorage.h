/* Runtime dump - NSStringDrawingTextStorage
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate>
{
    NSConcreteNotifyingMutableAttributedString * _contents;
    NSLayoutManager * _layoutManager;
    NSTextContainer * _textContainer;
    float _baselineDelta;
    struct ? _sdflags;
    CUICatalog * _catalog;
    CUIStyleEffectConfiguration * _styleEffects;
    float _defaultTighteningFactor;
}

@property (retain, nonatomic) CUICatalog * cuiCatalog;
@property (retain, nonatomic) CUIStyleEffectConfiguration * cuiStyleEffects;
@property (nonatomic) char usesSimpleTextEffects;
@property float defaultTighteningFactor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (NSStringDrawingTextStorage *)allocWithZone:(struct _NSZone *)arg0;
+ (void)_setHasCustomSettings:(char)arg0;
+ (char)_hasCustomSettings;
+ (NSStringDrawingTextStorage *)stringDrawingTextStorage;

- (void)release;
- (NSStringDrawingTextStorage *)init;
- (unsigned int)length;
- (NSString *)string;
- (char)_tryRetain;
- (char)_isDeallocating;
- (void)addAttribute:(struct __CFString *)arg0 value:(NSObject *)arg1 range:(struct _NSRange)arg2;
- (NSLayoutManager *)layoutManager;
- (struct CGRect)usedRectForTextContainer:(NSObject *)arg0;
- (NSObject *)attribute:(NSObject *)arg0 atIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (NSTextContainer *)textContainer;
- (void)setAttributes:(NSDictionary *)arg0 range:(struct _NSRange)arg1;
- (NSObject *)attribute:(NSObject *)arg0 atIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (void)_setUsesSimpleTextEffects:(char)arg0;
- (char)_usesSimpleTextEffects;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withString:(NSString *)arg1;
- (NSObject *)attributesAtIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1;
- (char)_shouldSetOriginalFontAttribute;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withAttributedString:(NSAttributedString *)arg1;
- (CUICatalog *)cuiCatalog;
- (CUIStyleEffectConfiguration *)cuiStyleEffects;
- (char)_isStringDrawingTextStorage;
- (int)typesetterBehavior;
- (void)_setBaselineDelta:(float)arg0;
- (char)_baselineMode;
- (char)_forceWordWrapping;
- (void)_setForceWordWrapping:(char)arg0;
- (float)defaultTighteningFactor;
- (void)setDefaultTighteningFactor:(float)arg0;
- (void)setCuiCatalog:(CUICatalog *)arg0;
- (void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg0;
- (NSString *)textContainerForAttributedString:(NSString *)arg0 containerSize:(struct CGSize)arg1 lineFragmentPadding:(float)arg2;
- (void)_setBaselineMode:(char)arg0;
- (void)drawTextContainer:(NSObject *)arg0 withRect:(struct CGRect)arg1 graphicsContext:(struct CGSize)arg2 baselineMode:(id)arg3 scrollable:(struct CGContext *)arg4 padding:(char)arg5;
- (float)_baselineDelta;
- (struct CGPoint)defaultTextContainerOriginForRect:(struct CGRect)arg0;
- (NSString *)textContainerForAttributedString:(NSString *)arg0;
- (void)fontSetChanged;
- (void)processEditing;

@end
