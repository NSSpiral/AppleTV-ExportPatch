/* Runtime dump - AVPlayerItemLegibleOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput
{
    AVPlayerItemLegibleOutputInternal * _legibleOutputInternal;
}

@property (readonly, nonatomic) <AVPlayerItemLegibleOutputPushDelegate> * delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;
@property (nonatomic) double advanceIntervalForDelegateInvocation;

+ (void)initialize;

- (char)suppressesPlayerRendering;
- (NSDictionary *)_figLegibleOutputsDictionaryOptions;
- (double)advanceIntervalForDelegateInvocation;
- (char)_attachToPlayerItem:(NSObject *)arg0;
- (void)_detachFromPlayerItem;
- (void)_pushAttributedStrings:(id)arg0 andSampleBuffers:(id)arg1 atItemTime:(struct ?)arg2;
- (void)_signalFlush;
- (void)_collectUncollectables;
- (NSString *)textStylingResolution;
- (AVPlayerItemLegibleOutput *)initWithDependencyFactory:(<AVPlayerItemLegibleOutputDependencyFactory> *)arg0 mediaSubtypesForNativeRepresentation:(NSDictionary *)arg1;
- (void)dealloc;
- (AVPlayerItemLegibleOutput *)init;
- (<AVPlayerItemLegibleOutputPushDelegate> *)delegate;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)finalize;
- (void)setDelegate:(<AVPlayerItemLegibleOutputPushDelegate> *)arg0 queue:(NSObject *)arg1;
- (AVPlayerItemLegibleOutput *)initWithMediaSubtypesForNativeRepresentation:(NSDictionary *)arg0;
- (void)setSuppressesPlayerRendering:(char)arg0;
- (void)setAdvanceIntervalForDelegateInvocation:(double)arg0;
- (void)setTextStylingResolution:(NSString *)arg0;

@end
