/* Runtime dump - WebHistoryItem
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHistoryItem : NSObject <NSCopying>
{
    WebHistoryItemPrivate * _private;
}

@property (readonly, copy, nonatomic) NSString * originalURLString;
@property (readonly, copy, nonatomic) NSString * URLString;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (copy, nonatomic) NSString * alternateTitle;

+ (void)initialize;
+ (NSURL *)entryWithURL:(NSString *)arg0;

- (void)dealloc;
- (WebHistoryItem *)init;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)title;
- (WebHistoryItem *)copyWithZone:(struct _NSZone *)arg0;
- (float)_scale;
- (NSObject *)target;
- (NSURL *)URL;
- (char)_scaleIsInitial;
- (NSArray *)_viewportArguments;
- (char)lastVisitWasFailure;
- (void)_setScrollPoint:(struct CGPoint)arg0;
- (void)_setScale:(float)arg0 isInitial:(char)arg1;
- (void)_setViewportArguments:(NSDictionary *)arg0;
- (struct CGPoint)_scrollPoint;
- (NSDictionary *)dictionaryRepresentation;
- (NSString *)URLString;
- (void)finalize;
- (NSArray *)children;
- (NSArray *)dictionaryRepresentationIncludingChildren:(char)arg0;
- (WebHistoryItem *)initFromDictionaryRepresentation:(NSDictionary *)arg0;
- (struct CGPoint)scrollPoint;
- (void)setViewState:(NSObject *)arg0;
- (double)lastVisitedTimeInterval;
- (void)_visitedWithTitle:(NSString *)arg0;
- (WebHistoryItem *)initWithURLString:(NSString *)arg0 title:(NSString *)arg1 lastVisitedTimeInterval:(double)arg2;
- (WebHistoryItem *)initWithWebCoreHistoryItem:(struct PassRefPtr<WebCore::HistoryItem>)arg0;
- (WebHistoryItem *)initWithURL:(NSString *)arg0 title:(NSString *)arg1;
- (WebHistoryItem *)initWithURLString:(NSString *)arg0 title:(NSString *)arg1 displayTitle:(NSString *)arg2 lastVisitedTimeInterval:(double)arg3;
- (NSString *)originalURLString;
- (void)setAlternateTitle:(NSString *)arg0;
- (NSString *)alternateTitle;
- (WebHistoryItem *)initWithURL:(NSString *)arg0 target:(NSObject *)arg1 parent:(NSObject *)arg2 title:(NSString *)arg3;
- (NSString *)_sharedLinkUniqueIdentifier;
- (char)isTargetItem;
- (id)RSSFeedReferrer;
- (void)setRSSFeedReferrer:(id)arg0;
- (NSObject *)targetItem;
- (NSString *)_transientPropertyForKey:(NSString *)arg0;
- (void)_setTransientProperty:(NSObject *)arg0 forKey:(NSString *)arg1;
- (id)_redirectURLs;
- (unsigned int)_bookmarkID;
- (void)_setBookmarkID:(unsigned int)arg0;
- (void)_setSharedLinkUniqueIdentifier:(NSString *)arg0;
- (char)_isInPageCache;
- (char)_hasCachedPageExpired;

@end
