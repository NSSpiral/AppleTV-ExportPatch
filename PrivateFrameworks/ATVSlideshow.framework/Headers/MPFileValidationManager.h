/* Runtime dump - MPFileValidationManager
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MPFileValidationManager : NSObject

+ (void)releaseSharedManager;
+ (MPFileValidationManager *)sharedManager;

- (char)validateFiles:(id)arg0 allowAudio:(char)arg1 allowImages:(char)arg2 allowMovies:(char)arg3 extensionsOnly:(char)arg4;
- (void)checkFileExtension:(id)arg0 isAudio:(char *)arg1 isImage:(char *)arg2 isVideo:(char *)arg3;
- (char)validateFilesForAudio:(id)arg0 extensionsOnly:(char)arg1;
- (char)validateFilesForImages:(id)arg0 extensionsOnly:(char)arg1;
- (char)validateFilesForMovies:(id)arg0 extensionsOnly:(char)arg1;
- (NSString *)resolveAliasPath:(NSString *)arg0;

@end
