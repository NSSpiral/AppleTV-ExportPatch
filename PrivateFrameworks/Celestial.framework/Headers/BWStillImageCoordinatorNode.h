/* Runtime dump - BWStillImageCoordinatorNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageCoordinatorNode : BWNode <BWFigVideoDeviceStillImageCaptureDelegate, BWBracketSettingsProvider>
{
    char _stillImageInputActive;
    BWFigVideoCaptureDevice * _captureDevice;
    BWNodeOutput * _defaultOutput;
    BWNodeOutput * _hdrOutput;
    <BWBracketSettingsProvider> * _hdrBracketSettingsProvider;
    BWNodeOutput * _sisOutput;
    <BWBracketSettingsProvider> * _sisBracketSettingsProvider;
    <BWBracketSettingsProvider> * _clientBracketSettingsProvider;
    <BWBracketSettingsProvider> * _oisBracketSettingsProvider;
    <BWStillImageCaptureStatusDelegate> * _stillImageCaptureStatusDelegate;
    struct opaqueCMSimpleQueue * _stillImageRequestQueue;
    NSObject<OS_dispatch_queue> * _stillImageDispatchQueue;
    NSObject<OS_dispatch_group> * _stillImageDispatchGroup;
    struct opaqueCMSimpleQueue * _prepareBracketQueue;
    int _expectedImagesForRequest;
    int _receivedImagesForRequest;
    int _clientExpectedImagesForRequest;
    int _clientReceivedImagesForRequest;
    FigCaptureStillImageSettings * _currentRequestSettings;
    int _captureType;
    BWBracketSettings * _bracketSettings;
    char _haveInvokedWillCaptureCallbackForCurrentRequest;
    BWNodeInput * _stillImageInput;
}

@property (readonly, nonatomic) BWNodeInput * stillImageInput;
@property (readonly, nonatomic) BWNodeOutput * defaultOutput;
@property (readonly, nonatomic) BWNodeOutput * hdrOutput;
@property (readonly, nonatomic) BWNodeOutput * sisOutput;
@property (readonly, nonatomic) int worstCaseInitialMaxBracketedCaptureBufferCount;
@property (nonatomic) <BWStillImageCaptureStatusDelegate> * stillImageCaptureStatusDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (void)dealloc;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg0;
- (int)bracketCountForBracketingMode:(int)arg0 withCurrentFrameStats:(struct ? *)arg1 stillImageSettings:(FigCaptureStillImageSettings *)arg2;
- (id)bracketSettingsForBracketingMode:(int)arg0 withCurrentFrameStats:(struct ? *)arg1 stillImageSettings:(FigCaptureStillImageSettings *)arg2;
- (long)prepareStillImageBracketNowWithSettings:(NSDictionary *)arg0;
- (long)captureStillImageNowWithSettings:(NSDictionary *)arg0;
- (void)setStillImageCaptureStatusDelegate:(<BWStillImageCaptureStatusDelegate> *)arg0;
- (BWStillImageCoordinatorNode *)initWithCaptureDevice:(BWFigVideoCaptureDevice *)arg0 hdrBracketSettingsProvider:(<BWBracketSettingsProvider> *)arg1 sisBracketSettingsProvider:(<BWBracketSettingsProvider> *)arg2 oisBracketSettingsProvider:(<BWBracketSettingsProvider> *)arg3;
- (int)worstCaseInitialMaxBracketedCaptureBufferCount;
- (BWNodeOutput *)defaultOutput;
- (BWNodeOutput *)hdrOutput;
- (BWNodeOutput *)sisOutput;
- (void)captureFinished:(id)arg0 withStatus:(long)arg1;
- (void)_flushStillImageRequestWithError:(long)arg0;
- (long)_validateStillImageRequestForSettings:(NSDictionary *)arg0;
- (void)_serviceNextStillImageRequest;
- (void)_servicePrepareBracketQueue;
- (NSObject *)_outputForCaptureType:(int)arg0;
- (void)_completeCaptureWithStatus:(long)arg0;
- (void)_willCaptureStillImage;
- (void)_didCaptureStillImage;
- (void)_configureCurrentRequestForStillImageSettings;
- (void)_beginCapture;
- (int)_captureTypeForSettings:(NSDictionary *)arg0 frameStatistics:(struct ? *)arg1;
- (NSObject *)_bracketSettingsForCaptureType:(int)arg0 frameStatistics:(struct ? *)arg1 stillImageSettings:(FigCaptureStillImageSettings *)arg2;
- (int)_expectedImagesForCaptureType:(int)arg0 frameStatistics:(struct ? *)arg1 stillImageSettings:(FigCaptureStillImageSettings *)arg2 bracketSettings:(BWBracketSettings *)arg3;
- (int)_clientExpectedImagesForCaptureType:(int)arg0 stillImageSettings:(FigCaptureStillImageSettings *)arg1;
- (void)captureDeviceWillBeginStillImageCapture:(id)arg0;
- (void)captureDeviceDidCompleteStillImageCapture:(id)arg0;
- (void)captureDevice:(BWFigVideoCaptureDevice *)arg0 stillImageCaptureError:(long)arg1;
- (<BWStillImageCaptureStatusDelegate> *)stillImageCaptureStatusDelegate;
- (BWNodeInput *)stillImageInput;

@end
