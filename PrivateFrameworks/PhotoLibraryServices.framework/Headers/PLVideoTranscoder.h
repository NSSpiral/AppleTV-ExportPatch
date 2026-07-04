/* Runtime dump - PLVideoTranscoder
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLVideoTranscoder : NSObject

+ (NSURL *)generatePosterFrameForVideoAtURL:(NSURL *)arg0 maxSize:(struct CGSize)arg1 error:(id *)arg2;
+ (void)transcodeVideoWithObjectBuilder:(NSObject *)arg0 outputURL:(NSURL *)arg1 startTime:(struct ?)arg2 endTime:(struct ?)arg3 presetName:(NSString *)arg4 outputFileType:(NSString *)arg5 completionHandler:(id /* block */)arg6;
+ (void)transcodeVideo:(id)arg0 outputURL:(NSURL *)arg1 startTime:(struct ?)arg2 endTime:(struct ?)arg3 presetName:(NSString *)arg4 outputFileType:(NSString *)arg5 completionHandler:(id /* block */)arg6;
+ (NSSet *)generatePosterFrameForAVAsset:(NSSet *)arg0 maxSize:(struct CGSize)arg1 error:(id *)arg2;
+ (NSURL *)exportPresetsCompatibleWithVideoAtURL:(NSURL *)arg0;

@end
