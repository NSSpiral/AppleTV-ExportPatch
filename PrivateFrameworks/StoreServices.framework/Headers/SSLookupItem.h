/* Runtime dump - SSLookupItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLookupItem : NSObject
{
    NSDictionary * _dictionary;
}

@property (readonly, nonatomic) NSDictionary * lookupDictionary;
@property (readonly, nonatomic) NSString * artistName;
@property (readonly, nonatomic) NSArray * artwork;
@property (readonly, nonatomic) NSString * bundleIdentifier;
@property (readonly, nonatomic) NSArray * categoryNames;
@property (readonly, nonatomic) NSString * displayName;
@property (readonly, nonatomic) NSString * itemKind;
@property (readonly, nonatomic) NSNumber * ITunesStoreIdentifier;
@property (readonly, nonatomic) NSArray * offers;
@property (readonly, nonatomic) char POIBased;
@property (readonly, nonatomic) NSURL * productPageURL;
@property (readonly, nonatomic) int numberOfUserRatings;
@property (readonly, nonatomic) float userRating;
@property (readonly, nonatomic) int numberOfUserRatingsForCurrentVersion;
@property (readonly, nonatomic) float userRatingForCurrentVersion;

- (char)ml_isMusicItemKind;
- (char)ml_isAUCItemKind;
- (char)ml_isAUCVideo;
- (char)ml_isAUCAudio;
- (NSArray *)offers;
- (void)dealloc;
- (NSString *)bundleIdentifier;
- (NSString *)displayName;
- (float)userRating;
- (NSString *)artistName;
- (NSNumber *)ITunesStoreIdentifier;
- (NSString *)itemKind;
- (NSDictionary *)lookupDictionary;
- (NSArray *)artwork;
- (SSLookupItem *)initWithLookupDictionary:(NSDictionary *)arg0;
- (int)numberOfUserRatings;
- (NSArray *)categoryNames;
- (char)isPOIBased;
- (int)numberOfUserRatingsForCurrentVersion;
- (NSURL *)productPageURL;
- (float)userRatingForCurrentVersion;

@end
