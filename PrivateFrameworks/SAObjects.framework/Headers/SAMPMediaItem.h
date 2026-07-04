/* Runtime dump - SAMPMediaItem
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPMediaItem : SAMPMediaEntity

@property (copy, nonatomic) NSString * album;
@property (copy, nonatomic) NSString * artist;
@property (retain, nonatomic) SACalendar * dateAdded;
@property (retain, nonatomic) SACalendar * datePurchased;
@property (copy, nonatomic) NSString * genre;
@property (retain, nonatomic) SAMPPlaybackInfo * playbackInfo;
@property (retain, nonatomic) SAMPReleaseInfo * releaseInfo;
@property (copy, nonatomic) NSString * sortAlbum;
@property (copy, nonatomic) NSString * sortArtist;

+ (MPMediaItem *)mediaItem;
+ (NSDictionary *)mediaItemWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setReleaseInfo:(SAMPReleaseInfo *)arg0;
- (SAMPReleaseInfo *)releaseInfo;
- (void)setArtist:(NSString *)arg0;
- (NSString *)artist;
- (void)setGenre:(NSString *)arg0;
- (void)setPlaybackInfo:(SAMPPlaybackInfo *)arg0;
- (NSString *)genre;
- (SAMPPlaybackInfo *)playbackInfo;
- (void)setAlbum:(NSString *)arg0;
- (NSString *)album;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)sortArtist;
- (void)setSortArtist:(NSString *)arg0;
- (SACalendar *)dateAdded;
- (void)setDateAdded:(SACalendar *)arg0;
- (void)setDatePurchased:(SACalendar *)arg0;
- (NSString *)sortAlbum;
- (void)setSortAlbum:(NSString *)arg0;
- (SACalendar *)datePurchased;

@end
