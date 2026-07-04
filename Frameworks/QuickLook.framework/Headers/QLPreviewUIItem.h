/* Runtime dump - QLPreviewUIItem
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewUIItem : NSObject <QLPreviewUIItem>
{
    <QLPreviewItem> * _previewItem;
    QLPreviewThumbnailGenerator * _thumbnailGenerator;
    int _index;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSURL * previewItemURL;
@property (readonly) NSString * previewItemTitle;
@property (readonly) UIImage * icon;
@property (readonly) int level;
@property (readonly) int previewItemIndex;
@property (readonly) char isFolder;

+ (NSObject *)genericIconForPreviewItem:(NSObject *)arg0;
+ (NSObject *)uiItemForPreviewItem:(NSObject *)arg0 index:(int)arg1;

- (UIImage *)icon;
- (void)updateIconWithSize:(struct CGSize)arg0 completionBlock:(id /* block */)arg1;
- (void)cancelIconUpdate;
- (int)previewItemIndex;
- (void)dealloc;
- (int)level;
- (NSURL *)previewItemURL;
- (NSString *)previewItemTitle;
- (char)isFolder;

@end
