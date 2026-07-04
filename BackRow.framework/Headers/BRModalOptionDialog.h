/* Runtime dump - BRModalOptionDialog
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BROptionDialog.h>

@protocol ATVAutoDismissable;

@class BREvent;
@interface BRModalOptionDialog : BROptionDialog <ATVAutoDismissable>
{
    long _cancelIdx;
    long _autoDismissIdx;
    char _allowMenuButton;
    char _allowAutoDismiss;
}

- (char)brEventAction:(BREvent *)arg0;
- (void)setAllowAutoDismiss:(char)arg0 withResult:(int)arg1;
- (long)runModal;
- (BRModalOptionDialog *)initAllowingMenuButton:(char)arg0;
- (void)setCancelIndex:(long)arg0;
- (char)autoDismiss;
- (void)_done:(id)arg0;
- (BRModalOptionDialog *)init;

@end
