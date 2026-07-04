/* Runtime dump - AVAssetReaderVideoCompositionOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput
{
    AVAssetReaderVideoCompositionOutputInternal * _videoCompositionOutputInternal;
}

@property (readonly, nonatomic) NSArray * videoTracks;
@property (readonly, nonatomic) NSDictionary * videoSettings;
@property (copy, nonatomic) AVVideoComposition * videoComposition;
@property (readonly, nonatomic) <AVVideoCompositing> * customVideoCompositor;

+ (AVAssetReaderVideoCompositionOutput *)assetReaderVideoCompositionOutputWithVideoTracks:(NSArray *)arg0 videoSettings:(NSDictionary *)arg1;

- (NSSet *)_asset;
- (AVVideoComposition *)videoComposition;
- (void)_setVideoComposition:(AVVideoComposition *)arg0 customVideoCompositorSession:(AVCustomVideoCompositorSession *)arg1;
- (void)setVideoComposition:(AVVideoComposition *)arg0;
- (<AVVideoCompositing> *)customVideoCompositor;
- (id)_errorForOSStatus:(long)arg0;
- (char)_prepareForReadingReturningError:(id *)arg0;
- (char)alwaysCopiesSampleData;
- (char)_enableTrackExtractionReturningError:(id *)arg0;
- (NSArray *)videoTracks;
- (AVAssetReaderVideoCompositionOutput *)initWithVideoTracks:(NSArray *)arg0 videoSettings:(NSDictionary *)arg1;
- (void)_setVideoComposition:(AVVideoComposition *)arg0;
- (NSDictionary *)videoSettings;
- (void)dealloc;
- (AVAssetReaderVideoCompositionOutput *)init;
- (NSString *)description;
- (NSString *)mediaType;
- (void)finalize;

@end
