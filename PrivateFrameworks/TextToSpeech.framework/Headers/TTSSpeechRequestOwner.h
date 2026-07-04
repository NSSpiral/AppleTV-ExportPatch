/* Runtime dump - TTSSpeechRequestOwner
 * Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSSpeechRequestOwner : NSObject <TTSSpeechRequestDelegate>
{
    <TTSSpeechConnectionDelegate> * _delegate;
    TTSSpeechRequest * _request;
    <TTSSpeechService> * _speechService;
}

@property (weak, nonatomic) <TTSSpeechConnectionDelegate> * delegate;
@property (readonly, nonatomic) TTSSpeechRequest * request;
@property (weak, nonatomic) <TTSSpeechService> * speechService;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<TTSSpeechConnectionDelegate> *)arg0;
- (TTSSpeechRequestOwner *)init;
- (<TTSSpeechConnectionDelegate> *)delegate;
- (TTSSpeechRequest *)request;
- (void).cxx_destruct;
- (void)speechRequestDidStart:(SEL)arg0 forService:(struct __SCNetworkService *)arg1;
- (void)speechRequestDidPause:(SEL)arg0 forService:(struct __SCNetworkService *)arg1;
- (void)speechRequestDidContinue:(SEL)arg0 forService:(struct __SCNetworkService *)arg1;
- (void)speechRequest:(SEL)arg0 withMark:(int)arg1 didStartForRange:(int)arg2 forService:(struct _NSRange)arg3;
- (void)speechRequest:(SEL)arg0 didStopWithSuccess:(char)arg1 phonemesSpoken:(char)arg2 forService:(struct __SCNetworkService *)arg3 error:(NSError *)arg4;
- (TTSSpeechRequestOwner *)initWithSpeechService:(<TTSSpeechService> *)arg0;
- (void)stopCurrentSpeechRequestAtMark:(int)arg0 waitUntilStopped:(char)arg1;
- (void)pauseCurrentSpeechRequestAtMark:(int)arg0 waitUntilPaused:(char)arg1;
- (void)setSpeechService:(<TTSSpeechService> *)arg0;
- (<TTSSpeechService> *)speechService;
- (id)availableVoicesForLanguageCode:(id)arg0;
- (char)isSystemSpeaking;
- (void)startSpeechRequest:(TTSSpeechRequest *)arg0;
- (void)continueCurrentSpeechRequest;
- (char)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)_setRequest:(NSURLRequest *)arg0;

@end
