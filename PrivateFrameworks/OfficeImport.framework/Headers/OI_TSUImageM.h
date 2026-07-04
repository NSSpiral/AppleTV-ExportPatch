/* Runtime dump - OI_TSUImageM
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OI_TSUImageM : OITSUImage

+ (OI_TSUImageM *)init;
+ (OI_TSUImageM *)allocWithZone:(struct _NSZone *)arg0;
+ (OI_TSUImageM *)initWithCGImage:(struct CGImage *)arg0 scale:(float)arg1 orientation:(int)arg2;
+ (OI_TSUImageM *)initWithContentsOfFile:(NSString *)arg0;
+ (OI_TSUImageM *)initWithData:(NSData *)arg0;
+ (OI_TSUImageM *)initWithCGImage:(struct CGImage *)arg0;
+ (OI_TSUImageM *)initWithImageSourceRef:(struct CGImageSource *)arg0;

@end
