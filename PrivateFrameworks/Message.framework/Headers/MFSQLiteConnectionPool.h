/* Runtime dump - MFSQLiteConnectionPool
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSQLiteConnectionPool : NSObject
{
    <MFSQLiteConnectionPoolDelegate> * _delegate;
    NSLock * _cacheLock;
    NSMutableSet * _cache;
    unsigned int _cacheSize;
    unsigned int _cacheGeneration;
    unsigned int _maxConcurrentBackgroundReaders;
    unsigned int _maxConcurrentWriters;
    NSLock * _checkoutLock;
    struct __CFDictionary * _checkoutMap;
    NSObject<OS_dispatch_semaphore> * _backgroundReaderSemaphore;
    int _backgroundReadersWaiting;
    NSObject<OS_dispatch_semaphore> * _writerSemaphore;
    int _writersWaiting;
}

@property <MFSQLiteConnectionPoolDelegate> * delegate;
@property unsigned int cacheSize;
@property (readonly) unsigned int maxConcurrentBackgroundReaders;
@property (readonly) unsigned int maxConcurrentWriters;
@property (readonly) unsigned int backgroundReadersWaiting;
@property (readonly) unsigned int writersWaiting;

- (void)dealloc;
- (void)setDelegate:(<MFSQLiteConnectionPoolDelegate> *)arg0;
- (<MFSQLiteConnectionPoolDelegate> *)delegate;
- (void)flush;
- (MFSQLiteConnectionPool *)initWithDelegate:(<MFSQLiteConnectionPoolDelegate> *)arg0 maxConcurrentBackgroundReaders:(unsigned int)arg1;
- (void)setCacheSize:(unsigned int)arg0;
- (unsigned int)writersWaiting;
- (NSURLConnection *)backgroundReaderConnection;
- (NSObject *)_connectionWithType:(unsigned int)arg0;
- (NSObject *)_semaphoreForConnectionType:(unsigned int)arg0 waitCounter:(int * *)arg1;
- (unsigned int)maxConcurrentReaders;
- (unsigned int)maxConcurrentWriters;
- (unsigned int)backgroundReadersWaiting;
- (unsigned int)maxConcurrentBackgroundReaders;
- (NSURLConnection *)readerConnection;
- (NSURLConnection *)writerConnection;
- (void)checkInConnection:(NSURLConnection *)arg0;
- (unsigned int)cacheSize;

@end
