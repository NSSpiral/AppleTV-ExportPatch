/* Runtime dump - TSPDistributableReader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableReader : NSObject <TSPStreamingDistributableUnarchiver>
{
    TSPDatabase * _database;
    TSPDistributableFileManager * _fileManager;
    char _hasReadTangierVersionRoot;
    char _isCancelled;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)readCheckCrcFromArchiveInputStream:(NSObject *)arg0 crc:(unsigned int *)arg1 error:(id *)arg2;

- (char)handleArchivedVersions:(struct ?)arg0 error:(id *)arg1;
- (char)handleObjectWithIdentifier:(long long)arg0 fileStateIdentifier:(NSString *)arg1 version:(unsigned int)arg2 classType:(int)arg3 stream:(NSObject *)arg4 length:(long long)arg5 relationshipTargets:(long long *)arg6 relationshipCount:(unsigned int)arg7 error:(id *)arg8;
- (char)handleFileDescriptorProtoWithInputStream:(NSObject *)arg0 length:(unsigned int)arg1 error:(id *)arg2;
- (char)handleClassInfoWithClassType:(int)arg0 className:(NSString *)arg1 isProtobufClass:(char)arg2 error:(id *)arg3;
- (char)_initializeNewDocumentDirectory:(id)arg0;
- (TSPDistributableReader *)initWithDestinationPath:(NSString *)arg0;
- (char)readFromDistributableArchiveStream:(NSObject *)arg0 estimatedDataLength:(long long)arg1 supplementalDataBundle:(NSObject *)arg2 error:(id *)arg3;
- (void)cancel;
- (void).cxx_destruct;

@end
