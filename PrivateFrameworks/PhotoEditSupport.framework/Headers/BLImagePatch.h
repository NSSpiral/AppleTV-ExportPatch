/* Runtime dump - BLImagePatch
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLImagePatch : NSObject
{
    struct CGImage * _imageRef;
    struct CGImage * _maskRef;
    struct CGRect _rect;
}

+ (NSObject *)patchFromRect:(struct CGRect)arg0 inImage:(struct CGSize)arg1;
+ (NSObject *)patchFromRect:(struct CGRect)arg0 inImage:(struct CGSize)arg1 withMask:(NSObject *)arg2;

- (void)dealloc;
- (struct CGSize)size;
- (NSString *)description;
- (struct CGImage *)image;
- (struct CGPoint)origin;
- (struct CGRect)rect;
- (void)drawInContext:(struct CGContext *)arg0;
- (BLImagePatch *)initWithImageRef:(struct CGImage *)arg0 andRect:(struct CGRect)arg1 andMask:(struct CGSize)arg2;
- (BLImagePatch *)initWithImageRef:(struct CGImage *)arg0 andRect:(struct CGRect)arg1;
- (void)translateOriginByPoint:(struct CGPoint)arg0;

@end
