/* Runtime dump - QLThumbnailOperation
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailOperation : NSOperation
{
    int _index;
    struct CGSize _size;
    UIImage * _image;
}

@property int index;
@property struct CGSize size;
@property (retain) UIImage * image;

- (void)dealloc;
- (struct CGSize)size;
- (void)setImage:(UIImage *)arg0;
- (QLThumbnailOperation *)init;
- (UIImage *)image;
- (void)setSize:(struct CGSize)arg0;
- (int)index;
- (void)setIndex:(int)arg0;

@end
