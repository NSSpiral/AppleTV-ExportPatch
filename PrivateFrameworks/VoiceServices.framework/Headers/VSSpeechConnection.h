/* Runtime dump - VSSpeechConnection
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSSpeechConnection : NSObject
{
    NSXPCConnection * _connection;
    VSSpeechConnectionDelegateWrapper * _delegateWrapper;
    VSSpeechRequest * _request;
}

@property (weak, nonatomic) <VSSpeechConnectionDelegate> * delegate;
@property (readonly, nonatomic) VSSpeechRequest * request;

- (void)dealloc;
- (void)setDelegate:(<VSSpeechConnectionDelegate> *)arg0;
- (<VSSpeechConnectionDelegate> *)delegate;
- (VSSpeechRequest *)request;
- (void).cxx_destruct;
- (NSXPCConnection *)_connection;
- (id)availableVoicesForLanguageCode:(id)arg0;
- (id)availableFootprintsForVoice:(id)arg0 languageCode:(NSString *)arg1;
- (char)isSystemSpeaking;
- (void)startSpeechRequest:(NSURLRequest *)arg0;
- (void)getVoiceInfoForLanguageCode:(id)arg0 footprint:(int)arg1 gender:(int)arg2 custom:(char)arg3 reply:(id /* block */)arg4;
- (void)stopCurrentSpeechRequestAtMark:(int)arg0;
- (void)pauseCurrentSpeechRequestAtMark:(int)arg0;
- (void)continueCurrentSpeechRequest;
- (char)isSystemSpeakingOnBehalfOfCurrentConnection;
- (void)setLogToFile:(char)arg0;
- (void)getLogToFile:(NSString *)arg0;
- (void)getAllVoiceAssets:(NSArray *)arg0;
- (void)getLocalVoiceAssets:(NSArray *)arg0;
- (void)downloadVoiceAsset:(NSSet *)arg0 progress:(NSProgress *)arg1 completion:(/* block */ id)arg2;
- (void)setAutoDownloadedVoiceAssets:(NSArray *)arg0;
- (void)getAutoDownloadedVoiceAssets:(NSArray *)arg0;
- (void)_connectionInvalidated;
- (void)_setRequest:(NSURLRequest *)arg0;
- (id)_remoteObjectWithErrorHandler:(SSErrorHandler *)arg0;
- (NSObject *)_remoteObject;

@end
