/* Runtime dump - AFDictationConnection
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDictationConnection : NSObject
{
    NSXPCConnection * _connection;
    NSString * _lastUsedLanguage;
    <AFDictationDelegate> * _delegate;
    id _stateInSync;
    unsigned int _audioSessionID;
    float _averagePower;
    float _peakPower;
    char _isCapturingSpeech;
    char _hasActiveRequest;
    char _isWaitingForAudioFile;
}

@property (weak, nonatomic) <AFDictationDelegate> * delegate;
@property (readonly, nonatomic) char currentlyUsingLocalDication;

+ (void)fetchSupportedLanguageCodes:(id)arg0;
+ (char)dictationIsSupportedForLanguageCode:(id)arg0 error:(id *)arg1;
+ (char)dictationIsEnabled;

- (void)dealloc;
- (void)setDelegate:(<AFDictationDelegate> *)arg0;
- (AFDictationConnection *)init;
- (<AFDictationDelegate> *)delegate;
- (void)_updateState;
- (void).cxx_destruct;
- (NSXPCConnection *)_connection;
- (char)dictationIsAvailableForLanguage:(NSString *)arg0;
- (void)sendSpeechCorrection:(id)arg0 forIdentifier:(NSString *)arg1;
- (void)cancelAvailabilityMonitoring;
- (void)beginAvailabilityMonitoring;
- (float)averagePower;
- (void)startDictationWithLanguageCode:(NSString *)arg0 options:(NSDictionary *)arg1 speechOptions:(NSDictionary *)arg2;
- (void)startDictationWithSpeechFileAtURL:(NSURL *)arg0 options:(NSDictionary *)arg1 forLanguage:(NSString *)arg2;
- (void)endSession;
- (void)cancelSpeech;
- (void)stopSpeechWithOptions:(NSDictionary *)arg0;
- (void)preheat;
- (void)_scheduleRequestTimeout;
- (void)_cancelRequestTimeout;
- (void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg0;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg0;
- (void)_connectionInterrupted;
- (void)_invokeRequestTimeout;
- (void)_extendRequestTimeout;
- (void)_setAudioSessionID:(unsigned int)arg0;
- (void)_checkAndSetIsCapturingSpeech:(char)arg0;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg0;
- (void)stopSpeech;
- (unsigned int)audioSessionID;
- (float)peakPower;
- (NSObject *)_dictationService;
- (void)_willFailDictationWithError:(NSError *)arg0;
- (void)_willCompleteDictation;
- (void)_tellSpeechDelegateAudioFileFinished:(id)arg0 error:(NSError *)arg1;
- (void)_registerInvalidationHandlerForXPCConnection:(NSURLConnection *)arg0;
- (void)prepareWithOptions:(NSDictionary *)arg0;
- (void)_availabilityChanged:(NSNotification *)arg0;
- (void)_willStartDictationWithOptions:(NSDictionary *)arg0;
- (void)_willCancelDictation;
- (void)_speechRecordingDidUpdateAveragePower:(float)arg0 peakPower:(float)arg1;
- (void)_tellSpeechDelegateRecordingDidBegin;
- (void)_tellSpeechDelegateDidHypothesizeSpeechPhrases:(id)arg0 languageModel:(NSObject *)arg1;
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg0 languageModel:(NSObject *)arg1 correctionIdentifier:(NSDictionary *)arg2;
- (void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg0 languageModel:(NSObject *)arg1;
- (void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(NSArray *)arg0 languageModel:(NSObject *)arg1;
- (char)currentlyUsingLocalDication;
- (void)startDictationWithLanguageCode:(NSString *)arg0 options:(NSDictionary *)arg1;
- (void)startDictationWithSpeechFileAtURL:(NSURL *)arg0 isNarrowBand:(char)arg1 options:(NSDictionary *)arg2 forLanguage:(NSString *)arg3;
- (void)_clearConnection;

@end
