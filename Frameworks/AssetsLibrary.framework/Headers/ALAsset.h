/* Runtime dump - ALAsset
 * Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAsset : NSObject
{
    id _internal;
}

@property (readonly, nonatomic) ALAsset * originalAsset;
@property (readonly, nonatomic) char editable;
@property (retain, nonatomic) ALAssetPrivate * internal;

+ (struct CGSize)largePreviewImageSizeForSize:(struct CGSize)arg0;

- (ALAsset *)initWithManagedAsset:(char)arg0 library:(NSObject *)arg1;
- (NSString *)_typeAsString;
- (NSObject *)_createContentEditingOutputWithType:(int)arg0;
- (id)representationForUTI:(id)arg0;
- (struct CGImage *)aspectRatioThumbnail;
- (void)writeModifiedImageDataToSavedPhotosAlbum:(id)arg0 metadata:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
- (void)writeModifiedVideoAtPathToSavedPhotosAlbum:(id)arg0 completionBlock:(id /* block */)arg1;
- (void)setImageData:(NSData *)arg0 metadata:(NSDictionary *)arg1 completionBlock:(id /* block */)arg2;
- (void)setVideoAtPath:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)setLargePreviewImageWithImageData:(NSData *)arg0 completionBlock:(id /* block */)arg1;
- (void)requestDefaultRepresentation;
- (ALAssetPrivate *)internal;
- (void)dealloc;
- (NSString *)description;
- (char)isValid;
- (char)isEditable;
- (NSString *)_uuid;
- (struct CGImage *)thumbnail;
- (void *)valueForProperty:(NSString *)arg0;
- (NSDictionary *)defaultRepresentation;
- (void)setInternal:(ALAssetPrivate *)arg0;
- (ALAsset *)originalAsset;
- (void)setExternalUsageIntent:(unsigned int)arg0;
- (char)isDeletable;

@end
