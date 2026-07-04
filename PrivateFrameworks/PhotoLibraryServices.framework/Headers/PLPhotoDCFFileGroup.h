/* Runtime dump - PLPhotoDCFFileGroup
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoDCFFileGroup : PLPhotoDCFObject
{
    id _delegate;
    PLPhotoDCFDirectory * _directory;
    NSString * _directoryPath;
    NSString * _prebakedThumbnailPath;
    NSString * _videoFileExtension;
    NSMutableSet * _extensions;
    NSDate * _date;
    NSString * _preferredExtension;
    unsigned int _hash;
    id _hashComputed;
    id _addedExtensions;
    id _writeIsPending;
}

+ (PLPhotoDCFFileGroup *)allMetadataFileExtensions;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSObject *)delegate;
- (int)compare:(NSObject *)arg0;
- (char)isValid;
- (NSDate *)date;
- (void)setDate:(NSDate *)arg0;
- (char)hasThumbnail;
- (NSString *)pathForVideoPreviewFile;
- (UIImage *)pathForFullSizeImage;
- (NSString *)pathForVideoFile;
- (PLPhotoDCFDirectory *)directory;
- (NSString *)pathForPrebakedWildcatThumbnailsFile;
- (NSString *)pathForTrimmedVideoFile;
- (NSString *)pathForPrebakedLandscapeScrubberThumbnails;
- (NSString *)pathForPrebakedPortraitScrubberThumbnails;
- (PLPhotoDCFFileGroup *)initWithName:(NSString *)arg0 number:(int)arg1 directory:(PLPhotoDCFDirectory *)arg2;
- (void)addExtension:(NSExtension *)arg0;
- (void)deleteFiles;
- (void)setWriteIsPending:(char)arg0;
- (NSDictionary *)pathForMetadata;
- (NSString *)prebakedThumbnailFilename;
- (id)pathForGroupWithoutExtension;
- (char)hasVideoFile;
- (void)addExtensionsFromMetadataDirectory;
- (NSString *)thumbnailFilename;
- (NSString *)prebakedLandscapeScrubberThumbnailsFilename;
- (NSString *)prebakedPortraitScrubberThumbnailsFilename;
- (NSString *)prebakedWildcatThumbnailsFilename;
- (NSString *)lowResolutionFilename;
- (NSString *)videoPreviewFilename;
- (id)imageSourceTypeHint;
- (void)deleteObsoleteFiles;
- (char)hasObsoleteFiles;
- (char)isValidImage;
- (void)forceAddExtensionsFromMetadataDirectory;
- (NSMutableSet *)extensions;
- (id)pathForContainingDirectory;
- (NSString *)pathForMetadataWithGroupName;
- (void)createMetadataDirectoryIfNecessary;
- (NSString *)pathForThumbnailFile;
- (UIImage *)pathForPrebakedThumbnail;
- (NSString *)pathForLowResolutionFile;
- (char)hasPrebakedThumbnail;
- (char)hasPrebakedLandscapeScrubberThumbnails;
- (char)hasPrebakedPortraitScrubberThumbnails;
- (char)hasPrebakedWildcatThumbnails;
- (char)isWritePending;

@end
