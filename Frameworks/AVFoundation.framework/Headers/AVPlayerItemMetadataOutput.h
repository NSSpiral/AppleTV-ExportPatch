/* Runtime dump - AVPlayerItemMetadataOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput
{
    AVPlayerItemMetadataOutputInternal * _metadataOutputInternal;
}

@property (readonly, nonatomic) <AVPlayerItemMetadataOutputPushDelegate> * delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;
@property (nonatomic) double advanceIntervalForDelegateInvocation;

+ (void)initialize;

- (double)advanceIntervalForDelegateInvocation;
- (char)_attachToPlayerItem:(NSObject *)arg0;
- (void)_detachFromPlayerItem;
- (void)_signalFlush;
- (void)_pushTimedMetadataGroups:(id)arg0 fromPlayerItemTrack:(NSObject *)arg1;
- (AVPlayerItemMetadataOutput *)initWithIdentifiers:(PCPersistentIdentifiers *)arg0;
- (void)_collectUncollectables;
- (void)dealloc;
- (AVPlayerItemMetadataOutput *)init;
- (<AVPlayerItemMetadataOutputPushDelegate> *)delegate;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)finalize;
- (void)setDelegate:(<AVPlayerItemMetadataOutputPushDelegate> *)arg0 queue:(NSObject *)arg1;
- (void)setAdvanceIntervalForDelegateInvocation:(double)arg0;

@end
