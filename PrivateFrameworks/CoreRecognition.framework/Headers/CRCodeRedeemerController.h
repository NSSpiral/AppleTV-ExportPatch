/* Runtime dump - CRCodeRedeemerController
 * Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRCodeRedeemerController : CRCameraReader <CRCameraReaderDelegate>
{
    <CRCodeRedeemerControllerDelegate> * _delegate;
}

@property (weak) <CRCodeRedeemerControllerDelegate> * delegate;
@property char captureMode;
@property unsigned int captureCount;
@property double sessionTimeout;
@property int whiteBalanceMode;
@property int focusMode;
@property int exposureMode;
@property int torchMode;
@property (copy) NSString * cameraMode;
@property int cameraPosition;
@property char showDiagnosticHUD;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIImage *)findCodeInImage:(struct vImage_Buffer)arg0 maxStage:(unsigned int)arg1;
+ (UIImage *)findCodeInImage:(struct vImage_Buffer)arg0 maxStage:(unsigned int)arg1 roi:(struct CGRect)arg2;
+ (unsigned int)isCRCodeRedeemerAvailable;

- (void)setDelegate:(<CRCodeRedeemerControllerDelegate> *)arg0;
- (CRCodeRedeemerController *)init;
- (<CRCodeRedeemerControllerDelegate> *)delegate;
- (void).cxx_destruct;
- (void)cameraReaderDidCancel:(CRCameraReader *)arg0;
- (void)cameraReader:(CRCameraReader *)arg0 didRecognizeObjects:(NSArray *)arg1;
- (void)cameraReaderDidEnd:(CRCameraReader *)arg0;
- (void)cameraReader:(CRCameraReader *)arg0 didFailWithError:(NSError *)arg1;
- (void)cameraReaderDidDisplayMessage:(CRCameraReader *)arg0;
- (void)cameraReaderDidFindTarget:(CRCameraReader *)arg0;
- (void)showMessage:(NSString *)arg0 color:(UIColor *)arg1 style:(unsigned int)arg2 duration:(double)arg3;

@end
