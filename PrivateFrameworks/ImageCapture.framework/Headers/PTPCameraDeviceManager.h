/* Runtime dump - PTPCameraDeviceManager
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface PTPCameraDeviceManager : DeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSNetServiceBrowser * _netServiceBrowser;
    NSMutableArray * _netServices;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startRunning;
- (void)stopRunning;
- (void)dealloc;
- (PTPCameraDeviceManager *)init;
- (void)netServiceBrowserDidStopSearch:(NSNetServiceBrowser *)arg0;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didFindService:(NSNetService *)arg1 moreComing:(char)arg2;
- (void)netServiceBrowser:(NSNetServiceBrowser *)arg0 didRemoveService:(NSNetService *)arg1 moreComing:(char)arg2;
- (void)netServiceDidResolveAddress:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didNotResolve:(NSDictionary *)arg1;
- (void)netServiceDidStop:(NSNetService *)arg0;
- (void)netService:(NSNetService *)arg0 didUpdateTXTRecordData:(NSData *)arg1;
- (void)openDeviceImp:(id)arg0;
- (void)closeDeviceImp:(id)arg0;
- (void)openSessionImp:(id)arg0;
- (void)closeSessionImp:(id)arg0;
- (void)syncClockImp:(id)arg0;
- (void)getThumbnailOfFileImp:(id)arg0;
- (void)getMetadataOfFileImp:(id)arg0;
- (void)deleteFileImp:(id)arg0;
- (void)downloadFileImp:(id)arg0;
- (void)ejectImp:(id)arg0;
- (int)handleEvent:(NSObject *)arg0 onDevice:(NSObject *)arg1 contextInfo:(void *)arg2;
- (id)usbLocationIDsOfPTPDevices;
- (void)handleEventImp:(id)arg0;

@end
