/* Runtime dump - ICDeviceProperties
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICDeviceProperties : NSObject
{
    id _delegate;
    DeviceManager * _deviceManager;
    NSString * _name;
    struct CGImage * _icon;
    NSString * _productKind;
    NSString * _transportType;
    NSString * _UUIDString;
    int _usbLocationID;
    int _usbProductID;
    int _usbVendorID;
    char _hasOpenSession;
    char _autoOpenSession;
    char _openSessionPending;
    char _closeSessionPending;
}

@property id delegate;
@property DeviceManager * deviceManager;
@property (retain) NSString * name;
@property struct CGImage * icon;
@property (retain) NSString * productKind;
@property (retain) NSString * transportType;
@property (retain) NSString * UUIDString;
@property int usbLocationID;
@property int usbProductID;
@property int usbVendorID;
@property char hasOpenSession;
@property char autoOpenSession;
@property char openSessionPending;
@property char closeSessionPending;

- (struct CGImage *)icon;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)UUIDString;
- (void)setIcon:(struct CGImage *)arg0;
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
- (int)usbVendorID;
- (NSString *)productKind;
- (NSString *)transportType;
- (void)finalize;

@end
