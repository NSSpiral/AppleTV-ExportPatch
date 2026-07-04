/* Runtime dump - ExFATCameraDevice
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ExFATCameraDevice : ICCameraDevice
{
    void * _exFATCameraProperties;
}

- (void)dealloc;
- (ExFATCameraDevice *)initWithVolumePath:(NSString *)arg0 mediaPaths:(NSArray *)arg1;
- (void)enumerateContent;
- (char)eject;
- (unsigned int)itemsInFolder:(id)arg0;
- (void)finalize;

@end
