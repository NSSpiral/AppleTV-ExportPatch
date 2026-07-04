/* Runtime dump - BLAlert
 * Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface BLAlert : NSObject <BLAlertViewControllerDelegate, UIAlertViewDelegate>
{
    BLAlertAction * _cancelAction;
    NSArray * _actions;
    id _conditionBlock;
    id _context;
    id _executionBlock;
    char _showing;
    int _options;
    BLAlertViewController * _alertView;
    BLAlert * _strongSelf;
}

@property (copy) id conditionBlock;
@property (retain) id context;
@property (retain) BLAlert * strongSelf;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BLAlert *)pendingAlerts;
+ (BLAlert *)popPendingAlert;
+ (void)pushPendingAlert:(id)arg0;
+ (void)performWithTitle:(NSString *)arg0 message:(NSString *)arg1 action:(NSObject *)arg2;

- (void)hide;
- (void)show;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (void)setMessage:(NSString *)arg0;
- (void).cxx_destruct;
- (char)isShowing;
- (void)hide:(char)arg0;
- (void)alertViewController:(BLAlertViewController *)arg0 didPressButtonAtIndex:(int)arg1;
- (BLAlert *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 cancelAction:(BLAlertAction *)arg2 otherActions:(id)arg3;
- (id /* block */)conditionBlock;
- (void)showPendingAlertIfNeeded;
- (char)wantSingular;
- (void)setStrongSelf:(BLAlert *)arg0;
- (void)cancelDelayedHide;
- (void)hideWithCompletionBlock:(id /* block */)arg0;
- (BLAlert *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 options:(int)arg2 cancelAction:(BLAlertAction *)arg3 otherActions:(id)arg4;
- (void)showWithExecutionBlock:(id /* block */)arg0;
- (void)hideWithDelay:(double)arg0;
- (void)hideWithDelay:(double)arg0 completionBlock:(id /* block */)arg1;
- (void)setConditionBlock:(id /* block */)arg0;
- (BLAlert *)strongSelf;

@end
