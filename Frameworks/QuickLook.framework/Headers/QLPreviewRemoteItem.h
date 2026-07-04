/* Runtime dump - QLPreviewRemoteItem
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewRemoteItem : NSObject <QLPreviewItem>
{
    QLServicePreviewContentController * _contentController;
    int _index;
    QLPreviewItemProxy * _proxy;
    char _resolving;
    id _completionBlock;
}

@property (readonly) QLPreviewItemProxy * proxy;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSURL * previewItemURL;
@property (readonly) NSString * previewItemTitle;

- (UIColor *)backgroundColorOverride;
- (char)isPromisedItem;
- (void)_clearCompletionBlock;
- (double)autoPlaybackPosition;
- (QLPreviewRemoteItem *)initWithContentController:(QLServicePreviewContentController *)arg0 index:(int)arg1;
- (void)resolveWithCompletionBlock:(id /* block */)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (NSURL *)previewItemURL;
- (NSObject *)previewItemContentType;
- (NSObject *)previewItemURLForDisplay;
- (NSString *)previewItemTitle;
- (QLPreviewItemProxy *)proxy;

@end
