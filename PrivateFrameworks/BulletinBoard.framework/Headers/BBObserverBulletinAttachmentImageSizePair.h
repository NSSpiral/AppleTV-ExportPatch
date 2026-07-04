/* Runtime dump - BBObserverBulletinAttachmentImageSizePair
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObserverBulletinAttachmentImageSizePair : NSObject
{
    UIImage * _image;
    struct CGSize _size;
}

@property (retain, nonatomic) UIImage * image;
@property (nonatomic) struct CGSize size;

- (void)dealloc;
- (struct CGSize)size;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)image;
- (void)setSize:(struct CGSize)arg0;

@end
