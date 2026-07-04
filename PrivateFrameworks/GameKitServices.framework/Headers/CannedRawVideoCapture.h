/* Runtime dump - CannedRawVideoCapture
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface CannedRawVideoCapture : NSObject <CannedVideoFrameFeeder>
{
    int _width;
    int _height;
    NSArray * _allResolutions;
    int _allFrameCount;
    double _allFrameRate;
    NSDictionary * _currentResolution;
    struct __sFILE * _currentInputFile;
    struct __CVPixelBufferPool * _currentPixelBufferPool;
    struct __CVPixelBufferPool * _rotatedPixelBufferPool;
    VideoScaler * _videoScaler;
    struct _opaque_pthread_mutex_t _inputMutex;
    struct _opaque_pthread_mutex_t _attributeMutex;
}

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (retain, nonatomic) NSArray * allResolutions;
@property (nonatomic) int allFrameCount;
@property (nonatomic) double allFrameRate;
@property (retain, nonatomic) NSDictionary * currentResolution;
@property (retain, nonatomic) VideoScaler * videoScaler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (int)width;
- (int)height;
- (void)setWidth:(int)arg0;
- (CannedRawVideoCapture *)initWithPath:(NSString *)arg0;
- (void)setHeight:(int)arg0;
- (struct __CVBuffer *)createPixelBufferForFrameIndex:(int)arg0;
- (void)getFrameRate:(double *)arg0 frameCount:(int *)arg1;
- (long)setWidth:(int)arg0 height:(int)arg1;
- (long)rotatePixelBuffer:(struct __CVBuffer *)arg0 andStoreTo:(struct __CVBuffer * *)arg1;
- (VideoScaler *)videoScaler;
- (void)setVideoScaler:(VideoScaler *)arg0;
- (int)allFrameCount;
- (void)setAllFrameCount:(int)arg0;
- (double)allFrameRate;
- (void)setAllFrameRate:(double)arg0;
- (long)initializeFrameResolutionArrayFromFolder:(id)arg0;
- (NSArray *)allResolutions;
- (void)setAllResolutions:(NSArray *)arg0;
- (NSDictionary *)currentResolution;
- (void)setCurrentResolution:(NSDictionary *)arg0;

@end
