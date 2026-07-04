/* Runtime dump - PSSearchOperation
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchOperation : NSOperation
{
    char _newQuery;
    NSString * _query;
    NSSet * _rootEntries;
    PSSearchResults * _currentResults;
    <PSSearchOperationDelegate> * _delegate;
}

@property (readonly, copy, nonatomic) NSString * query;
@property (readonly, copy, nonatomic) NSSet * rootEntries;
@property (readonly, copy) PSSearchResults * currentResults;
@property (nonatomic) char newQuery;
@property (nonatomic) <PSSearchOperationDelegate> * delegate;

+ (struct __CFStringTokenizer *)_wordBoundaryTokenizer;

- (void)dealloc;
- (void)setDelegate:(<PSSearchOperationDelegate> *)arg0;
- (NSString *)description;
- (NSString *)debugDescription;
- (<PSSearchOperationDelegate> *)delegate;
- (NSString *)query;
- (void)main;
- (PSSearchResults *)currentResults;
- (char)isNewQuery;
- (PSSearchOperation *)initWithSearchQuery:(ATVDataQuery *)arg0 rootEntries:(NSSet *)arg1;
- (void)setNewQuery:(char)arg0;
- (NSSet *)rootEntries;
- (void)_didCancel;
- (char)_searchEntries:(NSArray *)arg0 forQuery:(NSObject *)arg1;
- (NSObject *)_filterEntriesMatchingQuery:(NSObject *)arg0 forQuery:(NSObject *)arg1;

@end
