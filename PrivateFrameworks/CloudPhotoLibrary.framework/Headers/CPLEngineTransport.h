/* Runtime dump - CPLEngineTransport
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineTransport : NSObject <CPLAbstractObject, CPLEngineComponent>
{
    CPLPlatformObject * _platformObject;
    CPLEngineLibrary * _engineLibrary;
}

@property (readonly, weak, nonatomic) CPLEngineLibrary * engineLibrary;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) CPLPlatformObject * platformObject;

+ (NSObject *)platformImplementationProtocol;

- (NSString *)componentName;
- (void).cxx_destruct;
- (void)openWithCompletionHandler:(id /* block */)arg0;
- (CPLEngineLibrary *)engineLibrary;
- (CPLPlatformObject *)platformObject;
- (void)closeAndDeactivate:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg0;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg0;
- (CPLEngineTransport *)initWithEngineLibrary:(CPLEngineLibrary *)arg0;
- (id)setupTaskCreateLibraryIfNecessary:(char)arg0 withCompletionHandler:(id /* block */)arg1;
- (id)uploadBatchTaskForBatch:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)downloadBatchTaskForSyncAnchor:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)getAssetCountsTaskWithCompletionHandler:(id /* block */)arg0;
- (NSObject *)resourceDownloadTaskForResource:(NSObject *)arg0 clientBundleID:(NSString *)arg1 didStartHandler:(id /* block */)arg2 progressHandler:(/* block */ id)arg3 completionHandler:(id /* block */)arg4;
- (char)canBatchResourceDownloadTasks:(id)arg0 :(id)arg1;
- (void)runResourceDownloadTasks:(id)arg0;
- (NSObject *)resourcePublishTaskForResource:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (id)removeLibraryTaskWithCompletionHandler:(id /* block */)arg0;
- (char)supportsDelayedUploads;
- (NSObject *)resourceUploadTaskForResource:(NSObject *)arg0 ofRecord:(NSObject *)arg1 didStartHandler:(id /* block */)arg2 progressHandler:(/* block */ id)arg3 completionHandler:(id /* block */)arg4;
- (NSError *)bestErrorForUnderlyingError:(NSError *)arg0;
- (id)simpleDataForSyncAnchor:(id)arg0;

@end
