/* Runtime dump - CPLEngineResourceStorage
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject>
{
    NSMutableSet * _identitiesToCommit;
    NSMutableSet * _identitiesToDelete;
    NSURL * _tempFolderURL;
    CPLEngineFileStorage * _fileStorage;
}

@property (readonly, nonatomic) CPLEngineFileStorage * fileStorage;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

- (void).cxx_destruct;
- (char)openWithError:(id *)arg0;
- (CPLEngineResourceStorage *)initWithEngineStore:(CPLEngineStore *)arg0 name:(NSString *)arg1;
- (char)markResourceAsUploaded:(id)arg0 fromURL:(NSURL *)arg1 error:(id *)arg2;
- (char)resetWithError:(id *)arg0;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (char)storeResourceForUpload:(id)arg0 error:(id *)arg1;
- (NSObject *)createFileURLForUploadForResource:(NSObject *)arg0 error:(id *)arg1;
- (char)markResourceDoesNotNeedToBeUploaded:(id)arg0 error:(id *)arg1;
- (char)markResourceFailedToUpload:(id)arg0 fromURL:(NSURL *)arg1 error:(id *)arg2;
- (NSObject *)retainFileURLForResource:(NSObject *)arg0 error:(id *)arg1;
- (char)releaseFileURL:(NSURL *)arg0 forResource:(NSObject *)arg1 error:(id *)arg2;
- (char)hasResource:(NSObject *)arg0;
- (char)storeResource:(NSObject *)arg0 toURL:(NSURL *)arg1 error:(id *)arg2;
- (NSObject *)createTempDestinationURLForResource:(NSObject *)arg0 error:(id *)arg1;
- (char)storeDownloadedResource:(NSObject *)arg0 atURL:(NSURL *)arg1 error:(id *)arg2;
- (char)compactWithError:(id *)arg0;
- (CPLEngineFileStorage *)fileStorage;
- (unsigned long long)sizeOfResourcesToUpload;

@end
