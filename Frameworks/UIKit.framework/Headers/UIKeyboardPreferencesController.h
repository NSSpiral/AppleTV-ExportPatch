/* Runtime dump - UIKeyboardPreferencesController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardPreferencesController : NSObject

@property int handBias;

+ (UIKeyboardPreferencesController *)sharedPreferencesController;
+ (void)handleSpecificHardwareKeyboard;

- (char)boolForKey:(int)arg0;
- (NSString *)valueForKey:(int)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(int)arg1;
- (void)dealloc;
- (UIKeyboardPreferencesController *)init;
- (float)rivenSizeFactor:(float)arg0;
- (void)saveInputModes:(NSArray *)arg0;
- (void)setLanguageAwareInputModeLastUsed:(id)arg0;
- (char)spaceConfirmationEnabled;
- (char)typologyEnabled;
- (int)handBias;
- (void)setHandBias:(int)arg0;
- (char)isKeyLockedDown:(int)arg0;
- (void)synchronizePreferences;
- (void)releaseDontSynchronizePreferences;
- (void)preferencesControllerChanged:(NSNotification *)arg0;
- (void)touchSynchronizePreferencesTimer;
- (char)costlyCapture;
- (void)setInputModeLastUsed:(id)arg0;

@end
