/* Runtime dump - VSRecognitionResultHandlingThread
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSRecognitionResultHandlingThread : NSObject
{
    <VSRecognitionResultHandlingThreadDelegate> * _delegate;
    NSMutableArray * _requests;
    NSConditionLock * _lock;
    struct ? _resultHandlingFlags;
}

- (void)dealloc;
- (void)setDelegate:(<VSRecognitionResultHandlingThreadDelegate> *)arg0;
- (VSRecognitionResultHandlingThread *)init;
- (void)invalidate;
- (void)handleResults:(NSArray *)arg0 withHandler:(id /* block */)arg1;
- (void)_handleRequests;
- (void)_notifyRequestHandled:(id)arg0;

@end
