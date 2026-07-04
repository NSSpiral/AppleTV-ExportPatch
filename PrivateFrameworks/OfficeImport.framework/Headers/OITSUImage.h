/* Runtime dump - OITSUImage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUImage : NSObject
{
    struct CGImage * mCachedSliceableImage;
    struct __CFDictionary * mImageSlices;
    long mImageSliceCacheLock;
    id mCachedSystemImage;
    long mCachedImageLock;
}

@property (readonly, nonatomic) UIImage * UIImage;
@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) struct CGImage * CGImage;
@property (readonly, nonatomic) int imageOrientation;
@property (readonly, nonatomic) float scale;

+ (OITSUImage *)allocWithZone:(struct _NSZone *)arg0;
+ (UIImage *)imageWithCGImage:(struct CGImage *)arg0 scale:(float)arg1 orientation:(int)arg2;
+ (UIImage *)imageWithCGImage:(struct CGImage *)arg0;
+ (OITSUImage *)imageNamed:(NSString *)arg0;
+ (NSString *)imageWithContentsOfFile:(NSString *)arg0;
+ (NSData *)imageWithData:(NSData *)arg0;
+ (UIImage *)imageWithUIImage:(UIImage *)arg0;
+ (OITSUImage *)noisePatternWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 factor:(float)arg2;

- (NSDictionary *)TIFFRepresentation;
- (void)dealloc;
- (struct CGSize)size;
- (OITSUImage *)init;
- (float)scale;
- (OITSUImage *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (struct CGImage *)CGImage;
- (int)imageOrientation;
- (OITSUImage *)initWithCGImage:(struct CGImage *)arg0 scale:(float)arg1 orientation:(int)arg2;
- (OITSUImage *)initWithContentsOfFile:(NSString *)arg0;
- (OITSUImage *)initWithData:(NSData *)arg0;
- (OITSUImage *)initWithCGImage:(struct CGImage *)arg0;
- (UIImage *)UIImage;
- (OITSUImage *)initWithImageSourceRef:(struct CGImageSource *)arg0;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg0;
- (OITSUImage *)initWithUIImage:(UIImage *)arg0;
- (struct CGImage *)CGImageForContentsScale:(float)arg0;
- (id)imagePartsWithLeftCapWidth:(float)arg0 rightCapWidth:(float)arg1 topCapHeight:(float)arg2 bottomCapHeight:(float)arg3;
- (id)JPEGRepresentationWithCompressionQuality:(float)arg0;
- (NSDictionary *)PNGRepresentation;
- (NSObject *)stretchedImageOfSize:(struct CGSize)arg0 leftCapWidth:(float)arg1 rightCapWidth:(float)arg2 topCapHeight:(float)arg3 bottomCapHeight:(float)arg4;
- (void)drawInRect:(struct CGRect)arg0 context:(struct CGSize)arg1 stretchingCenterWidthBy:(id)arg2;
- (void)drawInRect:(struct CGRect)arg0 fromRect:(struct CGSize)arg1 isFlipped:(char)arg2;

@end
