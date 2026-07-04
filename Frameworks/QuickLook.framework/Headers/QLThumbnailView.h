/* Runtime dump - QLThumbnailView
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailView : UIView
{
    QLThumbnailOperation * _thumbnailOperation;
    UIImage * _image;
    int _pageNumber;
    char _alwaysVisible;
    struct CGRect unselectedFrame;
    struct CGRect _unselectedFrame;
}

@property (retain) QLThumbnailOperation * thumbnailOperation;
@property (retain) UIImage * image;
@property int pageNumber;
@property char alwaysVisible;
@property struct CGRect unselectedFrame;

- (void)setAlwaysVisible:(char)arg0;
- (void)setUnselectedFrame:(struct CGRect)arg0;
- (QLThumbnailOperation *)thumbnailOperation;
- (void)setThumbnailOperation:(QLThumbnailOperation *)arg0;
- (char)alwaysVisible;
- (struct CGRect)unselectedFrame;
- (QLThumbnailView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)setImage:(UIImage *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (UIImage *)image;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (int)pageNumber;
- (void)setPageNumber:(int)arg0;

@end
