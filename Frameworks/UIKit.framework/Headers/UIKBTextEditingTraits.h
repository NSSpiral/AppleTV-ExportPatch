/* Runtime dump - UIKBTextEditingTraits
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTextEditingTraits : NSObject
{
    char _canToggleBoldface;
    char _canToggleItalics;
    char _canToggleUnderline;
    char _supportStyling;
    char _canCut;
    char _canCopy;
    char _canPaste;
    char _canMoveCursorLeft;
    char _canMoveCursorRight;
    char _isBold;
    char _isItalicized;
    char _isUnderlined;
}

@property (readonly, nonatomic) char isBold;
@property (readonly, nonatomic) char isItalicized;
@property (readonly, nonatomic) char isUnderlined;
@property (readonly, nonatomic) char canToggleBoldface;
@property (readonly, nonatomic) char canToggleItalics;
@property (readonly, nonatomic) char canToggleUnderline;
@property (readonly, nonatomic) char supportStyling;
@property (nonatomic) char canCut;
@property (readonly, nonatomic) char canCopy;
@property (readonly, nonatomic) char canPaste;
@property (readonly, nonatomic) char canMoveCursorLeft;
@property (readonly, nonatomic) char canMoveCursorRight;

+ (NSObject *)traitsWithResponder:(UIResponder *)arg0 keyMaskFlags:(unsigned int)arg1;

- (UIKBTextEditingTraits *)initWithResponder:(UIResponder *)arg0 keyMaskFlags:(unsigned int)arg1;
- (char)canToggleBoldface;
- (char)canToggleItalics;
- (char)canToggleUnderline;
- (char)supportStyling;
- (char)canCut;
- (void)setCanCut:(char)arg0;
- (char)canCopy;
- (char)canPaste;
- (char)canMoveCursorLeft;
- (char)canMoveCursorRight;
- (char)isBold;
- (char)isItalicized;
- (char)isUnderlined;

@end
