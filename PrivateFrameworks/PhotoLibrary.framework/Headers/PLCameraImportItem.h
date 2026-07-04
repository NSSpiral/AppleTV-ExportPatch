/* Runtime dump - PLCameraImportItem
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraImportItem : NSObject
{
    NSString * _identifier;
    NSString * _parentFolder;
    NSString * _basePath;
    NSMutableDictionary * _representationsMapping;
    UIImage * _thumbnail;
    NSData * _thumbnailData;
    int _thumbnailState;
    char _metadataRequested;
    char _thumbnailRequested;
    char _shouldImport;
    NSError * _importError;
    NSString * eventName;
    PLManagedAsset * importedAsset;
}

@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSString * parentFolder;
@property (retain, nonatomic) NSString * basePath;
@property (retain, nonatomic) NSString * eventName;
@property (retain, nonatomic) PLManagedAsset * importedAsset;
@property (readonly, nonatomic) UIImage * thumbnail;
@property (retain, nonatomic) NSData * thumbnailData;
@property (nonatomic) char shouldImport;
@property (retain, nonatomic) NSError * importError;

- (void)dealloc;
- (NSString *)description;
- (NSString *)identifier;
- (char)isLocked;
- (UIImage *)thumbnail;
- (char)isMovie;
- (NSString *)basePath;
- (void)setBasePath:(NSString *)arg0;
- (NSDate *)creationDate;
- (NSString *)eventName;
- (void)setEventName:(NSString *)arg0;
- (PLCameraImportItem *)initWithIdentifier:(NSString *)arg0 parentFolder:(NSString *)arg1;
- (void)addRepresentationForCameraFile:(NSString *)arg0;
- (void)removeRepresentationForCameraFile:(NSString *)arg0;
- (NSArray *)representations;
- (void)requestMetadata;
- (NSString *)representationForCameraFile:(NSString *)arg0;
- (char)hasAllMetadata;
- (char)canRequestThumbnail;
- (int)thumbnailState;
- (void)setThumbnailState:(int)arg0;
- (void)requestThumbnail;
- (void)setThumbnailWithImageRef:(struct CGImage *)arg0;
- (char)shouldImport;
- (char)isOnDisk;
- (void)setShouldImport:(char)arg0;
- (void)setImportError:(NSError *)arg0;
- (char)isStandalonePhoto;
- (void)markRepresentationsInDatabase;
- (NSError *)importError;
- (char)isInDatabaseForce:(char)arg0;
- (void)_addRepresentation:(NSDictionary *)arg0;
- (void)_removeRepresentation:(NSDictionary *)arg0;
- (char)canRequestMetadata;
- (char)_isTypeWithSelector:(SEL)arg0;
- (id)fileExtensions;
- (char)isRaw;
- (NSString *)_fileExtensionForTypeWithSelector:(SEL)arg0;
- (id)metadataForRepresentationWithFileExtension:(NSString *)arg0;
- (void)clearMetadata;
- (void)cancelThumbnailRequest;
- (void)clearThumbnail;
- (char)isStandaloneMovie;
- (id)jpgExtension;
- (id)rawExtension;
- (id)movieExtension;
- (id)audioExtension;
- (id)otherExtensions;
- (NSData *)thumbnailData;
- (void)setThumbnailData:(NSData *)arg0;
- (PLManagedAsset *)importedAsset;
- (void)setImportedAsset:(PLManagedAsset *)arg0;
- (char)isJPEG;
- (unsigned long long)fileSize;
- (char)isAudio;
- (NSString *)parentFolder;

@end
