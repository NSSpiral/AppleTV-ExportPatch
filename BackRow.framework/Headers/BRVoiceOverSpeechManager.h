/* Runtime dump - BRVoiceOverSpeechManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol VSSpeechSynthesizerDelegate;

@class BRVOSpeechAction;
@interface BRVoiceOverSpeechManager : NSObject <VSSpeechSynthesizerDelegate>
{
    NSMutableArray * _pendingSpeechQueue;
    BRVOSpeechAction * _currentSpeechAction;
    VSSpeechSynthesizer * _synthesizer;
    NSThread * _runThread;
    NSDictionary * _pronunciationGuide;
    NSString * _systemLanguage;
    char _runLoopEnabled;
    char _didInitialize;
    char _isSpeaking;
    char _speechEnabled;
    char _isPitchChangeEnabled;
}

@property (nonatomic) float speechRate;
@property (nonatomic) char isPitchChangeEnabled;
@property (nonatomic) char speechEnabled;
@property (copy, nonatomic) NSString * systemLanguage;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct URegularExpression *)createRegularExpressionFromString:(NSString *)arg0;
+ (NSString *)matchedRangesForString:(NSString *)arg0 withRegularExpression:(struct URegularExpression *)arg1;

- (char)isPitchChangeEnabled;
- (void)setIsPitchChangeEnabled:(char)arg0;
- (void)setMaintainConnection:(char)arg0;
- (void)clearPendingSpeechQueue;
- (id)_processPronunciationChanges:(id)arg0 language:(NSString *)arg1;
- (NSArray *)_processDurationStrings:(id)arg0;
- (void)_clearPendingSpeechQueue;
- (NSString *)_preprocessString:(NSString *)arg0 language:(NSString *)arg1;
- (void)_pauseSpeaking;
- (void)_stopSpeaking;
- (void)_setSpeechRate:(id)arg0;
- (void)_speechJobFinished:(id)arg0;
- (void)terminate;
- (void)_initialize;
- (void)dealloc;
- (BRVoiceOverSpeechManager *)init;
- (char)isSpeaking;
- (NSString *)systemLanguage;
- (void)setSystemLanguage:(NSString *)arg0;
- (void)pauseSpeaking;
- (void)setPitch:(NSString *)arg0;
- (void)speechSynthesizer:(VSSpeechSynthesizer *)arg0 didFinishSpeaking:(char)arg1 withError:(NSError *)arg2;
- (float)speechRate;
- (void)setSpeechRate:(float)arg0;
- (void)continueSpeaking;
- (void)_startNextSpeechJob;
- (char)speechEnabled;
- (void)_dispatchSpeechAction:(NSObject *)arg0;
- (void)_continueSpeaking;
- (void)_isSpeaking:(SAAXPauseSpeaking *)arg0;
- (void)setSpeechEnabled:(char)arg0;
- (void)dispatchSpeechAction:(NSObject *)arg0;
- (void)stopSpeaking;

@end
