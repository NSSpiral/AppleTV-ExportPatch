/* Runtime dump - TSUUIImage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUUIImage : OITSUImage
{
    UIImage * mUIImage;
}

+ (TSUUIImage *)imageNamed:(NSString *)arg0;

- (void)dealloc;
- (struct CGSize)size;
- (float)scale;
- (TSUUIImage *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGImage *)CGImage;
- (int)imageOrientation;
- (TSUUIImage *)initWithContentsOfFile:(NSString *)arg0;
- (TSUUIImage *)initWithData:(NSData *)arg0;
- (UIImage *)UIImage;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg0;
- (TSUUIImage *)initWithUIImage:(UIImage *)arg0;

@end
