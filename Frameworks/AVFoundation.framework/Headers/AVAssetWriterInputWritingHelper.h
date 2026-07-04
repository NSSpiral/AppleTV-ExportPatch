/* Runtime dump - AVAssetWriterInputWritingHelper
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputWritingHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate>
{
    AVFigAssetWriterTrack * _assetWriterTrack;
    AVAssetWriterInputMediaDataRequester * _mediaDataRequester;
    struct __CVPixelBufferPool * _pixelBufferPool;
    AVAssetWriterInputPassDescription * _currentPassDescription;
}

@property (readonly, nonatomic) AVFigAssetWriterTrack * assetWriterTrack;
@property (retain, nonatomic) AVAssetWriterInputPassDescription * currentPassDescription;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSData *)keyPathsForValuesAffectingReadyForMoreMediaData;

- (AVAssetWriterInputWritingHelper *)initWithConfigurationState:(AVAssetWriterInputConfigurationState *)arg0;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (AVAssetWriterInputWritingHelper *)initWithConfigurationState:(NSObject *)arg0 assetWriterTrack:(AVFigAssetWriterTrack *)arg1 error:(id *)arg2;
- (void)didStartInitialSession;
- (void)prepareToEndSession;
- (char)prepareToFinishWritingReturningError:(id *)arg0;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(int)arg0;
- (char)isReadyForMoreMediaData;
- (char)canPerformMultiplePasses;
- (AVAssetWriterInputPassDescription *)currentPassDescription;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject *)arg0 usingBlock:(id /* block */)arg1;
- (char)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (char)appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ?)arg1;
- (void)markCurrentPassAsFinished;
- (AVFigAssetWriterTrack *)_assetWriterTrack;
- (void)_attachToMediaDataRequester:(id)arg0;
- (void)_nudgeMediaDataRequesterIfAppropriate;
- (void)beginPassIfAppropriate;
- (void)_detachFromMediaDataRequester:(id)arg0;
- (void)markAsFinishedAndTransitionCurrentHelper:(NSObject *)arg0;
- (char)mediaDataRequesterShouldRequestMediaData:(NSData *)arg0;
- (void)setCurrentPassDescription:(AVAssetWriterInputPassDescription *)arg0;
- (void)dealloc;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (int)status;
- (void)markAsFinished;
- (int)trackID;
- (void)finalize;

@end
