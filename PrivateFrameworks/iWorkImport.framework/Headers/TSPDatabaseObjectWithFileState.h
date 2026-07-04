/* Runtime dump - TSPDatabaseObjectWithFileState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseObjectWithFileState : TSPDatabaseObject
{
    NSString * _fileState;
    NSURL * _packageURL;
}

- (char)hasDataState;
- (long long)dataState;
- (TSPDatabaseObjectWithFileState *)initWithIdentifier:(long long)arg0 classType:(int)arg1 fileState:(NSString *)arg2 packageURL:(NSURL *)arg3;
- (char)hasFileState;
- (NSString *)fileState;
- (void).cxx_destruct;
- (NSURL *)fileURL;

@end
