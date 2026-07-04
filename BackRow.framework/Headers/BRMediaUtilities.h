/* Runtime dump - BRMediaUtilities
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRMediaUtilities : NSObject

+ (char)isHomeShareRental:(id)arg0;
+ (char)isStoreRental:(id)arg0;
+ (char)isTrilogyMediaItem:(NSObject *)arg0;
+ (char)isSagaMediaItem:(NSObject *)arg0;
+ (char)isVodka2MediaItem:(NSObject *)arg0;
+ (char)isSagaMediaAsset:(NSSet *)arg0;
+ (char)isVodka2Asset:(NSSet *)arg0;
+ (char)isiTunesMediaItem:(NSObject *)arg0;
+ (NSArray *)mediaAssetsFromMediaItems:(NSArray *)arg0;
+ (int)watchedStateForMediaType:(NSObject *)arg0 duration:(double)arg1 bookmarkInSeconds:(double)arg2 hasBeenPlayed:(char)arg3 playCount:(long)arg4;
+ (double)playedThresholdForMediaType:(NSObject *)arg0 duration:(double)arg1;
+ (NSSet *)mediaTypeForATVDataAsset:(NSSet *)arg0;
+ (char)isTrilogyMediaAsset:(NSSet *)arg0;
+ (char)isAirPlayAsset:(NSSet *)arg0;
+ (char)isiTunesAsset:(NSSet *)arg0;
+ (char)isTiltMediaAsset:(NSSet *)arg0;
+ (int)watchedStateForMediaItem:(NSObject *)arg0;
+ (char)isVodka2AudioAsset:(NSSet *)arg0;
+ (BRMediaUtilities *)defaultImageForATVDataAsset:(NSSet *)arg0 imageSize:(int)arg1;
+ (NSObject *)mediaTypeForATVDataType:(NSObject *)arg0;
+ (float)soundCheckValueForMediaItem:(NSObject *)arg0;
+ (char)isAssetValidForPlayback:(id)arg0 withPlayer:(ATVPlayer *)arg1;
+ (NSObject *)loudnessInfoMediaKindForMediaType:(NSObject *)arg0;
+ (float)soundCheckValueForMediaAsset:(NSSet *)arg0;
+ (char)isCupidMediaAsset:(NSSet *)arg0;
+ (char)isAssetValidForPlayback:(id)arg0;

@end
