/* Runtime dump - AVCaptureStillImageOutputInternal_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageOutputInternal_FigRecorder : NSObject
{
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
    unsigned long shutterSoundID;
}

- (void)dealloc;
- (AVCaptureStillImageOutputInternal_FigRecorder *)init;

@end
