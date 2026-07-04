/* Runtime dump - ALAssetRepresentation
 * Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetRepresentation : NSObject
{
    id _internal;
    char _ignoreRead;
}

@property (retain, nonatomic) ALAssetRepresentationPrivate * internal;
@property char ignoreRead;

+ (void)_enableImageDataUsesMap;

- (ALAssetRepresentation *)initWithManagedAsset:(char)arg0 sidecar:(PLSidecarFile *)arg1 extension:(id *)arg2 library:(NSObject *)arg3;
- (char)ignoreRead;
- (NSData *)_imageData;
- (struct CGImage *)CGImageWithOptions:(NSDictionary *)arg0 format:(int)arg1 bakeInOrientation:(int)arg2;
- (struct CGImage *)CGImageWithOptions:(NSDictionary *)arg0;
- (struct CGImage *)_largeDisplayableImageForFormat:(int)arg0;
- (void)setIgnoreRead:(char)arg0;
- (struct CGImage *)zoomableDisplayImage;
- (ALAssetRepresentationPrivate *)internal;
- (void)dealloc;
- (long long)size;
- (NSString *)description;
- (NSURL *)url;
- (int)orientation;
- (float)scale;
- (char)isValid;
- (NSString *)UTI;
- (struct CGSize)dimensions;
- (struct CGImage *)fullResolutionImage;
- (unsigned int)getBytes:(char *)arg0 fromOffset:(long long)arg1 length:(unsigned int)arg2 error:(id *)arg3;
- (struct CGImage *)fullScreenImage;
- (NSString *)filename;
- (void)setInternal:(ALAssetRepresentationPrivate *)arg0;
- (int)_fileDescriptor;
- (NSDictionary *)metadata;

@end
