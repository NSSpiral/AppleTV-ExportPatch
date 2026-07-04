/* Runtime dump - ATVServerUtilites
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVServerUtilites : NSObject

+ (NSSet *)nowPlayingAsset;
+ (NSSet *)radioDataItemForAsset:(NSSet *)arg0;
+ (NSObject *)transportDataProvider;
+ (NSObject *)bonjourServiceInfoForDataServer:(NSObject *)arg0;
+ (NSObject *)serverMediaTypeForBRMediaType:(NSObject *)arg0;
+ (NSObject *)jsonDataForObject:(NSObject *)arg0 debugStr:(NSString *)arg1;
+ (NSData *)objectForJsonData:(NSData *)arg0 debugStr:(NSString *)arg1;
+ (NSSet *)dataItemForAsset:(NSSet *)arg0;
+ (NSObject *)nowPlayingRadioDataItem;
+ (char)isNowPlayingAssetScrubbable;
+ (unsigned long)nowPlayingDuration;
+ (unsigned long)nowPlayingRemainingTime;
+ (unsigned long)playerVolume;
+ (NSDictionary *)nowPlayingDAAPSpecInfo;
+ (NSObject *)albumForMedia:(NSObject *)arg0;
+ (NSDictionary *)nowPlayingQueueInfo;
+ (NSSet *)mediaTypeForAsset:(NSSet *)arg0;
+ (NSObject *)mediaTypeForDataItem:(NSObject *)arg0;
+ (NSObject *)brMediaTypeForServerMediaType:(NSObject *)arg0;
+ (NSString *)applianceIdentifierFromAppIdentifier:(NSString *)arg0;
+ (NSObject *)applianceIdentifierFromMediaType:(NSObject *)arg0;
+ (NSObject *)purchasesCategoryIdentifierFromMediaType:(NSObject *)arg0;
+ (NSObject *)favoritesCategoryIdentifierFromMediaType:(NSObject *)arg0;

@end
