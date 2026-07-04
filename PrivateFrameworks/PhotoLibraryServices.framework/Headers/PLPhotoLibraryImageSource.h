/* Runtime dump - PLPhotoLibraryImageSource
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryImageSource : PLImageSource
{
    int _imageFormat;
}

@property (readonly, nonatomic) int imageFormat;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)imageFormat;
- (NSSet *)newImageForAsset:(NSSet *)arg0 createMetadata:(id *)arg1;
- (unsigned short)sourceIdentifier;
- (PLPhotoLibraryImageSource *)initWithImageFormat:(int)arg0;

@end
