/* Runtime dump - CAMTimelapseSettings
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimelapseSettings : NSObject
{
    double _initialCaptureTimeInterval;
    double _maxOutputFPS;
    double _maxOutputLength;
}

@property (readonly, nonatomic) double initialCaptureTimeInterval;
@property (readonly, nonatomic) double maxOutputFPS;
@property (readonly, nonatomic) double maxOutputLength;
@property (readonly, nonatomic) int maxOutputFrames;
@property (readonly, nonatomic) int maxMovieWriteAttempts;
@property (readonly, nonatomic) int maxFailedStateReadAttempts;

+ (CAMTimelapseSettings *)sharedInstance;

- (CAMTimelapseSettings *)init;
- (double)maxOutputLength;
- (double)maxOutputFPS;
- (id)outputSettingsPresetForWidth:(int)arg0 height:(int)arg1;
- (int)averageMovieBitrateForWidth:(int)arg0 height:(int)arg1;
- (long long)maxMovieFileLengthForWidth:(int)arg0 height:(int)arg1;
- (int)maxOutputFrames;
- (double)outputFPSForFrameCount:(int)arg0;
- (long long)minAvailableBytesNeededForCaptureForWidth:(int)arg0 height:(int)arg1;
- (int)maxMovieWriteAttempts;
- (double)waitTimeBeforeNextWriteForNumberOfPreviousAttempts:(int)arg0;
- (int)maxFailedStateReadAttempts;
- (double)initialCaptureTimeInterval;

@end
