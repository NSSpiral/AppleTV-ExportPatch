/* Runtime dump - AVAssetWriterInputMediaDataRequester
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputMediaDataRequester : NSObject
{
    NSObject<OS_dispatch_queue> * _requestQueue;
    id _requestBlock;
    <AVAssetWriterInputMediaDataRequesterDelegate> * _delegate;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * requestQueue;
@property <AVAssetWriterInputMediaDataRequesterDelegate> * delegate;

- (AVAssetWriterInputMediaDataRequester *)initWithRequestQueue:(NSObject<OS_dispatch_queue> *)arg0 requestBlock:(id /* block */)arg1;
- (void)requestMediaDataIfNecessary;
- (void)_collectUncollectables_invokedFromDeallocAndFinalize;
- (void)dealloc;
- (void)setDelegate:(<AVAssetWriterInputMediaDataRequesterDelegate> *)arg0;
- (AVAssetWriterInputMediaDataRequester *)init;
- (<AVAssetWriterInputMediaDataRequesterDelegate> *)delegate;
- (NSObject<OS_dispatch_queue> *)requestQueue;
- (void)finalize;

@end
