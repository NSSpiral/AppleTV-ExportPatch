/* Runtime dump - CMVideoCaptureCameraTorchManager
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface CMVideoCaptureCameraTorchManager : NSObject <AXCameraTorchManager>
{
    struct tagHANDLE * _hCMCapture;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)openTorchDevice;
- (void)closeTorchDevice;
- (void)turnTorchOn;
- (void)turnTorchOff;
- (CMVideoCaptureCameraTorchManager *)initWithVideoCaptureHandle:(struct tagHANDLE *)arg0;

@end
