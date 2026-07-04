/* Runtime dump - AAUIContactsSearchController
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIContactsSearchController : NSObject <MFContactsSearchConsumer>
{
    MFContactsSearchManager * _searchManager;
    MFContactsSearchResultsModel * _searchResultsModel;
    int _countOfPendingResultBatches;
    char _didFindResults;
    NSNumber * _searchTaskID;
    <AAUIContactsSearchDelegate> * _delegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)cancelSearch;
- (void)_cancelSearchAndNotify:(char)arg0;
- (void).cxx_destruct;
- (void)_endSearch;
- (void)beginSearchWithString:(NSString *)arg0;
- (void)consumeSearchResults:(NSArray *)arg0 type:(unsigned int)arg1 taskID:(NSNumber *)arg2;
- (void)finishedSearchingForType:(unsigned int)arg0;
- (void)finishedTaskWithID:(int)arg0;
- (void)beganNetworkActivity;
- (void)endedNetworkActivity;
- (AAUIContactsSearchController *)initWithDelegate:(<AAUIContactsSearchDelegate> *)arg0;

@end
