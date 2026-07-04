/* Runtime dump - WebBookmarksSettingsGateway
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarksSettingsGateway : NSObject <WebBookmarksXPCConnectionDelegate>
{
    WebBookmarksXPCConnection * _connection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (WebBookmarksSettingsGateway *)init;
- (void)connection:(WebBookmarksXPCConnection *)arg0 didCloseWithError:(NSError *)arg1;
- (void)_clearConnection;
- (void)getCellularReadingListAllowedWithCompletion:(id /* block */)arg0;
- (void)setCellularReadingListAllowed:(char)arg0;
- (void)getSafariWebDataUsageWithCompletion:(id /* block */)arg0;
- (void)deleteAllSafariSecurityOrigins;
- (void)deleteSafariSecurityOrigin:(id)arg0;
- (void)deleteSafariPersistentURLCacheStorage;
- (id)getSafariDataUsageSummary;
- (void)clearAllSafariHistory;

@end
