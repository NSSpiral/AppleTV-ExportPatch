/* Runtime dump - QLPreviewArchiveItem
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewArchiveItem : NSObject <QLPreviewUIItem>
{
    UIDocumentInteractionController * _archiveController;
    QLPreviewThumbnailGenerator * _thumbnailGenerator;
    NSString * _path;
    NSURL * _unarchivedURL;
    NSOperation * _unarchiveOperation;
    NSOperationQueue * _unarchiveOperationQueue;
    NSMutableArray * _completionBlocks;
    NSError * _unarchivingError;
    int _previewItemIndex;
    int _UIItemIndex;
    int _level;
    NSURL * _rootUnzippingURL;
    NSArray * _subItems;
}

@property (readonly) NSString * path;
@property (readonly) char unarchived;
@property int previewItemIndex;
@property int UIItemIndex;
@property int level;
@property (retain) NSURL * rootUnzippingURL;
@property (copy) NSArray * subItems;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSURL * previewItemURL;
@property (readonly) NSString * previewItemTitle;
@property (readonly) UIImage * icon;
@property (readonly) char isFolder;

- (UIImage *)icon;
- (char)isPromisedItem;
- (void)updateIconWithSize:(struct CGSize)arg0 completionBlock:(id /* block */)arg1;
- (void)cancelIconUpdate;
- (int)previewItemIndex;
- (QLPreviewArchiveItem *)initWithArchiveController:(UIDocumentInteractionController *)arg0 path:(NSString *)arg1;
- (void)setPreviewItemIndex:(int)arg0;
- (void)setUIItemIndex:(int)arg0;
- (void)setRootUnzippingURL:(NSURL *)arg0;
- (void)setSubItems:(NSArray *)arg0;
- (NSArray *)subItems;
- (NSURL *)rootUnzippingURL;
- (void)unarchiveWithCompletionBlock:(id /* block */)arg0;
- (char)unarchived;
- (NSError *)unarchivingError;
- (int)UIItemIndex;
- (void)dealloc;
- (NSString *)description;
- (NSString *)path;
- (void)setLevel:(int)arg0;
- (int)level;
- (QLPreviewArchiveItem *)initWithPath:(NSString *)arg0;
- (NSURL *)previewItemURL;
- (void)cleanup;
- (char)isFolder;

@end
