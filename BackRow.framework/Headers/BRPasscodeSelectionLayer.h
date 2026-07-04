/* Runtime dump - BRPasscodeSelectionLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRImageControl, BRPasscodeSelectionWidget, BRTextControl;
@interface BRPasscodeSelectionLayer : BRControl
{
    NSArray * _backgroundLayers;
    NSArray * _digitLayers;
    NSArray * _bulletLayers;
    BRImageControl * _arrowsLayer;
    BRPasscodeSelectionWidget * _selectionWidget;
    BRTextControl * _doneLayer;
    char _isUserEditable;
    unsigned int _numDigits;
    char _hideDigits;
    int _selection;
}

- (NSArray *)accessibilityTraitsList;
- (struct CGRect)preferredFrameForScreenSize:(NSObject *)arg0;
- (char)moveSelectionLeft;
- (char)moveSelectionRight;
- (char)incrementSelection;
- (char)decrementSelection;
- (char)setValueAtSelection:(int)arg0;
- (char)doneButtonSelected;
- (id)_buildDigitLayers;
- (CALayer *)_buildArrowsLayer;
- (CALayer *)_buildDoneLayer;
- (float)_layoutUIWithHeight:(float)arg0;
- (void)_setSelection:(int)arg0;
- (void)_setDigitValue:(id)arg0 atIndex:(int)arg1;
- (struct CGRect)_arrowsFrameForSelection:(id)arg0;
- (struct CGRect)_selectionWidgetFrameForSelection:(id)arg0;
- (void)_setDigitHighlighted:(char)arg0 atIndex:(int)arg1;
- (struct CGRect)_cellFrameForSelection:(id)arg0;
- (BRPasscodeSelectionLayer *)initWithNumDigits:(unsigned int)arg0 userEditable:(char)arg1 hideDigits:(char)arg2;
- (float)widthOfDigitsForScreenSize:(struct CGSize)arg0;
- (void)setPasscode:(NSString *)arg0;
- (void)showDigits;
- (char)digitsHidden;
- (void)hideDigits:(int)arg0;
- (id)_buildBackgroundLayers;
- (id)_buildBulletLayers;
- (void)_adjustDigitVisibility:(id)arg0;
- (void)_hideDigitAtIndex:(int)arg0;
- (struct CGRect)_digitFrameForSelection:(id)arg0 digit:(SEL)arg1;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)reset;
- (NSString *)accessibilityLabel;
- (char)setSelection:(int)arg0;
- (NSString *)passcode;

@end
