/* Runtime dump - AVMediaDataRequester
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMediaDataRequester : NSObject
{
    <AVMediaDataRequesterConsumer> * _mediaDataConsumer;
    NSObject<OS_dispatch_queue> * _requestQueue;
    id _requestBlock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * requestQueue;
@property (readonly, nonatomic) id requestBlock;

- (AVMediaDataRequester *)initWithMediaDataConsumer:(<AVMediaDataRequesterConsumer> *)arg0 requestQueue:(NSObject<OS_dispatch_queue> *)arg1 requestBlock:(id /* block */)arg2;
- (void)_requestMediaDataIfReady;
- (void)startRequestingMediaData;
- (id /* block */)requestBlock;
- (void)dealloc;
- (AVMediaDataRequester *)init;
- (void)invalidate;
- (NSObject<OS_dispatch_queue> *)requestQueue;
- (void)finalize;

@end
