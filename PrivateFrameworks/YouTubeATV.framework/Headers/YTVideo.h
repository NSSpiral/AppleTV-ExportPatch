/* Runtime dump - YTVideo
 * Image: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

@interface YTVideo : NSObject
{
    NSString * _id;
    NSString * _title;
    NSString * _author;
    NSCalendarDate * _dateUpdated;
    NSCalendarDate * _dateAdded;
    NSArray * _videoReferences;
    NSString * _notificationName;
    NSString * _videoDescription;
    NSString * _category;
    NSArray * _tags;
    unsigned int _numberOfViews;
    unsigned int _numLikes;
    unsigned int _numDislikes;
    int _batchStatus;
    NSURL * _infoURL;
    NSURL * _thumbnailURL;
    NSURL * _commentsURL;
    NSURL * _editURL;
    NSURL * _ratingsURL;
    NSURL * _captionsURL;
    NSString * _shortID;
    NSString * _unplayable;
    char _isProcessing;
    NSMutableArray * _captions;
    int _privacy;
    NSString * _restrictedCountries;
    id _thumbnailProxyBlock;
}

+ (void)enableNotifications;
+ (void)disableNotifications;
+ (NSError *)unsupportedVideoError;
+ (NSError *)videoNotFoundError;
+ (NSError *)videoIsProcessingError;

- (NSString *)ID;
- (NSDictionary *)archiveDictionary;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)category;
- (NSString *)title;
- (NSArray *)tags;
- (NSString *)author;
- (char)isPlayable;
- (NSURL *)thumbnailURL;
- (NSCalendarDate *)dateAdded;
- (double)age;
- (NSString *)shortID;
- (YTVideo *)initFromArchiveDictionary:(NSDictionary *)arg0;
- (YTVideo *)initWithID:(int)arg0 title:(NSString *)arg1 dateUpdated:(NSCalendarDate *)arg2 dateAdded:(NSCalendarDate *)arg3 videoReferences:(NSArray *)arg4 infoURL:(NSURL *)arg5 videoDescription:(NSString *)arg6 category:(NSString *)arg7 tags:(NSArray *)arg8 author:(NSString *)arg9 thumbnailURL:(NSURL *)arg10 numLikes:(unsigned int)arg11 numDislikes:(unsigned int)arg12 numberOfViews:(unsigned int)arg13 batchStatus:(int)arg14 commentsURL:(NSURL *)arg15 editURL:(NSURL *)arg16 ratingsURL:(NSURL *)arg17 captionsURL:(NSURL *)arg18 shortID:(NSString *)arg19 unplayable:(NSString *)arg20 isProcessing:(char)arg21 privacy:(int)arg22 restrictedCountries:(NSString *)arg23;
- (struct CGImage *)thumbnailLoadIfAbsent:(char)arg0;
- (void)_postVideoDidChange;
- (void)_thumbnailDidLoad;
- (char)allowsHighQuality3GPlayback;
- (id)videoReferenceForProfile:(int)arg0;
- (NSObject *)bestVideoReference;
- (NSCalendarDate *)dateUpdated;
- (NSString *)dateAddedString;
- (NSURL *)commentsURL;
- (NSURL *)editURL;
- (NSURL *)ratingsURL;
- (NSURL *)captionsURL;
- (NSString *)videoDescription;
- (NSString *)tagsString;
- (NSString *)unplayable;
- (unsigned int)numLikes;
- (unsigned int)numDislikes;
- (char)positiveRating;
- (NSString *)ratingPercentageString;
- (unsigned int)numberOfViews;
- (NSString *)restrictedCountries;
- (int)batchStatus;
- (struct CGImage *)roundedThumbnailLoadIfAbsent:(char)arg0;
- (struct CGImage *)largeThumbnailLoadIfAbsent:(char)arg0;
- (struct CGImage *)pluginThumbnailLoadIfAbsent:(char)arg0;
- (void)loadThumbnailWithCallback:(struct OpaqueJSValue *)arg0;
- (void)carrierBundleDidChangeNotification:(NSNotification *)arg0;
- (NSObject *)anyVideoReference;
- (char)isBookmarked;
- (char)isProcessing;
- (NSMutableArray *)captions;
- (NSString *)privacyString;
- (char)ownVideo;
- (NSURL *)infoURL;

@end
