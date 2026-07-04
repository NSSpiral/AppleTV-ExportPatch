/* Runtime dump - BRMediaAccessUtilities
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRMediaAccessUtilities : NSObject

+ (BRMediaAccessUtilities *)highestResolutionAssetInCollection:(id)arg0;
+ (NSPredicate *)allowedMusicMediaTypesPredicate;
+ (NSArray *)oldestUnwatchedAssetInArray:(NSArray *)arg0;
+ (NSArray *)uniqueAlbumsForTracks:(NSArray *)arg0;
+ (BRMediaAccessUtilities *)oldestUnwatchedAssetInCollection:(id)arg0;

@end
