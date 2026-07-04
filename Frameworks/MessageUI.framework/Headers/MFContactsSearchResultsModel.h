/* Runtime dump - MFContactsSearchResultsModel
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFContactsSearchResultsModel : NSObject <_MFSearchResultsConsumer>
{
    NSOperationQueue * _queue;
    NSArray * _recentSearchResults;
    NSArray * _infrequentRecentSearchResults;
    NSMutableDictionary * _localSearchResultsByAddress;
    NSMutableDictionary * _serverSearchResultsByAddress;
    NSMutableDictionary * _recentRecipientsByAddress;
    NSMutableDictionary * _corecipientsByAddress;
    struct __CFArray * _resultTypesSortOrder;
    struct __CFArray * _resultTypesPriorityOrder;
    struct __CFSet * _finishedResultTypes;
    unsigned int _preferredType;
    char _favorMobileNumbers;
    int _resetCount;
    NSArray * _enteredRecipients;
}

@property (retain, nonatomic) NSArray * enteredRecipients;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MFContactsSearchResultsModel *)initWithResultTypeSortOrderComparator:(/* block */ id *)arg0 resultTypePriorityComparator:(/* block */ id *)arg1 favorMobileNumbers:(char)arg2;
- (NSObject *)_dictionaryForResultType:(unsigned int)arg0;
- (NSString *)_bestRecipientForAddress:(NSString *)arg0 fallback:(id)arg1;
- (void)_addBestRecipientsForRecipients:(id)arg0 excluding:(id)arg1 toArray:(NSArray *)arg2;
- (char)_isResetting;
- (void)_addResults:(NSArray *)arg0 ofType:(unsigned int)arg1;
- (char)_shouldProcessResultsAfterFinishingType:(unsigned int)arg0;
- (char)_didFinishSearchForType:(unsigned int)arg0;
- (void)_enumerateSearchResultTypesInSortOrderUsingBlock:(id /* block */)arg0;
- (void)_appendSortedResultsOfType:(unsigned int)arg0 excluding:(id)arg1 toResults:(NSArray *)arg2;
- (void)_finishSearchOfType:(unsigned int)arg0;
- (NSArray *)enteredRecipients;
- (void)setEnteredRecipients:(NSArray *)arg0;
- (void)dealloc;
- (MFContactsSearchResultsModel *)init;
- (void)reset;
- (MFContactsSearchResultsModel *)initWithFavorMobileNumbers:(char)arg0;
- (void)addResults:(NSArray *)arg0 ofType:(unsigned int)arg1;
- (void)processAddedResultsOfType:(unsigned int)arg0 completion:(id /* block */)arg1;

@end
