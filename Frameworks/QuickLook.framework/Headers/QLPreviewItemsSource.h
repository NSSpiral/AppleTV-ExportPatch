/* Runtime dump - QLPreviewItemsSource
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewItemsSource : NSObject <UIDocumentInteractionControllerDelegatePrivate>
{
    QLPreviewController * _previewController;
    <QLPreviewControllerDataSource> * _dataSource;
    <QLPreviewItem> * _previewItem;
    char _prepared;
    int _UUID;
    NSMutableDictionary * _previewItemCache;
    unsigned int _numberOfPreviewItems;
    int _currentPreviewItemIndex;
    int _currentUIItemIndex;
    int _archiveDataSourceIndex;
    NSMutableArray * _archiveItems;
    NSMapTable * _uiItems;
    NSURL * _unzippingURL;
}

@property (readonly) int UUID;
@property <QLPreviewControllerDataSource> * dataSource;
@property (retain) <QLPreviewItem> * previewItem;
@property (readonly) char prepared;
@property (readonly) char viewingArchive;
@property (readonly) char shouldShowFileList;
@property (readonly) int numberOfPreviewItems;
@property int currentPreviewItemIndex;
@property (readonly) <QLPreviewItem> * currentPreviewItem;
@property (readonly) int realNumberOfPreviewItems;
@property int realCurrentPreviewItemIndex;
@property (readonly) <QLPreviewItem> * realCurrentPreviewItem;
@property (readonly) int numberOfUIItems;
@property (readonly) int currentUIItemIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)prepare;
- (void)purgeCache;
- (QLPreviewItemsSource *)initWithPreviewController:(QLPreviewController *)arg0;
- (<QLPreviewItem> *)previewItem;
- (void)setPreviewItem:(<QLPreviewItem> *)arg0;
- (<QLPreviewItem> *)currentPreviewItem;
- (int)realNumberOfPreviewItems;
- (<QLPreviewItem> *)realCurrentPreviewItem;
- (NSObject *)realPreviewItemAtIndex:(int)arg0;
- (void)setRealCurrentPreviewItemIndex:(int)arg0;
- (int)realCurrentPreviewItemIndex;
- (int)currentPreviewItemIndex;
- (void)setCurrentPreviewItemIndex:(int)arg0;
- (char)prepared;
- (int)numberOfPreviewItems;
- (NSObject *)previewItemAtIndex:(int)arg0;
- (void)resolvePreviewItem:(NSObject *)arg0 completionBlock:(id /* block */)arg1;
- (void)preparedPreviewItemAtIndex:(int)arg0 completionBlock:(id /* block */)arg1;
- (char)shouldShowFileList;
- (char)isViewingArchive;
- (int)currentUIItemIndex;
- (NSObject *)UIItemAtIndex:(int)arg0;
- (int)numberOfUIItems;
- (void)addArchiveItem:(NSObject *)arg0;
- (void)_setUIItem:(NSObject *)arg0 atIndex:(int)arg1;
- (void)removeArchiveItemAtIndex:(int)arg0;
- (NSObject *)_UIItemAtIndex:(int)arg0;
- (void)dealloc;
- (void)setDataSource:(<QLPreviewControllerDataSource> *)arg0;
- (<QLPreviewControllerDataSource> *)dataSource;
- (void)reset;
- (int)UUID;
- (NSObject *)documentInteractionControllerURLOfDirectoryForUnzippedDocument:(NSObject *)arg0;

@end
