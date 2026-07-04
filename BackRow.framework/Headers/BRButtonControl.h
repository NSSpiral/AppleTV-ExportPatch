/* Runtime dump - BRButtonControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRTextControl;
@interface BRButtonControl : BRControl
{
    int _style;
    BRControl<ATVButtonImageControl> * _imageControl;
    BRControl<ATVButtonImageControl> * _badgeControl;
    BRTextControl * _titleControl;
    BRTextControl * _subtitleControl;
    BRControl<ATVButtonImageControl> * _overlayImageControl;
    BRControl<ATVButtonImageControl> * _backgroundImageControl;
    BRControl<ATVButtonImageControl> * _bottomBackgroundImageControl;
    ATVImage * _image;
    ATVImage * _highlightedImage;
    NSArray * _subcontrolOrder;
    char _subcontrolsNeedSorting;
    char _buttonEnabled;
    struct CGSize _inset;
    float _imageYOffset;
    char _centerImage;
    NSAttributedString * _badgeText;
    NSAttributedString * _subtitle;
}

@property (copy, nonatomic) NSAttributedString * badgeText;
@property (copy, nonatomic) NSAttributedString * subtitle;
@property (nonatomic) char centerImage;

+ (UIImage *)actionButtonWithImage:(ATVImage *)arg0 subtitle:(NSAttributedString *)arg1 badge:(UIImage *)arg2;
+ (NSString *)actionButtonWithTitle:(NSString *)arg0 subtitle:(NSAttributedString *)arg1 badge:(UIImage *)arg2;
+ (UIImage *)actionButtonWithImage:(ATVImage *)arg0 subtitle:(NSAttributedString *)arg1 badgeText:(NSAttributedString *)arg2;
+ (NSString *)dashedActionButtonWithTitle:(NSString *)arg0 subtitle:(NSAttributedString *)arg1 selectable:(char)arg2;
+ (NSString *)actionButtonWithTitle:(NSString *)arg0 subtitle:(NSAttributedString *)arg1 badgeText:(NSAttributedString *)arg2;
+ (NSString *)dialogButtonWithTitle:(NSString *)arg0;

- (void)layoutSubcontrols;
- (void)controlWasActivated;
- (void)controlWasFocused;
- (void)controlWasUnfocused;
- (void)setCenterImage:(char)arg0;
- (NSArray *)accessibilityTraitsList;
- (void)setButtonStyle:(int)arg0;
- (void)setNonAttributedSubtitle:(id)arg0;
- (void)setNonAttributedTitle:(NSString *)arg0;
- (void)setNonAttributedBadgeText:(NSString *)arg0;
- (void)setBadgeText:(NSAttributedString *)arg0;
- (void)setOverlayImage:(ATVImage *)arg0;
- (UIImage *)_actionButtonBackgroundImage;
- (UIImage *)_actionButtonSheenImage;
- (UIImage *)_imageControlWithImage:(ATVImage *)arg0;
- (char)centerImage;
- (id)_nonFocusedOpacityForControlNamed:(id)arg0;
- (CALayer *)_addFadeAnimationToLayer:(id)arg0 forKey:(NSString *)arg1;
- (void)_updateFocusOpacityOfControl:(BRControl *)arg0;
- (void)_addOpacityFadeAnimationIfNeededToControl:(BRControl *)arg0;
- (void)_addSortedControl:(BRControl *)arg0;
- (void)_setBackgroundHighlightImage:(UIImage *)arg0;
- (void)_setBottomBackgroundHighlightImage:(UIImage *)arg0;
- (void)_updateImageLayer;
- (void)_updateBackgroundDialogImages;
- (void)_updateAllFocusOpacities;
- (void)_focusWasChanged;
- (void)_setNonAttributedTitle:(NSString *)arg0;
- (void)_layoutDialogSublayers;
- (void)_layoutActionSublayers;
- (void)_layoutDashedSublayers;
- (void)_layoutGlossySublayers;
- (void)_setControlOrderArray:(NSArray *)arg0;
- (void)setBadgeImage:(UIImage *)arg0;
- (void)_setNonAttributedSubtitle:(id)arg0;
- (NSAttributedString *)badgeText;
- (void)_updateSubtitleControl;
- (NSString *)_attributesForSubtitle;
- (UIImage *)badgeImage;
- (UIImage *)overayImage;
- (void)dealloc;
- (void)setInset:(struct CGSize)arg0;
- (void)setImage:(ATVImage *)arg0;
- (BRButtonControl *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (ATVImage *)image;
- (NSString *)accessibilityLabel;
- (ATVImage *)highlightedImage;
- (NSAttributedString *)subtitle;
- (void)setHighlightedImage:(ATVImage *)arg0;
- (void)setSubtitle:(NSAttributedString *)arg0;
- (char)isAccessibilityElement;
- (struct CGSize)inset;
- (void)setButtonEnabled:(char)arg0;

@end
