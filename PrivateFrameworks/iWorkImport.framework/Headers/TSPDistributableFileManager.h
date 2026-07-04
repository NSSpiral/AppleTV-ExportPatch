/* Runtime dump - TSPDistributableFileManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableFileManager : NSObject
{
    NSString * _directoryPath;
    char _shouldCreate;
    TSUPathSet * _claimedPaths;
    NSMutableSet * _newIdentifiers;
    NSMutableSet * _modifiedIdentifiers;
    NSMutableSet * _deletedIdentifiers;
    TSUTemporaryDirectory * _modifiedFilesDirectory;
    char _isCullingDisabled;
}

- (void)setDataFromInputStream:(NSObject *)arg0 length:(long long)arg1 forIdentifier:(NSString *)arg2;
- (NSInputStream *)addDataFromInputStream:(NSObject *)arg0 length:(long long)arg1 filenameHint:(NSString *)arg2;
- (TSPDistributableFileManager *)initWithPath:(NSString *)arg0 shouldCreate:(char)arg1;
- (char)commitWithError:(id *)arg0;
- (NSString *)_filePathForIdentifier:(NSString *)arg0;
- (NSString *)_filePathForModifiedIdentifier:(NSString *)arg0;
- (TSUPathSet *)_claimedPaths;
- (void)_writeDataFromInputStream:(NSObject *)arg0 length:(long long)arg1 toPath:(NSString *)arg2;
- (NSString *)_modifiedFilesDirectoryPath;
- (NSDictionary *)addDataRepresentation:(NSDictionary *)arg0 filenameHint:(NSString *)arg1;
- (void)setDataRepresentation:(NSData *)arg0 forIdentifier:(NSString *)arg1;
- (NSString *)representationForIdentifier:(NSString *)arg0;
- (void)removeIdentifier:(NSString *)arg0;
- (void)disableFileCulling;
- (char)prepareForSaveToPath:(NSString *)arg0 error:(id *)arg1;
- (char)rehomeOntoPath:(NSString *)arg0;
- (void).cxx_destruct;

@end
