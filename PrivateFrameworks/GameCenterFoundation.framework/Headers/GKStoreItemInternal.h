/* Runtime dump - GKStoreItemInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKStoreItemInternal : GKInternalRepresentation
{
    NSNumber * _adamID;
    NSString * _artistName;
    NSString * _priceDisplay;
    NSURL * _viewItemURL;
    NSURL * _shortViewItemURL;
    NSURL * _tellAFriendMessageContentsUrl;
    NSDate * _expirationDate;
    unsigned int _numberOfUserRatings;
    float _averageUserRating;
    char _owned;
}

@property (retain, nonatomic) NSNumber * adamID;
@property (retain, nonatomic) NSString * artistName;
@property (retain, nonatomic) NSString * priceDisplay;
@property (retain, nonatomic) NSURL * viewItemURL;
@property (retain, nonatomic) NSURL * shortViewItemURL;
@property (retain, nonatomic) NSURL * tellAFriendMessageContentsUrl;
@property (retain, nonatomic) NSDate * expirationDate;
@property (nonatomic) unsigned int numberOfUserRatings;
@property (nonatomic) float averageUserRating;
@property (nonatomic) char owned;

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (char)isValid;
- (void)setExpirationDate:(NSDate *)arg0;
- (void)setAdamID:(NSNumber *)arg0;
- (NSURL *)storeItemURLForURL:(NSURL *)arg0 gamePlatform:(unsigned char)arg1 extraQueryParams:(id)arg2;
- (void)storeItemURLForGamePlatform:(unsigned char)arg0 withContext:(NSObject *)arg1 withHandler:(id /* block */)arg2;
- (void)setAverageUserRating:(float)arg0;
- (void)setViewItemURL:(NSURL *)arg0;
- (NSURL *)shortViewItemURL;
- (void)setShortViewItemURL:(NSURL *)arg0;
- (NSURL *)tellAFriendMessageContentsUrl;
- (void)setTellAFriendMessageContentsUrl:(NSURL *)arg0;
- (void)setNumberOfUserRatings:(unsigned int)arg0;
- (char)owned;
- (void)setOwned:(char)arg0;
- (NSString *)artistName;
- (void)setArtistName:(NSString *)arg0;
- (NSDate *)expirationDate;
- (NSString *)priceDisplay;
- (float)averageUserRating;
- (unsigned int)numberOfUserRatings;
- (NSURL *)viewItemURL;
- (void)setPriceDisplay:(NSString *)arg0;
- (NSNumber *)adamID;

@end
