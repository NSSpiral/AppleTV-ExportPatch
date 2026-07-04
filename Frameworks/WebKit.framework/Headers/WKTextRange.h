/* Runtime dump - WKTextRange
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKTextRange : UITextRange
{
    struct CGRect _startRect;
    struct CGRect _endRect;
    char _isNone;
    char _isRange;
    char _isEditable;
    NSArray * _selectionRects;
    unsigned int _selectedTextLength;
}

@property (nonatomic) struct CGRect startRect;
@property (nonatomic) struct CGRect endRect;
@property (nonatomic) char isNone;
@property (nonatomic) char isRange;
@property (nonatomic) char isEditable;
@property (nonatomic) unsigned int selectedTextLength;
@property (copy, nonatomic) NSArray * selectionRects;

+ (WKTextRange *)textRangeWithState:(char)arg0 isRange:(char)arg1 isEditable:(char)arg2 startRect:(struct CGRect)arg3 endRect:(struct CGSize)arg4 selectionRects:(NSArray *)arg5 selectedTextLength:(struct CGRect)arg6;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (char)isEditable;
- (char)isEmpty;
- (struct CGRect)endRect;
- (struct CGPoint)start;
- (struct CGPoint)end;
- (char)_isRanged;
- (void).cxx_construct;
- (NSArray *)selectionRects;
- (char)_isCaret;
- (void)setStartRect:(struct CGRect)arg0;
- (void)setEndRect:(struct CGRect)arg0;
- (struct CGRect)startRect;
- (void)setIsNone:(char)arg0;
- (void)setIsRange:(char)arg0;
- (void)setIsEditable:(char)arg0;
- (void)setSelectedTextLength:(unsigned int)arg0;
- (void)setSelectionRects:(NSArray *)arg0;
- (char)isRange;
- (char)isNone;
- (unsigned int)selectedTextLength;

@end
