/* Runtime dump - RadioTrack
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioTrack : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _bestOfferDictionary;
    NSMutableDictionary * _trackDictionary;
    char _isPreorderAlbum;
    NSDate * _expirationDate;
}

@property (readonly, copy, nonatomic) NSData * adData;
@property (readonly, nonatomic) RadioTrackAdInfo * adInfo;
@property (readonly, nonatomic) RadioAudioClip * afterPromoAudioClip;
@property (readonly, copy, nonatomic) NSString * album;
@property (readonly, copy, nonatomic) NSString * albumBuyButtonText;
@property (readonly, nonatomic) int albumBuyButtonType;
@property (readonly, nonatomic) long long albumID;
@property (readonly, copy, nonatomic) NSURL * albumURL;
@property (readonly, copy, nonatomic) NSString * artist;
@property (readonly, nonatomic) RadioArtworkCollection * artworkCollection;
@property (readonly, copy, nonatomic) NSArray * assets;
@property (readonly, nonatomic) RadioAudioClip * beforePromoAudioClip;
@property (readonly, copy, nonatomic) NSString * copyrightText;
@property (readonly, nonatomic) long long dateFetched;
@property (readonly, copy, nonatomic) NSString * debugMessage;
@property (readonly, nonatomic) double duration;
@property (retain, nonatomic) NSDate * expirationDate;
@property (readonly, copy, nonatomic) NSDictionary * feedbackDictionaryRepresentation;
@property (readonly, nonatomic) char isExplicit;
@property (readonly, nonatomic) char isPreorderAlbum;
@property (nonatomic) char inWishList;
@property (readonly, nonatomic) int likeStatus;
@property (readonly, copy, nonatomic) NSArray * offers;
@property (readonly, copy, nonatomic) NSURL * previewURL;
@property (readonly, nonatomic) long long shuffleSeed;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) long long storeID;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSDictionary * trackInfo;
@property (copy, nonatomic) NSDictionary * metadataDictionary;
@property (readonly, copy, nonatomic) NSDictionary * trackDictionary;

+ (char)supportsSecureCoding;

- (NSString *)copyrightText;
- (NSArray *)offers;
- (long long)storeID;
- (NSURL *)previewURL;
- (RadioTrack *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (RadioTrack *)init;
- (NSString *)description;
- (double)duration;
- (NSString *)title;
- (void).cxx_destruct;
- (double)startTime;
- (void)setExpirationDate:(NSDate *)arg0;
- (NSString *)artist;
- (NSArray *)assets;
- (void)_performTransactionAndWait:(id)arg0;
- (NSString *)album;
- (NSDate *)expirationDate;
- (long long)albumID;
- (RadioArtworkCollection *)artworkCollection;
- (void)setMetadataDictionary:(NSDictionary *)arg0;
- (NSData *)adData;
- (char)isExplicit;
- (NSDictionary *)feedbackDictionaryRepresentation;
- (RadioTrack *)initWithTrackDictionary:(NSDictionary *)arg0;
- (NSDictionary *)trackDictionary;
- (NSObject *)_valueOfClass:(Class)arg0 forMetadataKey:(NSString *)arg1 fallbackTrackDictionaryKey:(NSString *)arg2;
- (NSString *)_valueRespondingToSelector:(SEL)arg0 forMetadataKey:(NSString *)arg1 fallbackTrackDictionaryKey:(NSString *)arg2;
- (NSObject *)_valueOfClass:(Class)arg0 forAssetInfoKey:(NSString *)arg1;
- (void)_performWriteTransaction:(NSObject *)arg0;
- (RadioTrackAdInfo *)adInfo;
- (RadioAudioClip *)afterPromoAudioClip;
- (NSString *)albumBuyButtonText;
- (int)albumBuyButtonType;
- (NSURL *)albumURL;
- (RadioAudioClip *)beforePromoAudioClip;
- (long long)dateFetched;
- (NSString *)debugMessage;
- (char)inWishList;
- (int)likeStatus;
- (NSDictionary *)metadataDictionary;
- (void)setInWishList:(char)arg0;
- (long long)shuffleSeed;
- (void)_performTransaction:(NSObject *)arg0;
- (void)_performWriteTransactionAndWait:(id)arg0;
- (char)isPreorderAlbum;
- (NSArray *)_offers;
- (NSDictionary *)trackInfo;

@end
