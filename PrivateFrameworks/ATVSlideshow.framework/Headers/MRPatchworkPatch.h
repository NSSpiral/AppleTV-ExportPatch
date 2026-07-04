/* Runtime dump - MRPatchworkPatch
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRPatchworkPatch : NSObject
{
    MRImage * _image;
    struct CGRect rectangle;
    char needsBlend;
}

@property (retain, nonatomic) MRImage * image;
@property (nonatomic) struct CGRect rectangle;
@property (nonatomic) char needsBlend;

- (void)dealloc;
- (void)setImage:(MRImage *)arg0;
- (MRImage *)image;
- (MRPatchworkPatch *)initWithImage:(MRImage *)arg0 rectangle:(struct CGRect)arg1 needsBlend:(struct CGSize)arg2;
- (struct CGRect)rectangle;
- (void)setRectangle:(struct CGRect)arg0;
- (char)needsBlend;
- (void)setNeedsBlend:(char)arg0;

@end
