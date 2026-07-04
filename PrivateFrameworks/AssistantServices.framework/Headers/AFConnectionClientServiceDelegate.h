/* Runtime dump - AFConnectionClientServiceDelegate
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFConnectionClientServiceDelegate : NSObject <AFClientServiceDelegate>
{
    AFConnection * _connection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_destruct;
- (<ML3DatabaseConnectionDelegate> *)_connectionDelegate;
- (void)shouldSpeakChanged:(SEL)arg0;
- (void)requestDidFinish;
- (void)requestDidReceiveCommand:(SEL)arg0 reply:(id /* block */)arg1;
- (void)requestDidFailWithError:(SEL)arg0 requestClass:(NSObject *)arg1;
- (void)requestRequestedOpenApplicationWithBundleID:(SEL)arg0 URL:(NSString *)arg1 reply:(id /* block */)arg2;
- (void)requestRequestedOpenURL:(SEL)arg0 reply:(id /* block */)arg1;
- (void)requestRequestedDismissAssistant;
- (void)acousticIDRequestWillStart;
- (void)musicWasDetected;
- (void)acousticIDRequestDidFinishWithSuccess:(SEL)arg0;
- (void)setUserActivityInfo:(SEL)arg0 webpageURL:(NSURL *)arg1;
- (void)invalidateCurrentUserActivity;
- (void)getBulletinContext:(SEL)arg0;
- (void)speechRecordingWillBeginWithLevelsSharedMem:(SEL)arg0;
- (void)speechRecordingDidBeginOnAVRecordRoute:(SEL)arg0;
- (void)speechRecordingDidChangeAVRecordRoute:(SEL)arg0;
- (void)speechRecordingDidEnd;
- (void)speechRecordingDidCancel;
- (void)speechRecordingDidFail:(SEL)arg0;
- (void)speechRecognized:(SEL)arg0;
- (void)speechRecognizedPartialResult:(SEL)arg0;
- (void)speechRecognitionDidFail:(SEL)arg0;
- (void)aceConnectionWillRetryOnError:(SEL)arg0;
- (AFConnectionClientServiceDelegate *)initWithConnection:(AFConnection *)arg0;

@end
