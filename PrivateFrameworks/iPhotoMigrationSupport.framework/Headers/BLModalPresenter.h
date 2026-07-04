/* Runtime dump - BLModalPresenter
 * Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
 */

@interface BLModalPresenter : UIWindow <UIKeyInput>
{
    BLModalPresenterRootViewController * _rootViewController;
    NSMutableArray * _controllers;
    struct CGRect _keyboard;
    int _lockCount;
    char _keyboardVisible;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) int autocapitalizationType;
@property (nonatomic) int autocorrectionType;
@property (nonatomic) int spellCheckingType;
@property (nonatomic) int keyboardType;
@property (nonatomic) int keyboardAppearance;
@property (nonatomic) int returnKeyType;
@property (nonatomic) char enablesReturnKeyAutomatically;
@property (nonatomic) char secureTextEntry;

+ (_UIAlertControllerShimPresenter *)presenter;

- (void)dealloc;
- (BLModalPresenter *)init;
- (char)canBecomeFirstResponder;
- (char)hasText;
- (void)insertText:(NSString *)arg0;
- (void)deleteBackward;
- (void)keyboardDidShow:(id)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (char)keyboardVisible;
- (void).cxx_destruct;
- (void)orientationDidChange:(NSDictionary *)arg0;
- (void)showController:(BRController *)arg0;
- (void)keyboardWillShow:(id)arg0;
- (char)hidden;
- (void)orientationWillChange:(NSDictionary *)arg0;
- (void)keyboardWillHide:(id)arg0;
- (void)configureForOncreen:(id)arg0 orientation:(int)arg1;
- (void)layoutForOrientation:(int)arg0;
- (struct CGSize)formSheetSizeForController:(BRController *)arg0 withOrientation:(int)arg1;
- (void)showController:(BRController *)arg0 withCompletionBlock:(id /* block */)arg1;
- (void)configureForOffscreen:(id)arg0 orientation:(int)arg1;
- (void)lockKeyboard;
- (void)unlockKeyboard;
- (void)hideController:(BRController *)arg0 animated:(char)arg1 withCompletion:(id /* block */)arg2;

@end
