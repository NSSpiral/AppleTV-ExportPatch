/* Runtime dump - PLCameraImportItemRepresentation
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraImportItemRepresentation : NSObject
{
    ICCameraFile * _cameraFile;
    NSDictionary * _metadata;
    char _canRequestMetadata;
    char _canRequestThumbnail;
    NSString * _path;
    char _inDatabase;
}

@property (retain, nonatomic) ICCameraFile * cameraFile;
@property (retain, nonatomic) NSDictionary * metadata;
@property (nonatomic) char canRequestMetadata;
@property (nonatomic) char canRequestThumbnail;
@property (copy, nonatomic) NSString * path;
@property (nonatomic) char inDatabase;

- (void)dealloc;
- (NSString *)description;
- (NSString *)path;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (void)setPath:(NSString *)arg0;
- (char)isMovie;
- (void)setCanRequestMetadata:(char)arg0;
- (char)canRequestThumbnail;
- (void)setCanRequestThumbnail:(char)arg0;
- (ICCameraFile *)cameraFile;
- (char)isInDatabaseForce:(char)arg0;
- (PLCameraImportItemRepresentation *)initWithCameraFile:(ICCameraFile *)arg0;
- (char)canRequestMetadata;
- (void)setInDatabase:(char)arg0;
- (char)isRaw;
- (void)setCameraFile:(ICCameraFile *)arg0;
- (char)inDatabase;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (char)isJPEG;
- (char)isAudio;
- (NSString *)fileExtension;

@end
