/* Runtime dump - BWDeferredMetadataCache
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDeferredMetadataCache : NSObject
{
    struct OpaqueFigSimpleMutex * _lock;
    struct OpaqueFigCaptureStream * _stream;
    int _numberOfExpectedSampleBuffersForEachPTS;
    id _cache;
}

@property (nonatomic) int numberOfExpectedSampleBuffersForEachPTS;

- (void)dealloc;
- (void)flush;
- (BWDeferredMetadataCache *)initWithCaptureStream:(struct OpaqueFigCaptureStream *)arg0 atomicTransactions:(char)arg1;
- (void)setNumberOfExpectedSampleBuffersForEachPTS:(int)arg0;
- (void)addMetadataAttachmentToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 withDutyCycleMetadataCache:(NSMutableDictionary *)arg1;
- (int)numberOfExpectedSampleBuffersForEachPTS;

@end
