/* Runtime dump - ML3DatabaseBlob
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseBlob : NSObject
{
    struct sqlite3_blob * _sqliteHandle;
}

- (void)dealloc;
- (ML3DatabaseBlob *)init;
- (unsigned int)length;
- (NSData *)data;
- (int)readData:(NSData *)arg0 numberOfBytes:(unsigned int)arg1 offset:(unsigned int)arg2;
- (ML3DatabaseBlob *)initWithSQLiteHandle:(struct sqlite3_blob *)arg0;
- (int)writeData:(NSData *)arg0 numberOfBytes:(unsigned int)arg1 offset:(unsigned int)arg2;

@end
