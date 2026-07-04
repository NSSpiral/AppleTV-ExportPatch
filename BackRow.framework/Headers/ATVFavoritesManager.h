/* Runtime dump - ATVFavoritesManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class ATVFavorite;
@interface ATVFavoritesManager : BRSingleton
{
    NSMutableArray * _favorites;
    NSTimer * _saveTimer;
}

+ (ATVFavoritesManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (char)favoriteExistsForItemID:(NSObject *)arg0;
- (void)saveFavorite:(id)arg0;
- (void)removeFavorite:(ATVFavorite *)arg0;
- (void)setNeedsSave;
- (void)updateFromKeyValueStore:(NSObject *)arg0;
- (NSObject *)orderedFavoritesForType:(int)arg0;
- (void)_loadFavorites;
- (void)_keyValueStoreIsAvailable:(id)arg0;
- (void)_keyValueStoreAccountDidSignOut:(id)arg0;
- (void)_musicStoreItemAcquired:(id)arg0;
- (void)_saveFavorites;
- (void)_saveTimerFired:(id)arg0;
- (void)removeFavorites:(id)arg0;
- (void)_removeFavorites:(id)arg0;
- (NSObject *)favoriteForItemID:(NSObject *)arg0;
- (void)_updateFromKeyValueStoreIfAvailable:(id)arg0;
- (void)saveFavorites;
- (NSMutableArray *)favorites;
- (void)_updateFromKeyValueStoreInternal:(id)arg0;
- (void)_updateFavoritesFromDictionaryRepresentations:(id)arg0;
- (NSObject *)favoritesForType:(int)arg0;
- (id)radioFavorites;
- (unsigned int)_nextUserOrderForType:(int)arg0;
- (int)_normalizeItemType:(int)arg0;
- (NSObject *)_orderedFavoritesForType:(int)arg0 orderedBy:(int)arg1;
- (void)sortModeChangedFrom:(int)arg0 to:(int)arg1;
- (void)dealloc;
- (ATVFavoritesManager *)init;
- (void).cxx_destruct;

@end
