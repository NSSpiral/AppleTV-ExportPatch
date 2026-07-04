/* Runtime dump - CAMVideoCaptureResponse
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMVideoCaptureResponse : CAMCaptureResponse
{
    char _unplayable;
    char _didCompleteUnexpectedly;
    short _assetSubtype;
    NSString * _videoCapturePath;
    int _recordingStoppedReason;
    UIImage * _videoPreviewImage;
    double _duration;
}

@property (copy, nonatomic) NSString * videoCapturePath;
@property (nonatomic) int recordingStoppedReason;
@property (retain, nonatomic) UIImage * videoPreviewImage;
@property (readonly, nonatomic) char successful;
@property (nonatomic) short assetSubtype;
@property (nonatomic) double duration;
@property (nonatomic) char unplayable;
@property (nonatomic) char didCompleteUnexpectedly;

+ (double)minimumVideoCaptureDuration;

- (CAMVideoCaptureResponse *)init;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void).cxx_destruct;
- (void)setVideoCapturePath:(NSString *)arg0;
- (UIImage *)videoPreviewImage;
- (void)setVideoPreviewImage:(UIImage *)arg0;
- (NSString *)videoCapturePath;
- (char)isSuccessful;
- (int)recordingStoppedReason;
- (char)isUnplayable;
- (void)setRecordingStoppedReason:(int)arg0;
- (void)setUnplayable:(char)arg0;
- (char)didCompleteUnexpectedly;
- (void)setDidCompleteUnexpectedly:(char)arg0;
- (void)setAssetSubtype:(short)arg0;
- (short)assetSubtype;

@end
