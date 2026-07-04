/* Runtime dump - SKStarRatingAlertViewDelegate
 * Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKStarRatingAlertViewDelegate : NSObject <UIAlertViewDelegate>
{
    SKStarRatingAlertView * _alertView;
    id _completionBlock;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)showAlertView:(NSObject *)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)dealloc;
- (void)alertViewCancel:(UIAlertView *)arg0;
- (char)alertViewShouldEnableFirstOtherButton:(id)arg0;
- (void)alertView:(SKStarRatingAlertView *)arg0 willDismissWithButtonIndex:(int)arg1;

@end
