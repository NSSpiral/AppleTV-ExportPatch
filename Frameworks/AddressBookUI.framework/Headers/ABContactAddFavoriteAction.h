/* Runtime dump - ABContactAddFavoriteAction
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactAddFavoriteAction : ABPropertyAction <ABPropertyBestIDSValueQueryDelegate>
{
    char _allowPhoneFavorites;
    char _allowFaceTimeFavorites;
    char _allowFaceTimeAudioFavorites;
    char _hasFaceTimeFavorite;
    char _hasFaceTimeAudioFavorite;
    ABPropertyBestIDSValueQuery * _bestFaceTimeQuery;
    NSArray * _filteredPhoneItems;
}

@property (nonatomic) char allowPhoneFavorites;
@property (nonatomic) char allowFaceTimeFavorites;
@property (nonatomic) char allowFaceTimeAudioFavorites;
@property (retain, nonatomic) ABPropertyBestIDSValueQuery * bestFaceTimeQuery;
@property (retain, nonatomic) NSArray * filteredPhoneItems;
@property (nonatomic) char hasFaceTimeFavorite;
@property (nonatomic) char hasFaceTimeAudioFavorite;

- (void)performActionWithSender:(NSObject *)arg0;
- (ABContactAddFavoriteAction *)initWithContact:(CNContact *)arg0 propertyItems:(NSArray *)arg1;
- (void)_queryFaceTimeStatus;
- (void)_filterFavoritedItems;
- (NSArray *)filteredPhoneItems;
- (char)allowFaceTimeFavorites;
- (char)hasFaceTimeFavorite;
- (ABPropertyBestIDSValueQuery *)bestFaceTimeQuery;
- (char)allowFaceTimeAudioFavorites;
- (char)hasFaceTimeAudioFavorite;
- (char)allowPhoneFavorites;
- (void)_saveFavorite:(id)arg0 withType:(int)arg1;
- (void)setHasFaceTimeFavorite:(char)arg0;
- (void)setHasFaceTimeAudioFavorite:(char)arg0;
- (void)setFilteredPhoneItems:(NSArray *)arg0;
- (void)setBestFaceTimeQuery:(ABPropertyBestIDSValueQuery *)arg0;
- (void)queryComplete;
- (char)canPerformAction;
- (void)setAllowPhoneFavorites:(char)arg0;
- (void)setAllowFaceTimeFavorites:(char)arg0;
- (void)setAllowFaceTimeAudioFavorites:(char)arg0;
- (void)dealloc;

@end
