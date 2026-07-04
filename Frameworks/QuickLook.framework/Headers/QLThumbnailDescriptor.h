/* Runtime dump - QLThumbnailDescriptor
 * Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailDescriptor : NSObject
{
    float _scaleFactor;
    struct CGSize _size;
}

@property struct CGSize size;
@property float scaleFactor;

+ (NSObject *)descriptorWithSize:(struct CGSize)arg0 scaleFactor:(float)arg1;

- (void)setScaleFactor:(float)arg0;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg0;
- (float)scaleFactor;

@end
