/* Runtime dump - PTPCameraDevice
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraDevice : ICCameraDevice
{
    void * _ptpCameraProperties;
}

@property (readonly) PTPInitiator * initiator;

- (void)dealloc;
- (void)enumerateContent;
- (char)eject;
- (PTPCameraDevice *)initWithUSBLocationID:(unsigned int)arg0;
- (PTPCameraDevice *)initWithTCPIPInfo:(NSDictionary *)arg0;
- (void)addToEventHandlerQ:(id /* block */)arg0;
- (void)finalize;
- (PTPInitiator *)initiator;

@end
