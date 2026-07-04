/* Runtime dump - AVExternalDeviceController
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDeviceController : NSObject
{
    AVExternalDeviceControllerInternal * _externalDeviceController;
}

@property (weak, nonatomic) <AVExternalDeviceControllerDelegate> * delegate;
@property (nonatomic) int discoveryMode;
@property (readonly, copy, nonatomic) NSArray * availableExternalDevices;

- (char)setCurrentExternalDevice:(NSObject *)arg0 withPassword:(NSString *)arg1;
- (NSArray *)availableExternalDevices;
- (char)setCurrentExternalDevice:(NSObject *)arg0;
- (char)isExternalDeviceCurrent:(id)arg0;
- (int)discoveryMode;
- (void)dealloc;
- (void)setDelegate:(<AVExternalDeviceControllerDelegate> *)arg0;
- (AVExternalDeviceController *)init;
- (<AVExternalDeviceControllerDelegate> *)delegate;
- (void)setDiscoveryMode:(int)arg0;

@end
