/* Runtime dump - WebBackForwardList
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebBackForwardList : NSObject
{
    WebBackForwardListPrivate * _private;
}

@property (readonly, nonatomic) WebHistoryItem * backItem;
@property (readonly, nonatomic) WebHistoryItem * currentItem;
@property (readonly, nonatomic) WebHistoryItem * forwardItem;
@property (nonatomic) int capacity;
@property (readonly, nonatomic) int backListCount;
@property (readonly, nonatomic) int forwardListCount;

+ (void)initialize;

- (void)setCapacity:(int)arg0;
- (void)setPageCacheSize:(unsigned int)arg0;
- (void)dealloc;
- (WebBackForwardList *)init;
- (NSString *)description;
- (WebHistoryItem *)backItem;
- (WebHistoryItem *)currentItem;
- (void)addItem:(NSObject *)arg0;
- (void)removeItem:(void *)arg0;
- (void)goBack;
- (void)goForward;
- (NSDictionary *)dictionaryRepresentation;
- (void)setToMatchDictionaryRepresentation:(NSDictionary *)arg0;
- (WebHistoryItem *)forwardItem;
- (void)_close;
- (BRControl *)itemAtIndex:(int)arg0;
- (int)capacity;
- (void)finalize;
- (WebBackForwardList *)initWithBackForwardList:(struct PassRefPtr<WebCore::BackForwardList>)arg0;
- (char)containsItem:(NSObject *)arg0;
- (void)goToItem:(NSObject *)arg0;
- (id)backListWithLimit:(int)arg0;
- (id)forwardListWithLimit:(int)arg0;
- (unsigned int)pageCacheSize;
- (int)backListCount;
- (int)forwardListCount;

@end
