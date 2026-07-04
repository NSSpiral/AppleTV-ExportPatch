/* Runtime dump - PLAssetSharingUtilities
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetSharingUtilities : NSObject

+ (struct CGImage *)_thumbnailForAssetURL:(NSURL *)arg0 useAspect:(char)arg1;
+ (double)_durationForVideoAssetURL:(NSURL *)arg0;
+ (double)_durationForVideoFilePath:(NSString *)arg0;
+ (long long)_estimatedOutputFileLengthForDuration:(double)arg0 exportPreset:(NSSet *)arg1 exportProperties:(NSDictionary *)arg2;
+ (NSString *)exportSessionForVideoFilePath:(NSString *)arg0 metadata:(NSDictionary *)arg1 exportPreset:(NSSet *)arg2;
+ (NSString *)_objectBuilderFromVideoFilePath:(NSString *)arg0 metadata:(NSDictionary *)arg1;
+ (NSURL *)_playerItemForVideoAssetURL:(NSURL *)arg0;
+ (NSString *)playerItemForVideoFilePath:(NSString *)arg0 metadata:(NSDictionary *)arg1;
+ (struct CGImage *)thumbnailForAssetURL:(NSURL *)arg0;
+ (struct CGImage *)aspectRatioThumbnailForAssetURL:(NSURL *)arg0;
+ (NSURL *)filePathForVideoURL:(NSURL *)arg0 outMetadata:(id *)arg1;
+ (long long)estimatedOutputFileLengthForVideoURL:(NSURL *)arg0 fallbackFilePath:(NSString *)arg1 exportPreset:(NSSet *)arg2 exportProperties:(NSDictionary *)arg3;
+ (long long)estimatedOutputFileLengthForVideoFilePath:(NSString *)arg0 metadata:(NSDictionary *)arg1 exportPreset:(NSSet *)arg2 exportProperties:(NSDictionary *)arg3;
+ (NSURL *)exportSessionForVideoURL:(NSURL *)arg0 fallbackFilePath:(NSString *)arg1 exportPreset:(NSSet *)arg2;
+ (NSURL *)playerItemForVideoURL:(NSURL *)arg0 fallbackFilePath:(NSString *)arg1;
+ (NSURL *)assetForVideoURL:(NSURL *)arg0 metadata:(NSDictionary *)arg1 outAudioMix:(id *)arg2 outVideoComposition:(id *)arg3;

@end
