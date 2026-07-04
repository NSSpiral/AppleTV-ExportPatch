/* Runtime dump - NSBinaryObjectStoreFile
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSBinaryObjectStoreFile : NSObject
{
    int _databaseVersion;
    NSDictionary * _fullMetadata;
    unsigned long long _primaryKeyGeneration;
    NSMutableDictionary * _mapData;
    NSDictionary * _storeOptions;
}

- (char)readMetadataFromFile:(NSString *)arg0 error:(id *)arg1;
- (NSDictionary *)fullMetadata;
- (void)setFullMetadata:(NSDictionary *)arg0;
- (char)writeMetadataToFile:(NSString *)arg0 error:(id *)arg1;
- (void)setDatabaseVersion:(int)arg0;
- (void)setPrimaryKeyGeneration:(unsigned long long)arg0;
- (void)setMapData:(NSMutableDictionary *)arg0;
- (void)clearCurrentValues;
- (char)readBinaryStoreFromData:(NSData *)arg0 originalPath:(NSString *)arg1 error:(id *)arg2;
- (char)_writeMetadataData:(NSData *)arg0 andMapDataData:(NSData *)arg1 toFile:(NSString *)arg2 error:(id *)arg3;
- (int)databaseVersion;
- (unsigned long long)primaryKeyGeneration;
- (NSMutableDictionary *)mapData;
- (char)readFromFile:(NSString *)arg0 error:(id *)arg1;
- (char)writeToFile:(NSString *)arg0 error:(id *)arg1;
- (void)dealloc;

@end
