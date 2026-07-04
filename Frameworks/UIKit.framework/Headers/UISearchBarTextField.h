/* Runtime dump - UISearchBarTextField
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchBarTextField : UITextField
{
    NSMutableDictionary * _customClearButtons;
    NSMutableDictionary * _iconOffsets;
    NSValue * _searchTextOffsetValue;
    _UISearchBarSearchFieldBackgroundView * _effectBackgroundTop;
    _UISearchBarSearchFieldBackgroundView * _effectBackgroundBottom;
    char _deferringFirstResponder;
    char _animatePlaceholderOnResignFirstResponder;
    char __preventSelectionViewActivation;
}

@property (retain, nonatomic) NSValue * _searchTextOffsetValue;
@property (nonatomic) char _preventSelectionViewActivation;

- (UISearchBarTextField *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (char)resignFirstResponder;
- (char)_becomeFirstResponderWhenPossible;
- (char)canBecomeFirstResponder;
- (void)tintColorDidChange;
- (char)_hasActionForEventMask:(int)arg0;
- (NSArray *)textInputTraits;
- (struct CGRect)editingRectForBounds:(id)arg0;
- (void)_becomeFirstResponder;
- (char)canResignFirstResponder;
- (struct CGRect)textRectForBounds:(id)arg0;
- (struct CGRect)rightViewRectForBounds:(id)arg0;
- (UIColor *)_placeholderColor;
- (char)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (void)_setClearButtonImage:(UIImage *)arg0 forState:(unsigned int)arg1;
- (void)_setSearchTextOffetValue:(id)arg0;
- (NSValue *)_searchTextOffsetValue;
- (void)_setOffsetValue:(id)arg0 forIcon:(int)arg1;
- (UIImage *)_offsetValueForIcon:(int)arg0;
- (struct CGRect)leftViewRectForBounds:(id)arg0;
- (void)updateForBackdropStyle:(unsigned int)arg0;
- (void)_removeEffectsBackgroundViews;
- (void)_setPreventSelectionViewActivation:(char)arg0;
- (void)_activateSelectionView;
- (void)_setEnabled:(char)arg0 animated:(char)arg1;
- (void)_setBottomEffectBackgroundVisible:(char)arg0;
- (NSObject *)_clearButtonImageForState:(unsigned int)arg0;
- (struct CGRect)_adjustedTextOrEditingRect:(NSObject *)arg0 forBounds:(SEL)arg1;
- (struct CGRect)_adjustmentsForLeftViewRectForBounds:(id)arg0;
- (char)_shouldCenterPlaceholder;
- (struct CGRect)placeholderRectForBounds:(id)arg0;
- (struct CGSize)_clearButtonSize;
- (struct CGRect)clearButtonRectForBounds:(id)arg0;
- (struct CGRect)_availableTextRectForBounds:(id)arg0 forEditing:(SEL)arg1;
- (struct CGRect)_suffixFrame;
- (void)_updateBackgroundView:(NSObject *)arg0 withStyle:(unsigned int)arg1 filter:(id /* block */)arg2;
- (NSObject *)_createEffectsBackgroundViewWithStyle:(unsigned int)arg0 applyFilter:(NSObject *)arg1;
- (void)_updateBackgroundViewsAnimated:(char)arg0;
- (void)_clearBackgroundViews;
- (char)_preventSelectionViewActivation;
- (int)_suffixLabelTextAlignment;
- (Class)_placeholderLabelClass;
- (Class)_systemBackgroundViewClass;

@end
