/* Runtime dump - MFDbJournal
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDbJournal : NSObject
{
    NSString * _path;
    struct _opaque_pthread_mutex_t _lock;
    int _fd;
    NSMutableData * _buffer;
}

- (void)dealloc;
- (char)flush;
- (void)clear;
- (MFDbJournal *)initWithPath:(NSString *)arg0;
- (char)append:(char *)arg0;
- (char)mergeWithDatabase:(struct sqlite3 *)arg0;
- (void)_resetBuffer;
- (char)_processJournalFile:(NSString *)arg0 db:(struct sqlite3 *)arg1;

@end
