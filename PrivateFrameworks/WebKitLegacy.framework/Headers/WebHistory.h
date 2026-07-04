/* Runtime dump - WebHistory
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHistory : NSObject
{
    WebHistoryPrivate * _historyPrivate;
}

@property (readonly, copy, nonatomic) NSArray * orderedLastVisitedDays;
@property (nonatomic) int historyItemLimit;
@property (nonatomic) int historyAgeInDaysLimit;

+ (NSArray *)optionalSharedHistory;
+ (void)setOptionalSharedHistory:(NSArray *)arg0;
+ (void)_setVisitedLinkTrackingEnabled:(char)arg0;
+ (void)_removeAllVisitedLinks;

- (void)removeItems:(NSArray *)arg0;
- (void)removeAllItems;
- (NSData *)_data;
- (void)dealloc;
- (WebHistory *)init;
- (void)addItems:(NSArray *)arg0;
- (NSArray *)allItems;
- (void)finalize;
- (void)_addVisitedLinksToPageGroup:(struct PageGroup *)arg0;
- (void)_visitedURL:(NSURL *)arg0 withTitle:(NSString *)arg1 method:(NSString *)arg2 wasFailure:(char)arg3;
- (NSString *)_itemForURLString:(NSString *)arg0;
- (NSURL *)itemForURL:(NSURL *)arg0;
- (void)_sendNotification:(NSNotification *)arg0 entries:(NSArray *)arg1;
- (int)historyAgeInDaysLimit;
- (int)historyItemLimit;
- (NSArray *)orderedLastVisitedDays;
- (id)orderedItemsLastVisitedOnDay:(id)arg0;
- (char)containsURL:(NSURL *)arg0;
- (void)setHistoryAgeInDaysLimit:(int)arg0;
- (void)setHistoryItemLimit:(int)arg0;
- (char)saveToURL:(NSURL *)arg0 error:(id *)arg1;
- (void)timeZoneChanged:(NSNotification *)arg0;
- (char)loadFromURL:(NSURL *)arg0 error:(id *)arg1;

@end
