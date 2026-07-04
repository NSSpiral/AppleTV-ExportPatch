/* Runtime dump - BROptionAlertControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BROptionDialog.h>

@protocol ATVAutoDismissable;

@class ATVTextEntryTextControl, BREvent;
@interface BROptionAlertControl : BROptionDialog <ATVAutoDismissable>
{
    long _cancelIdx;
    char _allowAutoDismiss;
    long _autoDismissIdx;
}

+ (int)postAlertWithTitle:(NSString *)arg0 primaryText:(NSString *)arg1 secondaryText:(NSString *)arg2 firstButton:(id)arg3 secondButton:(ATVTextEntryTextControl *)arg4 thirdButton:(id)arg5 defaultFocus:(int)arg6 identifier:(NSString *)arg7;
+ (int)postAlertWithTitleAndCancel:(id)arg0 primaryText:(NSString *)arg1 secondaryText:(NSString *)arg2 firstButton:(id)arg3 secondButton:(ATVTextEntryTextControl *)arg4 thirdButton:(id)arg5 defaultFocus:(int)arg6 identifier:(NSString *)arg7 cancelIndex:(int)arg8 allowAutoDismiss:(char)arg9 autoDismissIndex:(int)arg10;
+ (void)postError:(NSError *)arg0 identifier:(NSString *)arg1;
+ (int)postDeleteConfirmationWithName:(NSString *)arg0 identifier:(NSString *)arg1;
+ (void)postError:(NSError *)arg0;
+ (int)postDeleteConfirmationWithName:(NSString *)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (void)setAllowAutoDismiss:(char)arg0 withResult:(int)arg1;
- (void)setCancelIndex:(long)arg0;
- (char)autoDismiss;
- (char)_itemSelected:(id)arg0;

@end
