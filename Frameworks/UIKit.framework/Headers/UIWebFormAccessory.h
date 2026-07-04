/* Runtime dump - UIWebFormAccessory
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebFormAccessory : UIInputView
{
    UIToolbar * _leftToolbar;
    UIToolbar * _rightToolbar;
    UIBarButtonItem * _doneButton;
    UIBarButtonItem * _flexibleSpaceItem;
    UIBarButtonItem * _previousItem;
    UIBarButtonItem * _nextItem;
    UISegmentedControl * _tab;
    UIBarButtonItem * _autofill;
    UIBarButtonItem * _clearButton;
    <UIWebFormAccessoryDelegate> * delegate;
}

@property (retain, nonatomic) UISegmentedControl * _tab;
@property (retain, nonatomic) UIBarButtonItem * _autofill;
@property (retain, nonatomic) UIBarButtonItem * _clearButton;
@property (nonatomic) <UIWebFormAccessoryDelegate> * delegate;
@property (nonatomic) char nextEnabled;
@property (nonatomic) char previousEnabled;

+ (NSArray *)toolbarWithItems:(NSArray *)arg0;

- (UIWebFormAccessory *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(<UIWebFormAccessoryDelegate> *)arg0;
- (void)layoutSubviews;
- (<UIWebFormAccessoryDelegate> *)delegate;
- (void)_setRenderConfig:(NSObject *)arg0;
- (UIBarButtonItem *)_clearButton;
- (void)_tabSegmentedControlDidChange:(NSDictionary *)arg0;
- (void)_previousTapped:(id)arg0;
- (void)_nextTapped:(id)arg0;
- (void)done:(char)arg0;
- (void)_updateFrame;
- (void)_orientationDidChange:(NSDictionary *)arg0;
- (void)_refreshAutofillPresentation;
- (void)_applyTreatmentToAutoFillLabel;
- (id)_autoFillButton;
- (void)set_autofill:(UIBarButtonItem *)arg0;
- (void)autoFill:(id)arg0;
- (void)showAutoFillButtonWithTitle:(NSString *)arg0;
- (void)clear:(NSString *)arg0;
- (void)set_clearButton:(UIBarButtonItem *)arg0;
- (void)hideAutoFillButton;
- (void)showAutoFillButton;
- (void)setClearVisible:(char)arg0;
- (void)setNextEnabled:(char)arg0;
- (char)isNextEnabled;
- (void)setPreviousEnabled:(char)arg0;
- (char)isPreviousEnabled;
- (UISegmentedControl *)_tab;
- (void)set_tab:(UISegmentedControl *)arg0;
- (UIBarButtonItem *)_autofill;

@end
