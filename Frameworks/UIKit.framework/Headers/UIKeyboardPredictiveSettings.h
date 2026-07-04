/* Runtime dump - UIKeyboardPredictiveSettings
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardPredictiveSettings : _UISettings
{
    int _lastVolume;
    char _nextPage;
    NSString * _currentInputMode;
    char _currentInputModeEnablePrediction;
    char _didShowHUD;
    char _alwaysShowTypedText;
    int _minLetters;
}

@property (nonatomic) int minLetters;
@property (nonatomic) char alwaysShowTypedText;
@property (nonatomic) int messageCount;

+ (void)loadSettings;
+ (void)hideViaNotification;
+ (UIKeyboardPredictiveSettings *)sharedInstance;

- (void)pressRingerButton;
- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (UIKeyboardPredictiveSettings *)initWithDefaultValues;
- (void)hide;
- (id)_sharedHUD;
- (char)_isShowingHUD;
- (void)setMinLetters:(int)arg0;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (int)minLetters;
- (char)alwaysShowTypedText;
- (int)messageCount;
- (void)setAlwaysShowTypedText:(char)arg0;
- (void)setMessageCount:(int)arg0;
- (void)saveSettings;
- (void)cancel;
- (void)next;
- (void)show;
- (void)show:(char)arg0;
- (NSDictionary *)settingsHUDConfiguration;
- (void)previous;

@end
