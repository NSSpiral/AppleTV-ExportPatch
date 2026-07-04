/* Runtime dump - WebHistoryPrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHistoryPrivate : NSObject
{
    NSMutableDictionary * _entriesByURL;
    struct /* ? */ _entriesByDate;
    NSMutableArray * _orderedLastVisitedDays;
    char itemLimitSet;
    int itemLimit;
    char ageInDaysLimitSet;
    int ageInDaysLimit;
}

+ (void)initialize;

- (char)removeItems:(NSArray *)arg0;
- (char)removeAllItems;
- (void)dealloc;
- (WebHistoryPrivate *)init;
- (NSData *)data;
- (char)removeItem:(void *)arg0;
- (void).cxx_construct;
- (void)addItems:(NSArray *)arg0;
- (void).cxx_destruct;
- (NSArray *)allItems;
- (void)finalize;
- (NSURL *)itemForURL:(NSURL *)arg0;
- (char)findKey:(long long *)arg0 forDay:(double)arg1;
- (char)removeItemFromDateCaches:(id)arg0;
- (void)insertItem:(NSObject *)arg0 forDateKey:(long long)arg1;
- (void)addItemToDateCaches:(id)arg0;
- (char)removeItemForURLString:(NSString *)arg0;
- (char)addItem:(NSObject *)arg0 discardDuplicate:(char)arg1;
- (NSString *)itemForURLString:(NSString *)arg0;
- (int)historyAgeInDaysLimit;
- (int)historyItemLimit;
- (NSDate *)ageLimitDate;
- (char)loadHistoryGutsFromURL:(NSURL *)arg0 savedItemsCount:(int *)arg1 collectDiscardedItemsInto:(id)arg2 error:(id *)arg3;
- (NSURL *)visitedURL:(NSURL *)arg0 withTitle:(NSString *)arg1;
- (void)rebuildHistoryByDayIfNeeded:(id)arg0;
- (NSMutableArray *)orderedLastVisitedDays;
- (id)orderedItemsLastVisitedOnDay:(id)arg0;
- (char)containsURL:(NSURL *)arg0;
- (void)setHistoryAgeInDaysLimit:(int)arg0;
- (void)setHistoryItemLimit:(int)arg0;
- (char)loadFromURL:(NSURL *)arg0 collectDiscardedItemsInto:(id)arg1 error:(id *)arg2;
- (char)saveToURL:(NSURL *)arg0 error:(id *)arg1;
- (void)addVisitedLinksToPageGroup:(struct PageGroup *)arg0;

@end
