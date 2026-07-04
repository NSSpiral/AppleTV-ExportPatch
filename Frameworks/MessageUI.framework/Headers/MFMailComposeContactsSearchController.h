/* Runtime dump - MFMailComposeContactsSearchController
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer>
{
    MFContactsSearchManager * _manager;
    MFContactsSearchResultsModel * _model;
    NSNumber * _corecipientSearchTaskID;
    char _foundAnySearchResults;
    unsigned int _waitingOnSearchResultsCount;
    <MFMailComposeContactsSearchControllerDelegate> * _delegate;
    NSNumber * _taskID;
}

@property (nonatomic) <MFMailComposeContactsSearchControllerDelegate> * delegate;
@property (retain, nonatomic) NSNumber * taskID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)cancelSearch;
- (void)searchWithString:(NSString *)arg0 enteredRecipients:(NSArray *)arg1;
- (void)findCorecipientsWithRecipients:(id)arg0;
- (void)_cancelSearchAndNotify:(char)arg0;
- (void)setTaskID:(NSNumber *)arg0;
- (void)searchWithString:(NSString *)arg0;
- (void)_finishSearch;
- (void)dealloc;
- (void)setDelegate:(<MFMailComposeContactsSearchControllerDelegate> *)arg0;
- (MFMailComposeContactsSearchController *)init;
- (<MFMailComposeContactsSearchControllerDelegate> *)delegate;
- (NSNumber *)taskID;
- (void)consumeSearchResults:(NSArray *)arg0 type:(unsigned int)arg1 taskID:(NSNumber *)arg2;
- (void)finishedSearchingForType:(unsigned int)arg0;
- (void)finishedTaskWithID:(int)arg0;
- (void)beganNetworkActivity;
- (void)endedNetworkActivity;

@end
