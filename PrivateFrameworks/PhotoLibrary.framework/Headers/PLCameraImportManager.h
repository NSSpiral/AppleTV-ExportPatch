/* Runtime dump - PLCameraImportManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraImportManager : NSObject <ICDeviceBrowserDelegate>
{
    ICDeviceBrowser * _deviceBrowser;
    NSMutableArray * _importers;
    NSMutableArray * _importersToEject;
    char _wantsToStopListening;
    id _stopListeningCallbackTarget;
    SEL _stopListeningCallbackSelector;
}

@property (retain, nonatomic) NSMutableArray * importers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PLCameraImportManager *)sharedCameraImportManager;

- (void)dealloc;
- (PLCameraImportManager *)init;
- (unsigned int)startListening;
- (void)addImporter:(PLWallpaperImporter *)arg0;
- (void)_stopListening;
- (NSMutableArray *)importers;
- (void)removeImporter:(PLWallpaperImporter *)arg0;
- (void)_cameraImporterDidFinishImporting:(id)arg0;
- (NSObject *)importerMatchingDevice:(NSObject *)arg0;
- (void)deviceBrowser:(ICDeviceBrowser *)arg0 didAddDevice:(ICDevice *)arg1 moreComing:(char)arg2;
- (void)deviceBrowser:(ICDeviceBrowser *)arg0 didRemoveDevice:(ICDevice *)arg1 moreGoing:(char)arg2;
- (NSObject *)importerForDevice:(NSObject *)arg0 withDelegate:(NSObject *)arg1;
- (void)stopListening;
- (void)stopListeningWithCallbackTarget:(NSObject *)arg0 selector:(SEL)arg1;
- (void)ejectCameras;
- (void)setImporters:(NSMutableArray *)arg0;

@end
