/* Runtime dump - ICDevice
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICDevice : NSObject
{
    void * _deviceProperties;
}

@property <ICDeviceDelegate> * delegate;
@property (copy) NSString * name;
@property (copy) NSString * productKind;
@property (readonly) struct CGImage * icon;
@property (copy) NSString * transportType;
@property (copy) NSString * UUIDString;
@property char hasOpenSession;
@property int usbLocationID;
@property int usbProductID;
@property int usbVendorID;
@property DeviceManager * deviceManager;
@property char autoOpenSession;
@property char openSessionPending;
@property char closeSessionPending;

- (char)isCameraDevice;
- (struct CGImage *)icon;
- (void)dealloc;
- (void)setDelegate:(<ICDeviceDelegate> *)arg0;
- (ICDevice *)init;
- (NSString *)description;
- (<ICDeviceDelegate> *)delegate;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)UUIDString;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (void)setTransportType:(NSString *)arg0;
- (void)setProductKind:(NSString *)arg0;
- (void)setUUIDString:(NSString *)arg0;
- (DeviceManager *)deviceManager;
- (void)setDeviceManager:(DeviceManager *)arg0;
- (int)usbLocationID;
- (void)setUsbLocationID:(int)arg0;
- (int)usbProductID;
- (void)setUsbProductID:(int)arg0;
- (void)setUsbVendorID:(int)arg0;
- (char)hasOpenSession;
- (void)setHasOpenSession:(char)arg0;
- (char)autoOpenSession;
- (void)setAutoOpenSession:(char)arg0;
- (char)openSessionPending;
- (void)setOpenSessionPending:(char)arg0;
- (char)closeSessionPending;
- (void)setCloseSessionPending:(char)arg0;
- (void)requestCloseSession;
- (void)handleCommandCompletionNotification:(NSNotification *)arg0;
- (void)handleImageCaptureEventNotification:(NSNotification *)arg0;
- (int)usbVendorID;
- (NSString *)productKind;
- (void)requestOpenSession;
- (NSString *)transportType;
- (void)finalize;

@end
