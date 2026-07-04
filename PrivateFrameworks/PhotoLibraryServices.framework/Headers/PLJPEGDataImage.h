/* Runtime dump - PLJPEGDataImage
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLJPEGDataImage : UIImage
{
    NSData * _plData;
    struct __CVBuffer * _pixelBuffer;
}

+ (NSData *)pl_imageWithStoredJPEGData:(NSData *)arg0;

- (void)dealloc;
- (NSData *)pl_imageJPEGData;

@end
