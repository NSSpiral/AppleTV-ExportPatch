/* Runtime dump - TSPDatabaseObjectWithDataState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDatabaseObjectWithDataState : TSPDatabaseObject
{
    long long _dataState;
}

- (char)hasDataState;
- (long long)dataState;
- (TSPDatabaseObjectWithDataState *)initWithIdentifier:(long long)arg0 classType:(int)arg1 dataState:(long long)arg2;
- (char)hasFileState;
- (NSString *)fileState;
- (NSURL *)fileURL;

@end
