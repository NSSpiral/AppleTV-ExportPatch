/* Runtime dump - BRDialog
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl, BRController, BRControllerStack, BRWindow;
@interface BRDialog : NSObject
{
    BRWindow * _window;
    BRControl * _control;
    BRControl * _dialogControl;
    NSString * _identifier;
}

+ (char)isInModalLoop;
+ (void)dismissDialogWithIdentifier:(NSString *)arg0;
+ (void)postModalDialogWithControl:(BRControl *)arg0 identifier:(NSString *)arg1 style:(int)arg2 opaque:(char)arg3;
+ (void)postModalDialogWithController:(BRController *)arg0 identifier:(NSString *)arg1;
+ (char)isDialogCurrentlyPosted;
+ (void)postDialogWithControl:(BRControl *)arg0 identifier:(NSString *)arg1 style:(int)arg2 opaque:(char)arg3;
+ (void)postModalDialogWithController:(BRController *)arg0 identifier:(NSString *)arg1 style:(int)arg2 opaque:(char)arg3;
+ (char)isDialogPostedWithIdentifier:(NSString *)arg0;
+ (void)setIsInModalLoop:(char)arg0;
+ (void)postModalDialogWithControl:(BRControl *)arg0 identifier:(NSString *)arg1;
+ (void)postModalDialogWithControllerStack:(BRControllerStack *)arg0 identifier:(NSString *)arg1 style:(int)arg2 opaque:(char)arg3;
+ (char)_autodismissIfPossible:(id)arg0;
+ (void)postModalDialog:(id)arg0;
+ (void)postDialogWithControl:(BRControl *)arg0 identifier:(NSString *)arg1;
+ (void)autoDismissAllDialogs;
+ (void)initialize;

- (void)_transitionCompleted:(id)arg0;
- (BRDialog *)initWithControl:(BRControl *)arg0 identifier:(NSString *)arg1 style:(int)arg2 opaque:(char)arg3;
- (void)transitionIn;
- (void)_dialogStackBankrupt:(id)arg0;
- (void)transitionOut;
- (BRControl *)_dialogControl;
- (void)dealloc;
- (NSString *)description;
- (NSString *)identifier;
- (BRControl *)control;

@end
