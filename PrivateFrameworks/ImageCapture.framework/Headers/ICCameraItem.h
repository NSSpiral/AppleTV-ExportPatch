/* Runtime dump - ICCameraItem
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraItem : NSObject
{
    void * _itemProperties;
}

@property (readonly) ICCameraDevice * device;
@property (readonly) ICCameraFolder * parentFolder;
@property (readonly) NSString * name;
@property (readonly) NSString * UTI;
@property char locked;
@property (readonly) NSDate * creationDate;
@property (readonly) NSDate * modificationDate;
@property (readonly) struct CGImage * thumbnail;
@property (readonly) NSDictionary * metadata;
@property (readonly) NSMutableDictionary * userData;
@property (readonly) char hasThumbnail;
@property (readonly) char hasMetadata;
@property (readonly) NSString * fileSystemPath;

- (char)isCameraFile;
- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (char)isLocked;
- (void)setLocked:(char)arg0;
- (NSDate *)modificationDate;
- (char)hasMetadata;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (NSMutableDictionary *)userData;
- (struct CGImage *)thumbnail;
- (NSString *)UTI;
- (void)setUTI:(NSSet *)arg0;
- (char)hasThumbnail;
- (NSDate *)creationDate;
- (ICCameraItem *)initWithName:(NSString *)arg0 parentFolder:(ICCameraFolder *)arg1 device:(ICCameraDevice *)arg2;
- (void)appendToPath:(NSString *)arg0;
- (NSString *)fileSystemPath;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (void)setModificationDate:(NSDate *)arg0;
- (NSDictionary *)metadata;
- (ICCameraFolder *)parentFolder;
- (void)setCreationDate:(NSDate *)arg0;
- (ICCameraDevice *)device;
- (void)finalize;

@end
