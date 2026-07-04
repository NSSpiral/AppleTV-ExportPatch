/* Runtime dump - AVFigAssetWriterTrack
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetWriterTrack : NSObject
{
    AVWeakReference * _weakReference;
    struct OpaqueFigAssetWriter * _figAssetWriter;
    int _trackID;
    NSString * _mediaType;
    AVMediaFileType * _mediaFileType;
    NSObject<OS_dispatch_queue> * _aboveHighWaterLevelQueue;
    char _aboveHighWaterLevel;
    struct ? _sampleBufferCoalescingInterval;
    AVAssetWriterInputFigAssetWriterEndPassOperation * _endPassOperation;
}

@property (readonly, nonatomic) struct OpaqueFigAssetWriter * figAssetWriter;
@property (readonly, nonatomic) NSString * mediaType;
@property (readonly, nonatomic) AVMediaFileType * mediaFileType;
@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) struct __CVPixelBufferPool * pixelBufferPool;
@property (readonly, nonatomic) char encoderSupportsMultiPass;
@property (readonly) char aboveHighWaterLevel;
@property (nonatomic) struct ? sampleBufferCoalescingInterval;

+ (NSObject *)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 mediaType:(NSString *)arg1 mediaFileType:(AVMediaFileType *)arg2 formatSpecification:(AVFormatSpecification *)arg3 sourcePixelBufferAttributes:(NSDictionary *)arg4 multiPass:(char)arg5 error:(id *)arg6;

- (void)setExtendedLanguageTag:(NSString *)arg0;
- (void)setAlternateGroupID:(short)arg0;
- (AVMediaFileType *)mediaFileType;
- (void)setMarksOutputTrackAsEnabled:(char)arg0;
- (void)setMediaTimeScale:(int)arg0;
- (void)setSampleReferenceBaseURL:(NSURL *)arg0;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (void)setSampleBufferCoalescingInterval:(struct ?)arg0;
- (void)prepareToEndSession;
- (void)setFigMetadata:(NSDictionary *)arg0;
- (void)setExcludeFromAutoSelection:(char)arg0;
- (void)setFigTrackMatrix:(id)arg0;
- (void)setFigDimensions:(id)arg0;
- (void)setTrackVolume:(float)arg0;
- (void)setPreferredChunkDuration:(struct ?)arg0;
- (void)setPreferredChunkAlignment:(int)arg0;
- (void)setPreferredChunkSize:(int)arg0;
- (char)encoderSupportsMultiPass;
- (char)isAboveHighWaterLevel;
- (char)beginPassReturningError:(id *)arg0;
- (char)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(id *)arg1;
- (char)addPixelBuffer:(struct __CVBuffer *)arg0 atPresentationTime:(struct ?)arg1 error:(id *)arg2;
- (char)markEndOfDataReturningError:(id *)arg0;
- (void)endPassWithCompletionHandler:(id /* block */)arg0;
- (AVFigAssetWriterTrack *)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 mediaType:(NSString *)arg1 mediaFileType:(AVMediaFileType *)arg2 formatSpecification:(AVFormatSpecification *)arg3 sourcePixelBufferAttributes:(NSDictionary *)arg4 multiPass:(char)arg5 error:(id *)arg6;
- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg0 sourcePixelBufferAttributes:(NSDictionary *)arg1 multiPass:(char)arg2 error:(id *)arg3;
- (void)_refreshAboveHighWaterLevel;
- (struct OpaqueFigAssetWriter *)figAssetWriter;
- (void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg0;
- (struct ?)sampleBufferCoalescingInterval;
- (void)dealloc;
- (AVFigAssetWriterTrack *)init;
- (void)setLayer:(int)arg0;
- (void)setLanguageCode:(NSString *)arg0;
- (NSString *)mediaType;
- (int)trackID;
- (void)finalize;

@end
