/* Runtime dump - CPLEngineFileStorage
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject>
{
    NSObject<OS_dispatch_queue> * _lock;
    NSString * _logDomain;
    NSURL * _crashMarkerURL;
    NSMutableArray * _uncommittedFiles;
    char _keepOriginals;
    char _deleteImmediately;
    CPLPlatformObject * _platformObject;
    NSURL * _baseURL;
}

@property (readonly, nonatomic) NSURL * baseURL;
@property (nonatomic) char keepOriginals;
@property (nonatomic) char deleteImmediately;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

+ (NSObject *)platformImplementationProtocol;

- (NSURL *)baseURL;
- (void).cxx_destruct;
- (CPLEngineFileStorage *)initWithBaseURL:(NSURL *)arg0;
- (CPLPlatformObject *)platformObject;
- (char)openWithRecoveryHandler:(id /* block */)arg0 error:(/* block */ id)arg1;
- (char)doWrite:(id)arg0 error:(/* block */ id)arg1;
- (char)storeFileAtURL:(NSURL *)arg0 identity:(struct __SecIdentity *)arg1 isOriginal:(char)arg2 needsCommit:(char *)arg3 error:(id *)arg4;
- (char)discardUncommittedFileWithIdentity:(NSObject *)arg0 error:(id *)arg1;
- (NSObject *)retainFileURLForIdentity:(NSObject *)arg0 resourceType:(unsigned int)arg1 error:(id *)arg2;
- (void)checkFileSizeForIdentity:(NSObject *)arg0;
- (void)doRead:(id)arg0;
- (char)releaseFileURL:(NSURL *)arg0 error:(id *)arg1;
- (char)hasFileWithIdentity:(NSObject *)arg0;
- (char)linkOrCopyFileWithIdentity:(NSObject *)arg0 destinationURL:(NSURL *)arg1 error:(id *)arg2;
- (char)storeUnretainedFileAtURL:(NSURL *)arg0 identity:(struct __SecIdentity *)arg1 isOriginal:(char)arg2 error:(id *)arg3;
- (char)deleteFileWithIdentity:(NSObject *)arg0 error:(id *)arg1;
- (char)discardAllRetainedFileURLsWithError:(id *)arg0;
- (char)compactStorage:(id *)arg0;
- (char)commitFileWithIdentity:(NSObject *)arg0 error:(id *)arg1;
- (char)_recoverFromCrashWithRecoveryHandler:(id /* block */)arg0 error:(/* block */ id)arg1;
- (char)_fixupIdentity:(NSObject *)arg0 fileURL:(NSURL *)arg1 data:(NSData *)arg2 error:(id *)arg3;
- (void)_addIdentityToUncommittedFiles:(id)arg0;
- (void)_removeIdentityFromUncommittedFiles:(id)arg0;
- (char)deleteFileWithIdentity:(NSObject *)arg0 includingOriginal:(char)arg1 error:(id *)arg2;
- (char)storeUnretainedData:(NSData *)arg0 identity:(struct __SecIdentity *)arg1 isOriginal:(char)arg2 error:(id *)arg3;
- (char)compactStorageIncludeOriginals:(char)arg0 error:(id *)arg1;
- (char)tryToFreeDiskSpace:(unsigned long long)arg0 actuallyFreedSpace:(unsigned long long *)arg1 includeOriginals:(char)arg2 error:(id *)arg3;
- (NSArray *)fileEnumeratorIncludingPropertiesForKeys:(NSArray *)arg0 errorHandler:(SSErrorHandler *)arg1;
- (char)_compactStorageIncludeOriginals:(char)arg0 desiredFreeSpace:(unsigned long long *)arg1 error:(id *)arg2;
- (unsigned int)countOfUncommittedFiles;
- (char)hasCrashMarker;
- (char)storeData:(NSDictionary *)arg0 identity:(struct __SecIdentity *)arg1 isOriginal:(char)arg2 needsCommit:(char *)arg3 error:(id *)arg4;
- (char)tryToFreeDiskSpace:(unsigned long long)arg0 actuallyFreedSpace:(unsigned long long *)arg1 error:(id *)arg2;
- (NSEnumerator *)fileEnumerator;
- (char)keepOriginals;
- (void)setKeepOriginals:(char)arg0;
- (char)deleteImmediately;
- (void)setDeleteImmediately:(char)arg0;
- (char)closeWithError:(id *)arg0;

@end
