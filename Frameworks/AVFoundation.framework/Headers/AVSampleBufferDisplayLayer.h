/* Runtime dump - AVSampleBufferDisplayLayer
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal>
{
    AVSampleBufferDisplayLayerInternal * _sampleBufferDisplayLayerInternal;
}

@property (readonly) char readyForMoreMediaData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSError * error;
@property (readonly, retain) struct OpaqueCMTimebase * timebase;
@property (readonly) char readyForMoreMediaData;
@property (readonly, nonatomic) char outputObscuredDueToInsufficientExternalProtection;
@property (retain) struct OpaqueCMTimebase * controlTimebase;
@property (copy) NSString * videoGravity;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSError * error;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)automaticallyNotifiesObserversOfStatus;
+ (char)automaticallyNotifiesObserversOfError;

- (id)_transformToAbsoluteAnimationOfBounds:(id)arg0;
- (void)_forBoundsAnimations:(id)arg0 applyBlock:(id /* block */)arg1;
- (AVWeakReference *)_weakReference;
- (void)_didFinishSuspension:(id)arg0;
- (struct OpaqueCMTimebase *)timebase;
- (char)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (void)_refreshAboveHighWaterLevel;
- (void)_updateLayerTreeGeometryWithVideoGravity:(NSString *)arg0 bounds:(struct CGRect)arg1 presentationSize:(struct CGSize)arg2;
- (void)_setStatus:(int)arg0 error:(NSError *)arg1;
- (void)_setControlTimebase:(struct OpaqueCMTimebase *)arg0;
- (void)_setSynchronizerTimebase:(struct OpaqueCMTimebase *)arg0;
- (long)_initializeTimebases;
- (long)_createVideoQueue;
- (void)_updatePresentationSize:(struct CGSize)arg0;
- (void)_resetStatusWithOSStatus:(long)arg0;
- (void)_setOutputObscuredDueToInsufficientExternalProtection:(char)arg0;
- (void)_addFigVideoQueueListeners;
- (void)_removeFigVideoQueueListeners;
- (void)_addAnimationsForContentLayer:(id)arg0 size:(struct CGSize)arg1 gravity:(PKPhysicsFieldLinearGravity *)arg2;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer * *)arg0;
- (char)setRenderSynchronizer:(id)arg0;
- (void)setControlTimebase:(struct OpaqueCMTimebase *)arg0;
- (struct OpaqueCMTimebase *)controlTimebase;
- (void)stopRequestingMediaData;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (void)flushAndRemoveImage;
- (id)videoPerformanceMetrics;
- (char)outputObscuredDueToInsufficientExternalProtection;
- (NSString *)videoGravity;
- (void)dealloc;
- (AVSampleBufferDisplayLayer *)init;
- (void)setBounds:(struct CGRect)arg0;
- (void)flush;
- (void)addAnimation:(CAAnimation *)arg0 forKey:(NSString *)arg1;
- (int)status;
- (NSError *)error;
- (void)finalize;
- (void)setVideoGravity:(NSString *)arg0;

@end
