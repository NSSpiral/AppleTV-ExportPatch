/* Runtime dump - AFDictationConnectionServiceDelegate
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate>
{
    AFDictationConnection * _connection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_destruct;
- (void)speechRecordingDidEnd;
- (void)speechRecordingDidCancel;
- (void)speechRecordingDidFail:(SEL)arg0;
- (void)speechRecognitionDidFail:(SEL)arg0;
- (AFDictationConnectionServiceDelegate *)initWithDictationConnection:(NSURLConnection *)arg0;
- (void)speechRecordingWillBegin;
- (void)speechRecordingDidBegin;
- (void)speechRecordingDidUpdateAveragePower:(SEL)arg0 peakPower:(float)arg1;
- (void)speechDidRecognizePhrases:(SEL)arg0 usingSpeechModel:(NSObject *)arg1 correctionContext:(NSObject *)arg2;
- (void)speechDidRecognizeTokens:(SEL)arg0 usingSpeechModel:(NSObject *)arg1;
- (void)speechDidRecognizeTranscriptionObjects:(SEL)arg0 usingSpeechModel:(NSObject *)arg1;
- (void)speechDidFinishWritingAudioFile:(SEL)arg0 error:(NSError *)arg1;

@end
