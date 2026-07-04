/* Runtime dump - QLPreviewThumbnailGenerator
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewThumbnailGenerator : NSObject
{
    <QLPreviewItem> * _item;
    struct CGSize _size;
    float _scale;
    UIImage * _thumbnailImage;
    NSString * _contentType;
    int _status;
}

@property (readonly) UIImage * thumbnailImage;

+ (char)canGenerateThumbnailForPreviewItem:(NSObject *)arg0;
+ (NSObject *)generatorForPreviewItem:(NSObject *)arg0 size:(struct CGSize)arg1;

- (UIImage *)_thumbnailForImage;
- (id)_thumbnailForPDF;
- (id)_thumbnailForMovie;
- (struct CGSize)_pixelSize;
- (struct CGContext *)_beginContext;
- (NSObject *)_endContextWithContentFrame:(struct CGRect)arg0;
- (void)generateWithCompletionBlock:(id /* block */)arg0;
- (void)cancel;
- (void)dealloc;
- (UIImage *)thumbnailImage;

@end
