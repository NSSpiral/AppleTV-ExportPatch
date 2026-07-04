/* Runtime dump - VSRecognitionSession
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionSession : NSObject
{
    NSString * _modelIdentifier;
    VSKeepAlive * _keepAlive;
    <VSRecognitionSessionDelegate> * _delegate;
    VSRecognitionAction * _currentAction;
    NSArray * _topLevelKeywords;
    id _handlingThread;
    VSSpeechSynthesizer * _synthesizer;
    NSString * _languageID;
    NSString * _debugDumpPath;
    NSString * _audioInputPath;
    double _levelInterval;
    unsigned int _keywordPhase;
    struct ? _sessionFlags;
}

- (float)inputLevel;
- (char)cancel;
- (void)dealloc;
- (void)setDelegate:(<VSRecognitionSessionDelegate> *)arg0;
- (VSRecognitionSession *)init;
- (void)_init;
- (char)isValid;
- (char)reset;
- (char)isFinished;
- (void)_setAction:(NSObject *)arg0;
- (char)isBusy;
- (void)_notifyDelegateActionStarted;
- (NSObject *)_currentRecognizeAction;
- (VSRecognitionSession *)initWithModelIdentifier:(NSString *)arg0;
- (id)cancelMaintainingKeepAlive:(char)arg0;
- (NSString *)spokenFeedbackString;
- (NSString *)spokenFeedbackAttributedString;
- (struct __CFDictionary *)_createKeywordIndex;
- (NSArray *)_createPhaseSortedKeywordsFromArray:(NSArray *)arg0;
- (NSArray *)_topLevelKeywords;
- (void)_keywordIndexChanged;
- (NSString *)_beginSpeakingAttributedString:(NSString *)arg0;
- (NSString *)beginSpeakingString:(NSString *)arg0;
- (NSString *)_beginSpeakingString:(NSString *)arg0 attributedString:(NSAttributedString *)arg1;
- (void)_notifyDelegateFinishedSpeakingWithError:(NSError *)arg0;
- (NSObject *)beginNextAction;
- (char)isRecognizing;
- (char)isActivelyRecognizing;
- (char)hasDeferredAction;
- (char)nextActionWillTerminateSession;
- (char)nextActionWillRecognize;
- (void)setSensitiveActionsEnabled:(char)arg0;
- (char)sensitiveActionsEnabled;
- (char)setBluetoothInputAllowed:(char)arg0;
- (void)_actionCompleted:(id)arg0 nextAction:(NSObject *)arg1 error:(NSError *)arg2;
- (char)_actionStarted:(id)arg0;
- (NSURL *)_notifyDelegateOpenURL:(NSURL *)arg0;
- (NSObject *)_recognitionResultHandlingThread;
- (void)recognitionResultHandlingThread:(NSObject *)arg0 didHandleResults:(NSArray *)arg1 nextAction:(NSObject *)arg2;
- (NSString *)displayResultString;
- (NSString *)displayStatusString;
- (void)setInputLevelUpdateInterval:(double)arg0;
- (float)inputLevelDB;
- (void)setKeywordPhase:(unsigned int)arg0;
- (NSObject *)keywordAtIndex:(int)arg0;
- (int)keywordCount;
- (NSString *)_keywordsForModelIdentifier:(NSString *)arg0;
- (NSString *)beginSpeakingFeedbackString;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg0 didFinishSpeaking:(char)arg1 withError:(NSError *)arg2;
- (char)setDebugDumpEnabled:(char)arg0;
- (NSString *)debugDumpPath;
- (char)setNextRecognitionAudioInputPath:(NSString *)arg0;
- (char)setNextRecognitionRequiresReset:(char)arg0;
- (char)setPreferredEngine:(int)arg0;
- (void)setPerformRecognitionHandlerActions:(char)arg0;

@end
