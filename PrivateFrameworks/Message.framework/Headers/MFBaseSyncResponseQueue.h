/* Runtime dump - MFBaseSyncResponseQueue
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFBaseSyncResponseQueue : MFBufferedQueue
{
    MFLibraryIMAPStore * _store;
    MFIMAPConnection * _connection;
    NSString * _url;
    unsigned int _currentUID;
    NSMutableArray * _missingUIDs;
    NSArray * _libraryDetails;
    char _shouldCompact;
    char _shouldFetch;
    char _isSearching;
}

- (void)dealloc;
- (MFBaseSyncResponseQueue *)init;
- (unsigned int)uidForItem:(NSObject *)arg0;
- (char)shouldSyncFlags;
- (unsigned long long)flagsForItem:(NSObject *)arg0;
- (NSObject *)sequenceIdentifierForItem:(NSObject *)arg0;
- (char)handleItems:(NSArray *)arg0;

@end
