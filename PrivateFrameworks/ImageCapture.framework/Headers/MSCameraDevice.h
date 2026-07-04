/* Runtime dump - MSCameraDevice
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface MSCameraDevice : ICCameraDevice
{
    void * _msCameraProperties;
}

- (void)dealloc;
- (MSCameraDevice *)initWithVolumePath:(NSString *)arg0 mediaPaths:(NSArray *)arg1;
- (void)enumerateContent;
- (char)eject;
- (unsigned int)itemsInFolder:(char *)arg0;
- (void)finalize;

@end
