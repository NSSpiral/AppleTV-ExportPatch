/* Runtime dump - TSPDatabaseInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseInputStream : NSObject <TSUStreamReadChannel, SFUInputStream>
{
    NSObject<OS_dispatch_queue> * _readQueue;
    struct sqlite3_blob * _blob;
    int _offset;
    int _length;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)readWithHandler:(id /* block */)arg0;
- (TSPDatabaseInputStream *)initWithBlob:(struct sqlite3_blob *)arg0;
- (void)dealloc;
- (long long)offset;
- (void)close;
- (void).cxx_destruct;
- (void)seekToOffset:(long long)arg0;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (NSObject *)closeLocalStream;
- (char)canSeek;

@end
