/* Runtime dump - CannedEncodedVideoCapture
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface CannedEncodedVideoCapture : NSObject <CannedVideoFrameFeeder>
{
    AVURLAsset * _compressedFileAsset;
    AVAssetReader * _assetReader;
    AVAssetTrack * _videoTrack;
    AVAssetReaderTrackOutput * _readerVideoTrackOutput;
    NSString * _movieURLString;
    VideoScaler * _videoScaler;
    struct __CVPixelBufferPool * _pixelBufferPool;
    struct __CVPixelBufferPool * _rotatedPixelBufferPool;
    int _width;
    int _height;
    int _allFrameCount;
    double _allFrameRate;
    int _frameCount;
    struct _opaque_pthread_mutex_t _inputMutex;
    struct _opaque_pthread_mutex_t _attributeMutex;
}

@property (retain, nonatomic) AVURLAsset * compressedFileAsset;
@property (retain, nonatomic) AVAssetReader * assetReader;
@property (retain, nonatomic) AVAssetTrack * videoTrack;
@property (retain, nonatomic) AVAssetReaderTrackOutput * readerVideoTrackOutput;
@property (retain, nonatomic) NSString * movieURLString;
@property (retain, nonatomic) VideoScaler * videoScaler;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int allFrameCount;
@property (nonatomic) double allFrameRate;
@property (nonatomic) int frameCount;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (long)initialize;
- (int)width;
- (int)height;
- (void)setWidth:(int)arg0;
- (CannedEncodedVideoCapture *)initWithPath:(NSString *)arg0;
- (void)setHeight:(int)arg0;
- (void)setCompressedFileAsset:(AVURLAsset *)arg0;
- (AVURLAsset *)compressedFileAsset;
- (void)setAssetReader:(AVAssetReader *)arg0;
- (AVAssetReader *)assetReader;
- (void)setVideoTrack:(AVAssetTrack *)arg0;
- (AVAssetTrack *)videoTrack;
- (void)setReaderVideoTrackOutput:(AVAssetReaderTrackOutput *)arg0;
- (AVAssetReaderTrackOutput *)readerVideoTrackOutput;
- (long)initializeDecoder;
- (struct __CVBuffer *)createPixelBufferForFrameIndex:(int)arg0;
- (void)getFrameRate:(double *)arg0 frameCount:(int *)arg1;
- (long)setWidth:(int)arg0 height:(int)arg1;
- (long)rotatePixelBuffer:(struct __CVBuffer *)arg0 andStoreTo:(struct __CVBuffer * *)arg1;
- (NSString *)movieURLString;
- (void)setMovieURLString:(NSString *)arg0;
- (VideoScaler *)videoScaler;
- (void)setVideoScaler:(VideoScaler *)arg0;
- (int)allFrameCount;
- (void)setAllFrameCount:(int)arg0;
- (double)allFrameRate;
- (void)setAllFrameRate:(double)arg0;
- (int)frameCount;
- (void)setFrameCount:(int)arg0;

@end
