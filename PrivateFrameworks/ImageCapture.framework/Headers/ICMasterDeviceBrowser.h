/* Runtime dump - ICMasterDeviceBrowser
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICMasterDeviceBrowser : NSObject
{
    NSMutableArray * _devices;
    NSMutableArray * _browsers;
    int _numberOfBrowsingBrowsers;
    MSCameraDeviceManager * _msDevManager;
    PTPCameraDeviceManager * _ptpDevManager;
    ExFATCameraDeviceManager * _exFATManager;
}

@property (readonly) NSMutableArray * devices;
@property (readonly) NSMutableArray * browsers;

+ (char)exists;
+ (ICMasterDeviceBrowser *)defaultBrowser;

- (void)dealloc;
- (ICMasterDeviceBrowser *)init;
- (int)start:(SBJsonStreamWriterStateArrayStart *)arg0;
- (void)stop:(char)arg0;
- (NSMutableArray *)devices;
- (void)handleCommandCompletionNotification:(NSNotification *)arg0;
- (void)handleImageCaptureEventNotification:(NSNotification *)arg0;
- (void)addBrowser:(BTLEBrowser *)arg0;
- (int)addPTPCamera:(id)arg0;
- (int)addMSCamera:(id)arg0;
- (void)removeBrowser:(BTLEBrowser *)arg0;
- (void)removePTPCamera:(id)arg0;
- (int)addExFATCamera:(id)arg0;
- (void)removeMSCamera:(id)arg0;
- (NSObject *)deviceWithDelegate:(NSObject *)arg0;
- (void)informBrowserDelegateUsingSelector:(SEL)arg0 withObject:(NSObject *)arg1;
- (NSMutableArray *)browsers;
- (void)finalize;

@end
