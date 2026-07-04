/* Runtime dump - ISProtocolDataProvider
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISProtocolDataProvider : ISDataProvider <NSCopying>
{
    char _shouldPostFooterSectionChanged;
    char _shouldProcessAccount;
    char _shouldProcessAuthenticationDialogs;
    char _shouldProcessDialogs;
    char _shouldProcessProtocol;
    char _shouldTriggerDownloads;
}

@property char shouldPostFooterSectionChanged;
@property char shouldProcessAccount;
@property char shouldProcessAuthenticationDialogs;
@property char shouldProcessDialogs;
@property char shouldProcessProtocol;
@property char shouldTriggerDownloads;

- (void)setShouldProcessProtocol:(char)arg0;
- (ISProtocolDataProvider *)init;
- (ISProtocolDataProvider *)copyWithZone:(struct _NSZone *)arg0;
- (void)setShouldPostFooterSectionChanged:(char)arg0;
- (void)setShouldProcessDialogs:(char)arg0;
- (void)setShouldTriggerDownloads:(char)arg0;
- (char)shouldProcessProtocol;
- (char)parseData:(NSData *)arg0 returningError:(id *)arg1;
- (char)processDialogFromDictionary:(NSDictionary *)arg0 error:(id *)arg1;
- (char)processDictionary:(NSDictionary *)arg0 error:(id *)arg1;
- (void)setShouldProcessAccount:(char)arg0;
- (char)shouldProcessAuthenticationDialogs;
- (char)shouldProcessDialogs;
- (char)_shouldFailWithTokenErrorForDialog:(id)arg0 dictionary:(NSDictionary *)arg1 error:(id *)arg2;
- (void)_presentDialog:(id)arg0;
- (void)_performActionsForResponse:(NSURLResponse *)arg0;
- (char)_processFailureTypeFromDictionary:(NSDictionary *)arg0 error:(id *)arg1;
- (char)shouldTriggerDownloads;
- (void)_checkDownloadQueues;
- (void)_selectFooterSection:(id)arg0;
- (char)shouldProcessAccount;
- (void)_checkInAppPurchaseQueueForAction:(NSObject *)arg0;
- (char)shouldPostFooterSectionChanged;
- (void)setShouldProcessAuthenticationDialogs:(char)arg0;

@end
