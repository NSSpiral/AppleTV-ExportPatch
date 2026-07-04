/* Runtime dump - ICCameraFile
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraFile : ICCameraItem
{
    void * _fileProperties;
}

@property char raw;
@property long long fileSize;
@property unsigned int orientation;
@property (readonly) NSString * burstUUID;
@property (readonly) char burstFavorite;
@property (readonly) char burstPicked;
@property (readonly) char highFramerate;
@property (readonly) char timeLapse;
@property char fetchingThumbnail;
@property char fetchingMetadata;
@property (readonly) char hasOverriddenOrientation;
@property (retain) NSMutableDictionary * metadata_hidden;

- (NSString *)importIdentifier;
- (NSString *)parentFolderName;
- (NSString *)fileExtension;
- (void)dealloc;
- (NSString *)description;
- (double)duration;
- (unsigned int)orientation;
- (char)hasMetadata;
- (void)setOrientation:(unsigned int)arg0;
- (struct CGImage *)thumbnail;
- (void)setHasThumbnail:(char)arg0;
- (char)hasThumbnail;
- (void)handleCommandCompletionNotification:(NSNotification *)arg0;
- (void)setFetchingThumbnail:(char)arg0;
- (void)setFetchingMetadata:(char)arg0;
- (void)setMetadata_hidden:(NSMutableDictionary *)arg0;
- (char)fetchingThumbnail;
- (char)fetchingMetadata;
- (void)setHasMetadata:(char)arg0;
- (void)setRaw:(char)arg0;
- (NSMutableDictionary *)metadata_hidden;
- (char)hasOverriddenOrientation;
- (NSString *)burstUUID;
- (char)burstPicked;
- (char)burstFavorite;
- (char)highFramerate;
- (char)timeLapse;
- (ICCameraFile *)initWithName:(NSString *)arg0 parentFolder:(ICCameraFolder *)arg1 device:(ICCameraDevice *)arg2;
- (void)setKeywordPropertiesFromMetadata;
- (void)overrideOrientation:(unsigned int)arg0;
- (void)requestMetadata;
- (void)requestThumbnail;
- (void)flushMetadataCache;
- (void)flushThumbnailCache;
- (char)isRaw;
- (NSDictionary *)metadata;
- (long long)fileSize;
- (void)setFileSize:(long long)arg0;
- (void)finalize;

@end
