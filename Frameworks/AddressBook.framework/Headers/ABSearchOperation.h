/* Runtime dump - ABSearchOperation
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABSearchOperation : NSOperation
{
    void * _addressBook;
    NSPredicate * _predicate;
    NSArray * _prefetchProperties;
    unsigned int _sortOrdering;
    void * _internalSearchAddressBook;
    <ABSearchOperationDelegate> * _delegate;
    id _progressBlock;
    NSThread * _progressBlockThread;
    void * _context;
    NSArray * _copiedRecords;
    NSArray * _copiedSuggestions;
}

@property (nonatomic) void * addressBook;
@property (retain, nonatomic) NSPredicate * predicate;
@property (copy, nonatomic) NSArray * prefetchProperties;
@property (nonatomic) <ABSearchOperationDelegate> * delegate;
@property (nonatomic) void * context;
@property (nonatomic) unsigned int sortOrdering;
@property (copy, nonatomic) id progressBlock;
@property (nonatomic) void * internalSearchAddressBook;

+ (ABSearchOperation *)personPredicateWithPhoneLike:(SAPhone *)arg0 countryHint:(id)arg1 addressBook:(void *)arg2;
+ (ABSearchOperation *)personPredicateWithNameLike:(NSString *)arg0 addressBook:(void *)arg1;
+ (NSString *)personPredicateWithName:(NSString *)arg0 addressBook:(void *)arg1;
+ (ABSearchOperation *)personPredicateWithNameLike:(NSString *)arg0 inGroup:(void *)arg1 addressBook:(void *)arg2;
+ (ABSearchOperation *)personPredicateWithNameLike:(NSString *)arg0 inSource:(void *)arg1 addressBook:(void *)arg2;
+ (ABSearchOperation *)personPredicateWithNameLike:(NSString *)arg0 inSource:(void *)arg1 includeSourceInResults:(char)arg2 addressBook:(void *)arg3;
+ (ABSearchOperation *)personPredicateWithNameLike:(NSString *)arg0 inSource:(void *)arg1 includeSourceInResults:(char)arg2 includePhotosInResults:(char)arg3 addressBook:(void *)arg4;
+ (ABSearchOperation *)personPredicateWithNameLike:(NSString *)arg0 inAccount:(NSObject *)arg1 addressBook:(void *)arg2;
+ (ABSearchOperation *)personPredicateWithNameLike:(NSString *)arg0 inGroups:(id)arg1 sources:(TSCH3DChartMeshResources *)arg2 addressBook:(void *)arg3;
+ (ABSearchOperation *)personPredicateWithNameOnly:(id)arg0 inAccount:(NSObject *)arg1 addressBook:(void *)arg2;
+ (NSObject *)personPredicateWithAnyValueForProperty:(int)arg0 addressBook:(void *)arg1;
+ (NSObject *)personPredicateWithGroup:(void *)arg0 addressBook:(void *)arg1;
+ (ABSearchOperation *)personPredicateWithValue:(id)arg0 comparison:(long)arg1 forProperty:(int)arg2 addressBook:(void *)arg3;

- (char)predicateShouldContinue:(id)arg0;
- (char)predicateShouldContinue:(id)arg0 afterFindingRecord:(void *)arg1;
- (unsigned int)sortOrdering;
- (void *)internalSearchAddressBook;
- (void)_mainThread_tellDelegateSearchFoundMatch:(void *)arg0;
- (void)setInternalSearchAddressBook:(void *)arg0;
- (char)predicateShouldContinue:(id)arg0 afterFindingRecord:(void *)arg1 moreComing:(char)arg2;
- (NSArray *)prefetchProperties;
- (void)setPrefetchProperties:(NSArray *)arg0;
- (void)setAddressBook:(void *)arg0;
- (void)setSortOrdering:(unsigned int)arg0;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(<ABSearchOperationDelegate> *)arg0;
- (<ABSearchOperationDelegate> *)delegate;
- (void *)context;
- (void)setContext:(void *)arg0;
- (void)setPredicate:(NSPredicate *)arg0;
- (NSPredicate *)predicate;
- (void)main;
- (char)isConcurrent;
- (id /* block */)progressBlock;
- (void *)addressBook;
- (void)setProgressBlock:(id /* block */)arg0;

@end
