/* Runtime dump - MFFetchResponseQueue
 * Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface MFFetchResponseQueue : MFBufferedQueue
{
    MFLibraryIMAPStore * _store;
    MFIMAPConnection * _connection;
    unsigned int _numNewUIDs;
    unsigned int _newMessageCount;
    unsigned long long _highestModSequence;
    unsigned long long _flags;
    char _isSearching;
}

- (void)dealloc;
- (MFFetchResponseQueue *)init;
- (char)addItem:(NSObject *)arg0;
- (id)insertMessages:(id)arg0;
- (char)shouldAddUID:(unsigned int)arg0;
- (id)messageToSyncFlagsForUID:(unsigned int)arg0;
- (char)handleItems:(NSArray *)arg0;

@end
