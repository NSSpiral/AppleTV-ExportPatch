/* Runtime dump - AVCaptureStillImageOutputInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageOutputInternal : NSObject
{
    AVWeakReference * weakReference;
    NSMutableArray * stillImageRequests;
    char squareCropEnabled;
    struct CGSize previewImageSize;
    unsigned long imageDataFormatType;
    float jpegQuality;
    char jpegQualitySpecified;
    int HDRCaptureMode;
    char EV0CaptureEnabled;
    char noiseReductionEnabled;
    char suspendsVideoProcessingDuringCapture;
    NSDictionary * outputSettings;
    char isCapturingPhoto;
    char rawCaptureEnabled;
    char SISSupported;
    char SISEnabled;
    char SISActive;
    char highResStillEnabled;
    unsigned long shutterSoundID;
    struct ? preparedBracket;
    NSMutableArray * prepareRequests;
    unsigned int maxBracketedCaptureCount;
}

- (void)dealloc;
- (AVCaptureStillImageOutputInternal *)init;

@end
