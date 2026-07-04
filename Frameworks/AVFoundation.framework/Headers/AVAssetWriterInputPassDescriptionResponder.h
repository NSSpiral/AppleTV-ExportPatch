/* Runtime dump - AVAssetWriterInputPassDescriptionResponder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputPassDescriptionResponder : NSObject
{
    NSObject<OS_dispatch_queue> * _callbackQueue;
    int _stoppedResponding;
    NSObject<OS_dispatch_queue> * _serializationQueue;
    char _hasRespondedAtLeastOnce;
    AVAssetWriterInputPassDescription * _mostRecentPassDescription;
    id _callbackBlock;
}

- (AVAssetWriterInputPassDescriptionResponder *)initWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg0 block:(id /* block */)arg1;
- (void)respondToNewPassDescription:(NSString *)arg0;
- (void)stopRespondingToPassDescriptions;
- (char)_hasStoppedResponding;
- (void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
- (void)dealloc;
- (AVAssetWriterInputPassDescriptionResponder *)init;
- (void)finalize;

@end
