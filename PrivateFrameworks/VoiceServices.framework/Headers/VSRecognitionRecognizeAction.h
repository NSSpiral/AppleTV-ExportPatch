/* Runtime dump - VSRecognitionRecognizeAction
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionRecognizeAction : VSRecognitionAction
{
    NSString * _modelIdentifier;
    NSArray * _keywords;
    void * _recognition;
    NSArray * _results;
    NSString * _debugDumpPath;
    NSString * _audioInputPath;
    double _levelInterval;
    struct ? _recognizeFlags;
}

- (char)cancel;
- (void)dealloc;
- (NSString *)perform;
- (void)_reset;
- (NSString *)modelIdentifier;
- (int)completionType;
- (void)_continueAfterDeferredStart;
- (char)_hasDeferredStartCallback;
- (NSString *)_debugDumpPath;
- (VSRecognitionRecognizeAction *)initWithModelIdentifier:(NSString *)arg0;
- (char)_isRecognizing;
- (char)_isActivelyRecognizing;
- (char)_setBluetoothInputAllowed:(char)arg0;
- (char)_setDebugDumpPath:(NSString *)arg0;
- (char)_setDebugDumpEnabled:(char)arg0;
- (char)_setPreferredEngine:(int)arg0;
- (char)_setAudioInputPath:(NSString *)arg0;
- (char)_setInputLevelUpdateInterval:(double)arg0;
- (char)_setEngineResetRequired:(char)arg0;
- (void)_handledThreadedResults:(NSArray *)arg0 nextAction:(NSObject *)arg1;
- (float)_inputLevel;
- (float)_inputLevelDB;
- (NSObject *)_keywordAtIndex:(int)arg0;
- (int)_keywordCount;
- (char)_keywordIndexChanged;
- (NSArray *)_keywords;
- (struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(struct ? *)arg0 info:(void *)arg1;
- (NSArray *)_actionForEmptyResults;
- (char)_setDebugDumpEnabled:(char)arg0 dumpPath:(NSString *)arg1;
- (void)_configureNewRecognitionInstance;
- (void)_setResults:(NSArray *)arg0;
- (void)_releaseFromPrepare;
- (void)_handleRecognitionPrepared:(struct __VSRecognition *)arg0;
- (void)_handleRecognitionStarted:(struct __VSRecognition *)arg0;
- (void)_handleRecognitionCompleted:(struct __VSRecognition *)arg0 withResults:(struct __CFArray *)arg1 error:(struct __CFError *)arg2;

@end
