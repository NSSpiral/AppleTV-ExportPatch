/* Runtime dump - CAMTimelapseState
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimelapseState : NSObject <NSCoding, NSCopying>
{
    char _usingFrontCamera;
    char _allFramesWritten;
    NSString * _timelapseUUID;
    int _captureOrientation;
    NSDate * _startTime;
    CLLocation * _startLocation;
    NSDate * _lastFrameResponseTime;
    NSDate * _stopTime;
    int _stopReasons;
    int _frameIndexStride;
    int _nextFrameIndex;
    float _focusLensPosition;
    double _captureTimeInterval;
}

@property (retain, nonatomic) NSString * timelapseUUID;
@property (nonatomic) char usingFrontCamera;
@property (nonatomic) int captureOrientation;
@property (retain, nonatomic) NSDate * startTime;
@property (retain, nonatomic) CLLocation * startLocation;
@property (retain, nonatomic) NSDate * lastFrameResponseTime;
@property (retain, nonatomic) NSDate * stopTime;
@property (nonatomic) int stopReasons;
@property (nonatomic) char allFramesWritten;
@property (readonly, nonatomic) double captureTimeInterval;
@property (readonly, nonatomic) int frameIndexStride;
@property (readonly, nonatomic) int nextFrameIndex;
@property (nonatomic) float focusLensPosition;
@property (readonly, nonatomic) int connectionMode;

+ (double)maxTimeToWaitForWrittenFrameAfterStop;
+ (NSString *)stateWithContentsOfFile:(NSString *)arg0;

- (CLLocation *)startLocation;
- (CAMTimelapseState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CAMTimelapseState *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setStartTime:(NSDate *)arg0;
- (CAMTimelapseState *)copyWithZone:(struct _NSZone *)arg0;
- (void)setStartLocation:(CLLocation *)arg0;
- (void).cxx_destruct;
- (NSDate *)startTime;
- (int)stopReasons;
- (char)addStopReasons:(int)arg0 stopTime:(NSDate *)arg1;
- (char)mergeSecondaryState:(NSObject *)arg0;
- (NSString *)timelapseUUID;
- (char)canContinueCapture;
- (void)forceCompleted;
- (int)frameIndexStride;
- (char)isReadyForWritingMovie;
- (char)isUsingFrontCamera;
- (int)captureOrientation;
- (char)isEqualToState:(NSObject *)arg0;
- (int)nextFrameIndex;
- (void)setStopReasons:(int)arg0;
- (char)allFramesWritten;
- (void)setAllFramesWritten:(char)arg0;
- (char)incrementFrameIndex;
- (NSObject *)filePathForNextFrameIndex;
- (char)writeToFile:(NSString *)arg0 createDirectoryIfNeeded:(char)arg1;
- (int)connectionMode;
- (void)setTimelapseUUID:(NSString *)arg0;
- (void)setUsingFrontCamera:(char)arg0;
- (void)setCaptureOrientation:(int)arg0;
- (NSDate *)lastFrameResponseTime;
- (void)setLastFrameResponseTime:(NSDate *)arg0;
- (double)captureTimeInterval;
- (float)focusLensPosition;
- (void)setFocusLensPosition:(float)arg0;
- (void)setStopTime:(NSDate *)arg0;
- (NSDate *)stopTime;

@end
