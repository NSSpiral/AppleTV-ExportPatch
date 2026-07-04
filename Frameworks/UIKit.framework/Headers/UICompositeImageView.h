/* Runtime dump - UICompositeImageView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICompositeImageView : UIView
{
    NSMutableArray * m_images;
}

- (UICompositeImageView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (void)addImage:(UIImage *)arg0 toRect:(struct CGRect)arg1 fromRect:(struct CGSize)arg2 operation:(ISURLOperation *)arg3 fraction:(struct CGRect)arg4;
- (void)addImage:(UIImage *)arg0;
- (void)addImage:(UIImage *)arg0 operation:(int)arg1 fraction:(float)arg2;
- (void)addImage:(UIImage *)arg0 toRect:(struct CGRect)arg1 fromRect:(struct CGSize)arg2;
- (void)removeAllImages;

@end
