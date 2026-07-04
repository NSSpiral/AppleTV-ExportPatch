/* Runtime dump - ICCameraFileProperties
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICCameraFileProperties : NSObject
{
    long long _fileSize;
    char _hasThumbnail;
    char _hasMetadata;
    char _raw;
    int _fetchingThumbnailLock;
    char _fetchingThumbnail;
    int _fetchingMetadataLock;
    char _fetchingMetadata;
    struct CGImage * _originalThumbnail;
    struct CGImage * _thumbnail;
    NSMutableDictionary * _metadata;
    NSMutableDictionary * _metadata_hidden;
    unsigned int _orientation;
    char _hasOverriddenOrientation;
    double _duration;
    NSString * _burstUUID;
    char _burstFavorite;
    char _burstPicked;
    char _highFramerate;
    char _timeLapse;
    NSMutableArray * _sidecarFiles;
}

@property long long fileSize;
@property char hasThumbnail;
@property char hasMetadata;
@property char raw;
@property char fetchingThumbnail;
@property char fetchingMetadata;
@property struct CGImage * originalThumbnail;
@property struct CGImage * thumbnail;
@property (retain) NSMutableDictionary * metadata;
@property (retain) NSMutableDictionary * metadata_hidden;
@property unsigned int orientation;
@property char hasOverriddenOrientation;
@property double duration;
@property (retain) NSMutableArray * sidecarFiles;
@property (retain) NSString * burstUUID;
@property char burstFavorite;
@property char burstPicked;
@property char highFramerate;
@property char timeLapse;

- (void)dealloc;
- (double)duration;
- (void)setDuration:(double)arg0;
- (unsigned int)orientation;
- (char)hasMetadata;
- (void)setOrientation:(unsigned int)arg0;
- (struct CGImage *)thumbnail;
- (void)setThumbnail:(struct CGImage *)arg0;
- (void)setHasThumbnail:(char)arg0;
- (char)hasThumbnail;
- (void)setFetchingThumbnail:(char)arg0;
- (void)setFetchingMetadata:(char)arg0;
- (void)setOriginalThumbnail:(struct CGImage *)arg0;
- (void)setMetadata_hidden:(NSMutableDictionary *)arg0;
- (struct CGImage *)originalThumbnail;
- (char)fetchingThumbnail;
- (char)fetchingMetadata;
- (void)setHasMetadata:(char)arg0;
- (void)setRaw:(char)arg0;
- (NSMutableDictionary *)metadata_hidden;
- (char)hasOverriddenOrientation;
- (void)setHasOverriddenOrientation:(char)arg0;
- (void)setSidecarFiles:(NSMutableArray *)arg0;
- (NSString *)burstUUID;
- (void)setBurstUUID:(NSString *)arg0;
- (char)burstPicked;
- (void)setBurstPicked:(char)arg0;
- (char)burstFavorite;
- (void)setBurstFavorite:(char)arg0;
- (char)highFramerate;
- (void)setHighFramerate:(char)arg0;
- (char)timeLapse;
- (void)setTimeLapse:(char)arg0;
- (char)isRaw;
- (void)setMetadata:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)metadata;
- (long long)fileSize;
- (NSMutableArray *)sidecarFiles;
- (void)setFileSize:(long long)arg0;
- (void)finalize;

@end
