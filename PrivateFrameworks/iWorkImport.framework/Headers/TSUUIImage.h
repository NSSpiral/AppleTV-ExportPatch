/* Runtime dump - TSUUIImage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUUIImage : TSUImage
{
    UIImage * mUIImage;
    TSUUIImageAutoreleasePoolGuard * mGuard;
}

+ (void)i_performBlockWithUIImageLock:(id)arg0;
+ (TSUUIImage *)imageNamed:(NSString *)arg0;

- (UIImage *)p_initWithUIImage:(UIImage *)arg0 needsGuard:(char)arg1;
- (void)dealloc;
- (struct CGSize)size;
- (float)scale;
- (TSUUIImage *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGImage *)CGImage;
- (int)imageOrientation;
- (TSUUIImage *)initWithContentsOfFile:(NSString *)arg0;
- (UIImage *)UIImage;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg0;
- (TSUUIImage *)initWithUIImage:(UIImage *)arg0;

@end
