/* Runtime dump - SafariFetcherServerProxy
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface SafariFetcherServerProxy : NSObject <WebBookmarksXPCConnectionDelegate>
{
    WebBookmarksXPCConnection * _connection;
    <WebBookmarksClientDelegateProtocol> * _delegate;
}

@property (nonatomic) <WebBookmarksClientDelegateProtocol> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<WebBookmarksClientDelegateProtocol> *)arg0;
- (SafariFetcherServerProxy *)init;
- (<WebBookmarksClientDelegateProtocol> *)delegate;
- (void)invalidate;
- (void)clearReadingListArchiveWithUUID:(id)arg0;
- (void)clearAllReadingListArchives;
- (void)startReadingListFetcher;
- (void)connection:(WebBookmarksXPCConnection *)arg0 didCloseWithError:(NSError *)arg1;
- (void)didFinishFetching;
- (void)didUpdateProgressWithMessage:(NSString *)arg0;
- (void)didStartFetchingReadingListItemWithMessage:(NSString *)arg0;
- (void)didStopFetchingReadingListItemWithMessage:(NSString *)arg0;
- (void)_clearConnection;

@end
