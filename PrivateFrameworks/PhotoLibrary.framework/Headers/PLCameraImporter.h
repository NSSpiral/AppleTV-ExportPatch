/* Runtime dump - PLCameraImporter
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraImporter : NSObject <ICDeviceDelegate, ICCameraDeviceDelegate>
{
    id _delegate;
    NSMutableDictionary * _itemsMapping;
    NSMutableArray * _items;
    PLMutableCameraImportQueue * _thumbnailQueue;
    PLCameraImportQueue * _downloadQueue;
    PLCameraImportQueue * _importQueue;
    PLCameraImportQueue * _deleteQueue;
    NSMutableArray * _orphanItems;
    NSMutableArray * _coalescedDeletedItems;
    char _importInProgress;
    NSMutableDictionary * _parentFolderMapping;
    char _autosplitEvents;
    int _eventSplitGranularity;
    ICCameraDevice * _camera;
    PLImportFileManager * _importFileManager;
    char _stopAfterNextItemImport;
    char _importItemInProgress;
    char _isAppleDevice;
    NSString * importSessionIdentifier;
}

@property (nonatomic) <PLCameraImporterDelegate> * delegate;
@property (retain, nonatomic) NSMutableDictionary * itemsMapping;
@property (retain, nonatomic) NSMutableArray * items;
@property (retain, nonatomic) ICCameraDevice * camera;
@property (copy, nonatomic) NSString * importSessionIdentifier;
@property (nonatomic) char isAppleDevice;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)removeItems:(NSArray *)arg0;
- (char)deviceIsLocked;
- (void)dealloc;
- (void)setDelegate:(<PLCameraImporterDelegate> *)arg0;
- (<PLCameraImporterDelegate> *)delegate;
- (NSMutableArray *)items;
- (void)setItems:(NSMutableArray *)arg0;
- (void)didReceiveImportNotification:(NSNotification *)arg0;
- (void)setImportSessionIdentifier:(NSString *)arg0;
- (char)isAppleDevice;
- (NSString *)importItemForCameraFile:(NSString *)arg0;
- (NSMutableDictionary *)itemsMapping;
- (void)_addImportItemFromCameraFile:(NSString *)arg0;
- (void)_deleteImportItemFromDisk:(id)arg0;
- (void)_didFinishDeletingItems:(NSArray *)arg0;
- (void)didReceiveThumbnail:(struct CGImage *)arg0 forImportItem:(NSObject *)arg1 error:(NSError *)arg2;
- (void)importImportItem:(NSObject *)arg0;
- (void)_clearImportItemsForDownload:(id)arg0;
- (void)_separateItems:(NSArray *)arg0 intoEventsWithGranularity:(int)arg1;
- (void)didDownloadFile:(NSString *)arg0 error:(NSError *)arg1 options:(NSDictionary *)arg2 contextInfo:(void *)arg3;
- (void)didImportImportItem:(NSObject *)arg0 error:(NSError *)arg1;
- (NSString *)importSessionIdentifier;
- (void)_didFinishImportingItems:(NSArray *)arg0;
- (void)_photoLibraryFinishedImportForPhoto:(UIImage *)arg0 atPath:(NSString *)arg1 error:(NSError *)arg2;
- (void)_downloadImportItems:(NSArray *)arg0;
- (void)_deleteImportItemsFromDiskInBackground:(NSNotification *)arg0;
- (void)_stopImport;
- (void)_deleteImportItems:(NSArray *)arg0;
- (void)_removeImportItemsAtPathsInBackground:(NSNotification *)arg0;
- (void)didDisconnectFromCamera:(id)arg0 error:(NSError *)arg1;
- (void)didConnectToCamera:(id)arg0 error:(NSError *)arg1;
- (void)addImportItemsFromCameraFiles:(id)arg0;
- (void)camaraDidEnumerateContents;
- (void)cameraDidError:(NSError *)arg0;
- (void)removeImportItemsForCameraFiles:(id)arg0;
- (void)_coalescedRemoveImportItems;
- (void)didReceiveThumbnail:(struct CGImage *)arg0 forCameraFile:(NSString *)arg1 error:(NSError *)arg2;
- (void)didReceiveMetadata:(NSDictionary *)arg0 forCameraFile:(NSString *)arg1 error:(NSError *)arg2;
- (void)didRemoveDevice:(ICDevice *)arg0;
- (void)device:(ICDevice *)arg0 didOpenSessionWithError:(NSError *)arg1;
- (void)deviceDidBecomeReady:(ICDevice *)arg0;
- (void)device:(ICDevice *)arg0 didCloseSessionWithError:(NSError *)arg1;
- (void)device:(ICDevice *)arg0 didEncounterError:(NSError *)arg1;
- (void)cameraDevice:(ICCameraDevice *)arg0 didAddItems:(NSArray *)arg1;
- (void)cameraDevice:(ICCameraDevice *)arg0 didRemoveItems:(NSArray *)arg1;
- (void)cameraDevice:(ICCameraDevice *)arg0 didReceiveThumbnail:(struct CGImage *)arg1 forItem:(ICCameraItem *)arg2 error:(NSError *)arg3;
- (void)cameraDevice:(ICCameraDevice *)arg0 didReceiveMetadata:(NSDictionary *)arg1 forItem:(ICCameraItem *)arg2 error:(NSError *)arg3;
- (PLCameraImporter *)initWithDevice:(NSObject *)arg0 delegate:(<PLCameraImporterDelegate> *)arg1;
- (NSString *)cameraName;
- (id)cameraKind;
- (void)ejectCamera;
- (unsigned int)estimatedNumberOfItems;
- (unsigned int)contentPercentCompleted;
- (char)isImporting;
- (NSArray *)allImportItems;
- (void)readImportItems;
- (void)readMetadataForImportItems:(NSArray *)arg0;
- (void)readThumbnailsForImportItems:(NSArray *)arg0;
- (unsigned long long)approximateBytesRequiredToImportItem:(NSObject *)arg0;
- (void)importItems:(NSArray *)arg0;
- (void)stopImport;
- (void)setItemsMapping:(NSMutableDictionary *)arg0;
- (void)setIsAppleDevice:(char)arg0;
- (ICCameraDevice *)camera;
- (void)setCamera:(ICCameraDevice *)arg0;

@end
