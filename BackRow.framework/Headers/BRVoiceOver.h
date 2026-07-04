/* Runtime dump - BRVoiceOver
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class BRControl, BRVoiceOverSpeechManager;
@interface BRVoiceOver : BRSingleton
{
    NSTimer * _focusChangeTimer;
    NSTimer * _screenContentTimer;
    NSDictionary * _languageToLocale;
    NSMutableArray * _focusChain;
    BRVoiceOverSpeechManager * _speechManager;
    char _isEnabled;
    char * _handleFocusChangeCancel;
    int _speechRate;
    char _inRereadMode;
    id _focusChangeObserver;
    id _noFocusChangeObserver;
    NSDictionary * _phoneticsTable;
    int _lastEvent;
    double _lastEventTime;
    id _lastFocusedElement;
    NSString * _previousContainerString;
    NSMutableArray * _previousContainerStrings;
    NSString * _previousSecondaryScreenInfo;
    NSString * _previousContextChangeString;
    NSArray * _previousElementTraits;
    NSString * _previousTextFieldValue;
    NSArray * _nonFocusableNavigationElements;
    int _nonFocusedElementIndex;
    int _nonFocusedSubelementIndex;
    NSString * _initialText;
    id _initialTextControl;
}

@property (nonatomic) char isEnabled;
@property (nonatomic) char speechEnabled;
@property (readonly, nonatomic) char isSpeaking;
@property (nonatomic) int speechRate;
@property (nonatomic) char isPitchChangeEnabled;

+ (BRVoiceOver *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (char)isEnabled;

- (char)handleEventAction:(NSObject *)arg0;
- (void)playSound:(int)arg0;
- (char)inRereadMode;
- (void)speakString:(NSString *)arg0;
- (char)isPitchChangeEnabled;
- (void)setIsPitchChangeEnabled:(char)arg0;
- (void)updateStatus;
- (void)_startSpeechManager;
- (void)_handleFocusChange:(NSDictionary *)arg0;
- (void)_handleFocusDidNotChange:(NSDictionary *)arg0;
- (void)_contextDidChange:(NSDictionary *)arg0;
- (void)_chapterMarkersShown:(id)arg0;
- (void)_chapterMarkersHidden:(id)arg0;
- (void)_mediaContentSkipped:(id)arg0;
- (void)_languageChanged:(NSNotification *)arg0;
- (int)_maxElementCountWithinElement:(NSObject *)arg0;
- (NSDictionary *)_nonFocusedTableViewHeaders:(NSDictionary *)arg0;
- (id)_tableViewRow:(UITableViewRow *)arg0 row:(int)arg1;
- (void)_handleRereadMode;
- (char)_handleNonFocusableNavigation:(int)arg0;
- (char)_canSpeakLanguage:(NSString *)arg0;
- (void)setIsEnabled:(char)arg0 quiet:(char)arg1;
- (void)_updateSpeechRate;
- (NSDictionary *)_determineScreenSecondaryInfo:(NSDictionary *)arg0;
- (void)_handleScreenContentOutput:(NSObject *)arg0;
- (void)dispatchSpeechJob:(id)arg0 shouldQueue:(char)arg1;
- (id)_makeFocusChain:(id)arg0;
- (NSArray *)_determineControlTraits:(NSArray *)arg0;
- (NSString *)_determineAccessibilityLanguage:(NSString *)arg0;
- (struct _NSRange)_accessibilityRangeForControl:(BRControl *)arg0;
- (NSData *)_determineTextFieldData:(NSData *)arg0;
- (int)_wrapSoundForNewControl:(BRControl *)arg0 oldControl:(BRControl *)arg1;
- (NSString *)_determineScreenChangeLabel:(NSString *)arg0;
- (NSObject *)_determineKeyboardType:(NSObject *)arg0;
- (id)_phoneticLetterForControl:(BRControl *)arg0;
- (void)_scheduleScreenContentOutputTimerForControl:(BRControl *)arg0 cacheOnly:(char)arg1;
- (void)_updateFocusChain:(id)arg0;
- (char)_shouldSkipOutputForNewControl:(BRControl *)arg0 oldControl:(BRControl *)arg1;
- (void)_outputControl:(BRControl *)arg0 oldControl:(BRControl *)arg1;
- (char)_accessibilityIgnoresControlReload:(id)arg0;
- (void)_updateFocusedElement:(NSObject *)arg0;
- (void)_clearCachedElementInformation;
- (void)_coalesceHandleFocusChange:(NSDictionary *)arg0;
- (id)_replacePasswordBullets:(id)arg0;
- (void)speakGreetingMessageInLanguage:(NSString *)arg0;
- (void)speakBluetoothOOBMessageInLanguage:(NSString *)arg0;
- (void)setInitialText:(NSString *)arg0 forControl:(BRControl *)arg1;
- (id)_focusChain:(id)arg0;
- (void)_tearDown;
- (void)_initialize;
- (void)dealloc;
- (BRVoiceOver *)init;
- (char)isEnabled;
- (void)setIsEnabled:(char)arg0;
- (void)textChanged:(NSNotification *)arg0;
- (char)isSpeaking;
- (int)speechRate;
- (void)setSpeechRate:(int)arg0;
- (void)clearSpeechQueue;
- (char)speechEnabled;
- (void)setSpeechEnabled:(char)arg0;

@end
