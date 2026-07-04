/* Runtime dump - DeviceManager
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface DeviceManager : NSObject <ICDeviceManagerProtocol>
{
    DeviceManagerThread * _thread;
    NSDictionary * _deviceMatchingInfo;
    NSMutableDictionary * _devices;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)startRunning;
- (void)stopRunning;
- (void)dealloc;
- (DeviceManager *)init;
- (void)postNotification:(NSNotification *)arg0;
- (int)openSession:(ICDevice *)arg0 contextInfo:(void *)arg1;
- (int)closeSession:(ICDevice *)arg0 contextInfo:(void *)arg1;
- (int)syncClock:(ICDevice *)arg0 contextInfo:(void *)arg1;
- (int)deleteFile:(ICCameraFile *)arg0 fromDevice:(ICCameraDevice *)arg1 contextInfo:(void *)arg2;
- (int)eject:(ICCameraDevice *)arg0;
- (int)downloadFile:(ICCameraFile *)arg0 fromDevice:(ICCameraDevice *)arg1 options:(NSDictionary *)arg2 contextInfo:(void *)arg3;
- (int)getThumbnailOfFile:(ICCameraFile *)arg0 fromDevice:(ICCameraDevice *)arg1 contextInfo:(void *)arg2;
- (int)getMetadataOfFile:(ICCameraFile *)arg0 fromDevice:(ICCameraDevice *)arg1 contextInfo:(void *)arg2;
- (int)openDevice:(NSDictionary *)arg0 contextInfo:(void *)arg1;
- (int)closeDevice:(ICDevice *)arg0 contextInfo:(void *)arg1;
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
- (void)postCommandCompletionNotification:(NSNotification *)arg0;

@end
