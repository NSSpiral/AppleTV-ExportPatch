/* Runtime dump - UIDocumentAlertPresenter
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate>
{
    id _completionHandler;
    NSError * _error;
    UIAlertView * _alert;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSError *)_presentAlertWithError:(NSError *)arg0 completionHandler:(id /* block */)arg1;

- (void)dealloc;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)alertViewCancel:(UIAlertView *)arg0;
- (UIDocumentAlertPresenter *)initWithError:(NSError *)arg0 completionHandler:(id /* block */)arg1;
- (void)_forceFinishNow;

@end
