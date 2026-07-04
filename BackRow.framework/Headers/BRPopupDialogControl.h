/* Runtime dump - BRPopupDialogControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol ATVAutoDismissable;

@class BRBackdropGradientControl, BRControl;
@interface BRPopupDialogControl : BRControl <ATVAutoDismissable>
{
    BRControl * _contentView;
    NSString * _identifier;
    BRBackdropGradientControl * _backdropControl;
    id _autoDismissHandler;
    struct ? _extraInsetSize;
}

@property (retain, nonatomic) BRControl * contentView;
@property (nonatomic) struct ? extraInsetSize;
@property (copy, nonatomic) id autoDismissHandler;

- (void)setAllowAutoDismiss:(char)arg0 withResult:(int)arg1;
- (void)layoutSubcontrols;
- (void)_handleWindowMaxBoundsChanged;
- (void)setAutoDismissHandler:(id /* block */)arg0;
- (char)autoDismiss;
- (NSObject *)_computeFramesForSize:(struct CGSize)arg0;
- (void)setExtraInsetSize:(struct ?)arg0;
- (id /* block */)autoDismissHandler;
- (struct ?)extraInsetSize;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (BRControl *)contentView;
- (void)setContentView:(BRControl *)arg0;
- (BRPopupDialogControl *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_destruct;

@end
