/* Runtime dump - CPLEngineResourceUploadTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceUploadTask : CPLResourceTransferTask
{
    char _backgroundTask;
    CPLResource * _cloudResource;
    <CPLEngineTransportTask> * _transportTask;
    id _launchHandler;
    id _cancelHandler;
    id _didStartHandler;
    id _progressHandler;
    id _completionHandler;
}

@property (retain, nonatomic) CPLResource * cloudResource;
@property (nonatomic) char backgroundTask;
@property (retain, nonatomic) <CPLEngineTransportTask> * transportTask;
@property (readonly, nonatomic) id launchHandler;
@property (readonly, nonatomic) id cancelHandler;
@property (readonly, nonatomic) id didStartHandler;
@property (readonly, nonatomic) id progressHandler;
@property (readonly, nonatomic) id completionHandler;

- (void)launch;
- (id /* block */)completionHandler;
- (void).cxx_destruct;
- (<CPLEngineTransportTask> *)transportTask;
- (CPLEngineResourceUploadTask *)initWithLaunchHandler:(id /* block */)arg0 cancelHandler:(/* block */ id)arg1 didStartHandler:(id /* block */)arg2 progressHandler:(/* block */ id)arg3 completionHandler:(id /* block */)arg4;
- (void)setCloudResource:(CPLResource *)arg0;
- (id /* block */)didStartHandler;
- (id /* block */)progressHandler;
- (void)setTransportTask:(<CPLEngineTransportTask> *)arg0;
- (void)setBackgroundTask:(char)arg0;
- (CPLResource *)cloudResource;
- (char)isBackgroundTask;
- (id /* block */)launchHandler;
- (id /* block */)cancelHandler;
- (void)cancelTask;

@end
