/* Runtime dump - SSItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItem : NSObject <SSURLConnectionRequestDelegate>
{
    NSDate * _expirationDate;
    NSArray * _offers;
    NSDictionary * _properties;
    NSString * _tellAFriendBody;
    NSString * _tellAFriendBodyMIMEType;
    NSMutableArray * _tellAFriendHandlers;
    SSURLConnectionRequest * _tellAFriendRequest;
    NSString * _tellAFriendSubject;
}

@property (readonly, nonatomic) NSNumber * ITunesStoreIdentifier;
@property (readonly, nonatomic) NSArray * allItemOffers;
@property (readonly, nonatomic) SSItemOffer * defaultItemOffer;
@property (readonly, nonatomic) NSString * artistName;
@property (readonly, nonatomic) NSDate * expirationDate;
@property (readonly, nonatomic) NSString * itemTitle;
@property (readonly, nonatomic) NSString * itemKind;
@property (readonly, nonatomic) char restricted;
@property (readonly, nonatomic) char highDefinition;
@property (readonly, nonatomic) char gameCenterEnabled;
@property (readonly, nonatomic) NSURL * viewItemURL;
@property (readonly, nonatomic) float averageUserRating;
@property (readonly, nonatomic) int numberOfUserRatings;
@property (readonly, nonatomic) SSItemImageCollection * imageCollection;
@property (readonly, nonatomic) NSArray * thumbnailImages;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)mediaKind;
- (NSString *)buyParameters;
- (void)request:(NSURLRequest *)arg0 didFailWithError:(NSError *)arg1;
- (void)requestDidFinish:(SKRequest *)arg0;
- (void)dealloc;
- (NSString *)description;
- (NSString *)bundleIdentifier;
- (NSString *)itemTitle;
- (NSString *)shortDescription;
- (void *)valueForProperty:(NSString *)arg0;
- (NSString *)bundleVersion;
- (NSNumber *)seasonNumber;
- (NSString *)networkName;
- (NSNumber *)contentRating;
- (NSString *)artistName;
- (NSNumber *)ITunesStoreIdentifier;
- (NSString *)itemKind;
- (char)isHighDefinition;
- (char)isCompilation;
- (NSString *)genreIdentifier;
- (NSString *)artistIdentifier;
- (NSString *)collectionArtistName;
- (NSString *)composerName;
- (NSString *)episodeIdentifier;
- (NSString *)episodeSortIdentifier;
- (NSString *)genreName;
- (id)indexInCollection;
- (NSObject *)numberOfCollectionsInCollectionGroup;
- (id)numberOfItemsInCollection;
- (NSString *)podcastEpisodeGUID;
- (NSURL *)podcastFeedURL;
- (NSDate *)releaseDate;
- (NSString *)seriesName;
- (id)videoDetails;
- (NSString *)longDescription;
- (NSString *)collectionName;
- (NSString *)collectionIdentifier;
- (NSDate *)expirationDate;
- (SSItemOffer *)defaultItemOffer;
- (NSString *)preOrderIdentifier;
- (NSObject *)collectionIndexInCollectionGroup;
- (NSString *)softwareType;
- (NSObject *)playableMedia;
- (SSItemImageCollection *)imageCollection;
- (char)isRestricted;
- (NSString *)releaseDateString;
- (SSItem *)initWithItemDictionary:(NSDictionary *)arg0;
- (NSDictionary *)rawItemDictionary;
- (NSString *)itemOfferForIdentifier:(NSString *)arg0;
- (void)urlConnectionRequest:(NSURLRequest *)arg0 didReceiveResponse:(char)arg1;
- (void)_setExpirationDate:(NSDate *)arg0;
- (NSArray *)_offers;
- (NSString *)tellAFriendBody;
- (NSDictionary *)_tellAFriendDictionary;
- (NSString *)priceDisplay;
- (void)_finishTellAFriendLoadWithError:(NSError *)arg0;
- (NSArray *)allItemOffers;
- (float)averageUserRating;
- (char)isGameCenterEnabled;
- (void)loadTellAFriendMessageWithCompletionHandler:(id /* block */)arg0;
- (int)numberOfPrintedPages;
- (int)numberOfUserRatings;
- (NSObject *)relatedItemsForRelationType:(NSObject *)arg0;
- (NSString *)tellAFriendBodyMIMEType;
- (NSURL *)tellAFriendBodyURL;
- (NSString *)tellAFriendSubject;
- (NSArray *)thumbnailImages;
- (NSString *)tweetInitialText;
- (NSURL *)tweetURL;
- (NSURL *)viewItemURL;
- (NSURL *)sendGiftURL;
- (NSURL *)viewReviewsURL;

@end
