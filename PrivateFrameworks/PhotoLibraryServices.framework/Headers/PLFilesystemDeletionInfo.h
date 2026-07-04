/* Runtime dump - PLFilesystemDeletionInfo
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFilesystemDeletionInfo : NSObject
{
    NSString * _directory;
    NSString * _filename;
    NSURL * _objectIDURI;
    NSArray * _fileURLs;
    unsigned int _thumbnailIndex;
    NSString * _thumbnailIdentifier;
    NSString * _uuid;
    unsigned long long _timestamp;
}

@property (readonly, retain) NSURL * objectIDURI;
@property (retain) NSArray * fileURLs;
@property (readonly) unsigned int thumbnailIndex;
@property (retain) NSString * thumbnailIdentifier;
@property (readonly, retain) NSString * uuid;
@property (readonly) unsigned long long timestamp;
@property (readonly, retain) NSString * directory;
@property (readonly, retain) NSString * filename;

+ (NSSet *)deletionInfoWithAsset:(NSSet *)arg0;

- (void)dealloc;
- (NSString *)description;
- (unsigned long long)timestamp;
- (NSString *)uuid;
- (NSString *)filename;
- (NSString *)directory;
- (NSString *)thumbnailIdentifier;
- (unsigned int)thumbnailIndex;
- (PLFilesystemDeletionInfo *)initWithObjectIDURI:(NSURL *)arg0 directory:(NSString *)arg1 filename:(NSString *)arg2 fileURLs:(NSArray *)arg3 thumbnailIndex:(unsigned int)arg4 thumbnailIdentifier:(NSString *)arg5 uuid:(NSString *)arg6 timestamp:(unsigned long long)arg7;
- (NSURL *)objectIDURI;
- (NSArray *)fileURLs;
- (void)setFileURLs:(NSArray *)arg0;
- (void)setThumbnailIdentifier:(NSString *)arg0;

@end
