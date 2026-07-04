/* Runtime dump - ABServerSearchPredicate
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer>
{
    void * _source;
    NSString * _accountIdentifier;
    NSString * _searchString;
    char _includeSourceInResults;
    DADConnection * _connection;
    DAContactsSearchQuery * _searchQuery;
    NSMutableArray * _searchResults;
    NSConditionLock * _doneLock;
    int _error;
    <ABPredicateDelegate> * _delegate;
    char _includePhotosInResults;
}

@property (nonatomic) void * source;
@property (copy, nonatomic) NSString * accountIdentifier;
@property (copy, nonatomic) NSString * searchString;
@property (nonatomic) char includeSourceInResults;
@property (nonatomic) char includePhotosInResults;
@property (nonatomic) <ABPredicateDelegate> * delegate;
@property (readonly, nonatomic) int error;
@property (retain, nonatomic) DADConnection * connection;

- (ABServerSearchPredicate *)initWithSearchString:(NSString *)arg0 source:(void *)arg1 account:(NSObject *)arg2 includeSourceInResults:(char)arg3 includePhotosInResults:(char)arg4;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg0 inAddressBook:(void *)arg1 withDelegate:(<ABPredicateDelegate> *)arg2;
- (void)setIncludeSourceInResults:(char)arg0;
- (void)setIncludePhotosInResults:(char)arg0;
- (ABServerSearchPredicate *)initWithSearchString:(NSString *)arg0 source:(void *)arg1 account:(NSObject *)arg2 includeSourceInResults:(char)arg3;
- (char)includePhotosInResults;
- (void)runPredicate;
- (void)runPredicateWithDelegate:(<ABPredicateDelegate> *)arg0;
- (void)_searchQueryIsDone;
- (int)_errorForDAStatusCode:(int)arg0;
- (ABServerSearchPredicate *)initWithSearchString:(NSString *)arg0 source:(void *)arg1 account:(NSObject *)arg2;
- (char)includeSourceInResults;
- (void)setAccountIdentifier:(NSString *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ABPredicateDelegate> *)arg0;
- (<ABPredicateDelegate> *)delegate;
- (NSString *)searchString;
- (void *)source;
- (void)setSource:(void *)arg0;
- (DADConnection *)connection;
- (void)setConnection:(DADConnection *)arg0;
- (void)setSearchString:(NSString *)arg0;
- (int)error;
- (NSString *)accountIdentifier;
- (void)searchQuery:(DAContactsSearchQuery *)arg0 returnedResults:(NSArray *)arg1;
- (void)searchQuery:(DAContactsSearchQuery *)arg0 finishedWithError:(int)arg1;

@end
