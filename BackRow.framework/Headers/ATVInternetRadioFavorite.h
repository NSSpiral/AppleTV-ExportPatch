/* Runtime dump - ATVInternetRadioFavorite
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFavorite.h>

@class WLKGenre;
@interface ATVInternetRadioFavorite : ATVFavorite
{
    NSString * _stationID;
    NSString * _collectionTitle;
}

+ (void)_stationFoundInCategory:(NSString *)arg0;
+ (NSSet *)favoriteFromAsset:(NSSet *)arg0;
+ (NSObject *)favoriteFromMediaItem:(NSObject *)arg0;
+ (void)initialize;

- (char)isPlayingOrPaused;
- (void)encodeWithDictionary:(NSDictionary *)arg0;
- (NSObject *)_initWithMediaItem:(NSObject *)arg0;
- (void)_setItemIdForTitle:(NSString *)arg0 genre:(WLKGenre *)arg1;
- (NSString *)stationID;
- (NSString *)description;
- (ATVInternetRadioFavorite *)initWithDictionary:(NSDictionary *)arg0;
- (void)setCategory:(NSString *)arg0;
- (NSString *)category;
- (void).cxx_destruct;
- (void)setStationID:(NSString *)arg0;

@end
