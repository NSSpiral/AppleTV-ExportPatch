/* Runtime dump - TSPDatabaseDataRepresentation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation
{
    TSPDatabase * _database;
    long long _identifier;
}

- (TSPDatabaseDataRepresentation *)initWithDatabase:(TSPDatabase *)arg0 identifier:(long long)arg1;
- (struct sqlite3_blob *)_openBlob;
- (struct ZeroCopyInputStream *)createProtobufInputStream;
- (void).cxx_destruct;
- (NSInputStream *)inputStream;
- (char)hasSameLocationAs:(id)arg0;
- (long long)dataLength;

@end
