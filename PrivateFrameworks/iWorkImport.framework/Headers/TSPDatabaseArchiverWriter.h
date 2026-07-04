/* Runtime dump - TSPDatabaseArchiverWriter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseArchiverWriter : NSObject
{
    long long _dataStateIdentifier;
    NSString * _fileStateIdentifier;
    char _hasDataState;
    char _hasFileState;
    TSPDatabase * _database;
    TSPDistributableFileManager * _fileManager;
    NSString * _filenameHint;
    char _forceFileStorage;
}

@property (readonly, nonatomic) char hasDataState;
@property (nonatomic) long long dataStateIdentifier;
@property (readonly, nonatomic) char hasFileState;
@property (retain, nonatomic) NSString * fileStateIdentifier;
@property (retain, nonatomic) NSString * filenameHint;
@property (nonatomic) char forceFileStorage;

- (char)hasDataState;
- (char)hasFileState;
- (struct sqlite3_blob *)_openDatabaseBlobWithSize:(int)arg0;
- (void)_writeDataFromInputStreamToDatabase:(id)arg0 length:(int)arg1;
- (void)_writeDataFromInputStreamToFile:(NSString *)arg0 length:(long long)arg1;
- (void)setDataStateIdentifier:(long long)arg0;
- (void)setFileStateIdentifier:(NSString *)arg0;
- (TSPDatabaseArchiverWriter *)initWithDatabase:(TSPDatabase *)arg0 fileManager:(TSPDistributableFileManager *)arg1;
- (char)serializeArchive:(struct Message *)arg0;
- (long long)dataStateIdentifier;
- (NSString *)fileStateIdentifier;
- (void)serializeDataFromStream:(NSObject *)arg0 length:(long long)arg1;
- (NSString *)filenameHint;
- (void)setFilenameHint:(NSString *)arg0;
- (char)forceFileStorage;
- (void)setForceFileStorage:(char)arg0;
- (void).cxx_destruct;

@end
