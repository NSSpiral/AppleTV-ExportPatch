/* Runtime dump - MFContactsSearchManager
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFContactsSearchManager : NSObject <DASearchQueryConsumer>
{
    struct __CFDictionary * _taskIDsBySearchQuery;
    NSMutableDictionary * _taskContextsByTaskID;
    void * _addressBook;
    NSOperationQueue * _queue;
    unsigned int _genNumber;
    NSOrderedSet * _properties;
    unsigned int _searchTypes;
    NSObject<OS_dispatch_queue> * _serverSearchQueue;
    NSArray * _explicitSearchAccountIDs;
    NSArray * _searchAccounts;
    int _contactSearchAccountChangedToken;
    char _registeredForAddressBookChanges;
    char _includeUpcomingEventMembers;
    NSString * _recentsBundleIdentifier;
    NSString * _sendingAddress;
    unsigned int _implicitGroupCreationThreshold;
}

@property (retain) NSArray * searchAccountIDs;
@property (copy, nonatomic) NSString * sendingAddress;
@property (copy, nonatomic) NSString * recentsBundleIdentifier;
@property (nonatomic) unsigned int implicitGroupCreationThreshold;
@property (nonatomic) char includeUpcomingEventMembers;
@property (readonly, nonatomic) NSArray * searchAccounts;

- (void)_handleRecentsSearchFrequentResults:(NSArray *)arg0 infrequentResults:(NSArray *)arg1 operation:(ISURLOperation *)arg2 taskID:(NSNumber *)arg3;
- (void)_handleCorecipientSearchResults:(NSArray *)arg0 operation:(ISURLOperation *)arg1 taskID:(NSNumber *)arg2;
- (void)_handleLocalSearchResults:(NSArray *)arg0 type:(unsigned int)arg1 operation:(ISURLOperation *)arg2 taskID:(NSNumber *)arg3;
- (NSArray *)searchAccounts;
- (void)_handleSearchQueriesByAccountID:(NSObject *)arg0 operation:(ISURLOperation *)arg1 taskID:(NSNumber *)arg2;
- (NSArray *)searchAccountIDs;
- (void)_registerForAddressBookChanges;
- (void)_performLazySetup;
- (void)_invalidateSearchAccounts;
- (void)_handleTaskFinished:(id)arg0 context:(NSObject *)arg1;
- (NSOperationQueue *)_serverSearchQueue;
- (void)_handleSearchQueryFinished:(id)arg0 context:(NSObject *)arg1;
- (void)_handleSearchQuery:(NSObject *)arg0 returnedResults:(NSArray *)arg1;
- (void)_handleSearchQuery:(NSObject *)arg0 finishedWithError:(NSError *)arg1;
- (MFContactsSearchManager *)initWithAddressBook:(void *)arg0 properties:(int *)arg1 propertyCount:(unsigned int)arg2;
- (id)searchForCorecipientsWithRecipients:(id)arg0 consumer:(<DASearchQueryConsumer> *)arg1;
- (void)_handleAddressBookChangeNotification;
- (NSString *)recentsBundleIdentifier;
- (void)setRecentsBundleIdentifier:(NSString *)arg0;
- (void)setSearchAccountIDs:(NSArray *)arg0;
- (unsigned int)implicitGroupCreationThreshold;
- (void)setImplicitGroupCreationThreshold:(unsigned int)arg0;
- (char)includeUpcomingEventMembers;
- (void)setIncludeUpcomingEventMembers:(char)arg0;
- (void)dealloc;
- (void)cancelTaskWithID:(int)arg0;
- (void)searchQuery:(ATVDataQuery *)arg0 returnedResults:(NSArray *)arg1;
- (void)searchQuery:(ATVDataQuery *)arg0 finishedWithError:(NSError *)arg1;
- (void)setSendingAddress:(NSString *)arg0;
- (NSString *)sendingAddress;
- (MFContactsSearchManager *)initWithAddressBook:(void *)arg0 properties:(int *)arg1 propertyCount:(unsigned int)arg2 recentsBundleIdentifier:(NSString *)arg3;
- (void)setSearchTypes:(unsigned int)arg0;
- (NSString *)searchForText:(NSString *)arg0 consumer:(<DASearchQueryConsumer> *)arg1;

@end
