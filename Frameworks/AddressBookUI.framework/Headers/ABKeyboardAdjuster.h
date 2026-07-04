/* Runtime dump - ABKeyboardAdjuster
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABKeyboardAdjuster : NSObject
{
    NSMutableSet * _adjustmentRecords;
    char _active;
}

@property (nonatomic) char active;

+ (ABKeyboardAdjuster *)sharedAdjuster;

- (NSObject *)recordForScrollView:(NSObject *)arg0;
- (char)containsScrollView:(NSObject *)arg0;
- (char)shouldForceAutomaticKeyboardForView:(NSObject *)arg0;
- (void)textFieldTextDidBeginEditingNotification:(NSNotification *)arg0;
- (void)textFieldTextDidEndEditingNotification:(NSNotification *)arg0;
- (void)textViewTextDidBeginEditingNotification:(NSNotification *)arg0;
- (void)textViewTextDidEndEditingNotification:(NSNotification *)arg0;
- (void)dateFieldDateDidBeginEditingNotification:(NSNotification *)arg0;
- (void)dateFieldDateDidEndEditingNotification:(NSNotification *)arg0;
- (void)cancelDelayedAdjustmentsForView:(NSObject *)arg0;
- (void)manuallyAdjustEdgeInsets:(struct UIEdgeInsets)arg0 force:(char)arg1;
- (void)addScrollView:(NSObject *)arg0;
- (void)removeScrollView:(NSObject *)arg0;
- (void)resetAdjustment;
- (void)dealloc;
- (ABKeyboardAdjuster *)init;
- (char)active;
- (void)_keyboardWillShow:(NSNotification *)arg0;
- (void)_keyboardWillHide:(NSNotification *)arg0;
- (void)setActive:(char)arg0;
- (void)_adjustTableForKeyboardInfo:(NSDictionary *)arg0;

@end
