/* Runtime dump - UIActionSheet
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActionSheet : UIView <UIPopoverControllerDelegate>
{
    UIAlertController * _alertController;
    _UIAlertControllerShimPresenter * _presenter;
    NSMutableArray * _actions;
    int _cancelIndex;
    int _firstOtherButtonIndex;
    int _destructiveButtonIndex;
    int _actionSheetStyle;
    id _context;
    char _hasPreparedAlertActions;
    char _isPresented;
    char _alertControllerShouldDismiss;
    char _handlingAlertActionShouldDismiss;
    char _dismissingAlertController;
    _UIWeakRef * _weakDelegate;
}

@property (nonatomic) <UIActionSheetDelegate> * delegate;
@property (copy, nonatomic) NSString * title;
@property (nonatomic) int actionSheetStyle;
@property (readonly, nonatomic) int numberOfButtons;
@property (nonatomic) int cancelButtonIndex;
@property (nonatomic) int destructiveButtonIndex;
@property (readonly, nonatomic) int firstOtherButtonIndex;
@property (readonly, nonatomic) char visible;
@property (retain, nonatomic) _UIWeakRef * weakDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)_isAlertControllerShimClass;
+ (Class)_popoverControllerClass;

- (UIActionSheet *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<UIActionSheetDelegate> *)arg0;
- (_UIPageViewControllerContentView *)_contentView;
- (void)setTitle:(NSString *)arg0;
- (<UIActionSheetDelegate> *)delegate;
- (int)cancelButtonIndex;
- (void)dismissWithClickedButtonIndex:(int)arg0 animated:(char)arg1;
- (int)addButtonWithTitle:(NSString *)arg0;
- (void)setCancelButtonIndex:(int)arg0;
- (NSString *)title;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (NSString *)message;
- (UILabel *)_titleLabel;
- (NSString *)subtitle;
- (void)showInView:(NSObject *)arg0;
- (void)setSubtitle:(NSString *)arg0;
- (void)setMessage:(NSString *)arg0;
- (char)isVisible;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (void)setDefaultButtonIndex:(int)arg0;
- (int)firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(int)arg0;
- (void)_dismissForTappedIndex:(int)arg0;
- (char)_prepareToDismissForTappedIndex:(int)arg0;
- (NSObject *)_preparedAlertActionAtIndex:(unsigned int)arg0;
- (void)setWeakDelegate:(_UIWeakRef *)arg0;
- (_UIWeakRef *)weakDelegate;
- (UIAlertController *)_alertController;
- (void)_performPresentationDismissalWithClickedButtonIndex:(int)arg0 animated:(char)arg1;
- (void)_prepareAlertActions;
- (int)numberOfButtons;
- (void)_setIsPresented:(char)arg0;
- (void)setBodyText:(NSString *)arg0;
- (NSString *)bodyText;
- (void)setTaglineText:(NSString *)arg0;
- (NSString *)addButtonWithTitle:(NSString *)arg0 label:(NSString *)arg1;
- (NSObject *)buttonAtIndex:(int)arg0;
- (NSObject *)_buttonAtIndex:(int)arg0;
- (NSObject *)buttonTitleAtIndex:(int)arg0;
- (void)presentSheetInView:(NSObject *)arg0;
- (void)setTitleMaxLineCount:(int)arg0;
- (void)setDimView:(UIView *)arg0;
- (void)setDimsBackground:(char)arg0;
- (int)numberOfLinesInTitle;
- (char)_isSBAlert;
- (NSString *)_addButtonWithTitle:(NSString *)arg0 label:(NSString *)arg1;
- (void)setDestructiveButtonIndex:(int)arg0;
- (void)_didPresent;
- (void)_showFromRect:(struct CGRect)arg0 inView:(struct CGSize)arg1 direction:(TDThemeDirection *)arg2 animated:(char)arg3;
- (void)showFromBarButtonItem:(NSObject *)arg0 animated:(char)arg1;
- (void)setIndexOfSelectedButton:(int)arg0;
- (UIActionSheet *)initWithTitle:(NSString *)arg0 delegate:(<UIActionSheetDelegate> *)arg1 cancelButtonTitle:(NSString *)arg2 destructiveButtonTitle:(NSString *)arg3 otherButtonTitles:(id)arg4;
- (void)setActionSheetStyle:(int)arg0;
- (int)actionSheetStyle;
- (int)destructiveButtonIndex;
- (void)showFromToolbar:(id)arg0;
- (void)showFromTabBar:(id)arg0;
- (void)showFromRect:(struct CGRect)arg0 inView:(struct CGSize)arg1 animated:(char)arg2;
- (void)presentFromBarButtonItem:(NSObject *)arg0 direction:(unsigned int)arg1 allowInteractionWithViews:(id)arg2 backgroundStyle:(int)arg3 animated:(char)arg4;
- (void)presentFromRect:(struct CGRect)arg0 inView:(struct CGSize)arg1 direction:(TDThemeDirection *)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(unsigned int)arg4 animated:(char)arg5;
- (NSObject *)_relinquishPopoverController;
- (void)presentSheetInContentView:(NSObject *)arg0;
- (void)setInPopover:(char)arg0;
- (void)setUseThreeColumnsButtonsLayout:(char)arg0;
- (char)useThreeColumnsButtonsLayout;
- (void)_setIndexesOfSelectedButtons:(id)arg0;
- (void)_toggleButtonSelectionAtIndex:(unsigned int)arg0;
- (id)_indexesOfSelectedButtons;
- (void)setSelectedButtonGlyphImage:(UIImage *)arg0;
- (void)setSelectedButtonGlyphHighlightedImage:(UIImage *)arg0;
- (void)_setAttributedTitleString:(NSString *)arg0;
- (NSString *)_attributedTitleString;
- (void)_setContentView:(NSObject *)arg0;
- (NSString *)addMediaButtonWithTitle:(NSString *)arg0 iconView:(UIImageView *)arg1 andTableIconView:(NSObject *)arg2;
- (NSString *)_addMediaButtonWithTitle:(NSString *)arg0 iconView:(UIImageView *)arg1 andTableIconView:(NSObject *)arg2;

@end
