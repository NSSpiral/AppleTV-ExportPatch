/* Runtime dump - CAMTimelapseMovieWriter
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimelapseMovieWriter : NSObject
{
    NSArray * __frameFilePaths;
    int __nextReadFileIndex;
    int __residentImageDataCount;
    int __residentPixelBufferCount;
    NSMutableDictionary * __availableImageData;
    NSMutableDictionary * __availablePixelBuffers;
    NSMutableSet * __inFlightReadFrameIndexes;
    NSObject<OS_dispatch_queue> * __synchronizationQueue;
    NSOperationQueue * __imageReadQueue;
    NSOperationQueue * __imageDecodeQueue;
    NSObject<OS_dispatch_queue> * __movieWritingQueue;
    AVAssetWriter * __writer;
    AVAssetWriterInput * __videoInput;
    AVAssetWriterInputPixelBufferAdaptor * __pixelBufferAdaptor;
    int __framesPerSecond;
    int __nextWriteFileIndex;
    int __currentOutputFrameIndex;
    id __completion;
}

@property (readonly, nonatomic) NSArray * _frameFilePaths;
@property (readonly, nonatomic) int _nextReadFileIndex;
@property (readonly, nonatomic) int _residentImageDataCount;
@property (readonly, nonatomic) int _residentPixelBufferCount;
@property (readonly, nonatomic) NSMutableDictionary * _availableImageData;
@property (readonly, nonatomic) NSMutableDictionary * _availablePixelBuffers;
@property (readonly, nonatomic) NSMutableSet * _inFlightReadFrameIndexes;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * _synchronizationQueue;
@property (readonly, nonatomic) NSOperationQueue * _imageReadQueue;
@property (readonly, nonatomic) NSOperationQueue * _imageDecodeQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * _movieWritingQueue;
@property (readonly, nonatomic) AVAssetWriter * _writer;
@property (readonly, nonatomic) AVAssetWriterInput * _videoInput;
@property (readonly, nonatomic) AVAssetWriterInputPixelBufferAdaptor * _pixelBufferAdaptor;
@property (readonly, nonatomic) int _framesPerSecond;
@property (readonly, nonatomic) int _nextWriteFileIndex;
@property (readonly, nonatomic) int _currentOutputFrameIndex;
@property (readonly, copy, nonatomic) id _completion;

- (CAMTimelapseMovieWriter *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)_reset;
- (void).cxx_destruct;
- (int)_framesPerSecond;
- (NSString *)_completion;
- (void)writeMovieFromFiles:(id)arg0 startDate:(NSDate *)arg1 location:(struct CGPoint)arg2 outputPath:(NSURL *)arg3 transform:(struct CGAffineTransform)arg4 framesPerSecond:(int)arg5 completionHandler:(id /* block */)arg6;
- (struct CGSize)_desiredOutputSizeForFrameSize:(struct CGSize)arg0;
- (char)_startWritingWithOutputPath:(NSURL *)arg0 width:(int)arg1 height:(int)arg2 videoFormatDescription:(struct opaqueCMFormatDescription *)arg3 transform:(struct CGAffineTransform)arg4 framesPerSecond:(int)arg5 frameCount:(int)arg6 videoMetadata:(NSDictionary *)arg7;
- (void)_enqueueNextRead;
- (void)_enqueueNextDecode;
- (void)_enqueueNextWrite;
- (char)_appendPixelBuffer:(struct __CVBuffer *)arg0;
- (void)_finishMovieWithCompletionHandler:(id /* block */)arg0;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(NSObject *)arg0;
- (NSArray *)_frameFilePaths;
- (int)_nextReadFileIndex;
- (int)_residentImageDataCount;
- (int)_residentPixelBufferCount;
- (NSMutableDictionary *)_availableImageData;
- (NSMutableDictionary *)_availablePixelBuffers;
- (NSMutableSet *)_inFlightReadFrameIndexes;
- (NSObject<OS_dispatch_queue> *)_synchronizationQueue;
- (NSOperationQueue *)_imageReadQueue;
- (NSOperationQueue *)_imageDecodeQueue;
- (NSObject<OS_dispatch_queue> *)_movieWritingQueue;
- (AVAssetWriter *)_writer;
- (AVAssetWriterInput *)_videoInput;
- (AVAssetWriterInputPixelBufferAdaptor *)_pixelBufferAdaptor;
- (int)_nextWriteFileIndex;
- (int)_currentOutputFrameIndex;

@end
