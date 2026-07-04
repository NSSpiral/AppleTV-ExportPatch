/* Runtime dump - CPLEngineResourceDownloadTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask
{
    char _backgroundTask;
    char _cancelledByEngine;
    char _wantsTransportTask;
    char _transportOwnsTask;
    CPLResource * _cloudResource;
    unsigned int _taskIdentifierForQueue;
    NSString * _clientBundleID;
    <CPLEngineTransportTask> * _transportTask;
    id _launchHandler;
    id _cancelHandler;
    id _didStartHandler;
    id _progressHandler;
    id _completionHandler;
}

@property (retain, nonatomic) CPLResource * cloudResource;
@property (nonatomic) unsigned int taskIdentifierForQueue;
@property (retain, nonatomic) NSString * clientBundleID;
@property (nonatomic) char backgroundTask;
@property (nonatomic) char cancelledByEngine;
@property (nonatomic) char wantsTransportTask;
@property (nonatomic) char transportOwnsTask;
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
- (CPLEngineResourceDownloadTask *)initWithLaunchHandler:(id /* block */)arg0 cancelHandler:(/* block */ id)arg1 didStartHandler:(id /* block */)arg2 progressHandler:(/* block */ id)arg3 completionHandler:(id /* block */)arg4;
- (void)setCloudResource:(CPLResource *)arg0;
- (id /* block */)didStartHandler;
- (id /* block */)progressHandler;
- (void)setTransportTask:(<CPLEngineTransportTask> *)arg0;
- (void)setTaskIdentifierForQueue:(unsigned int)arg0;
- (void)setBackgroundTask:(char)arg0;
- (char)wantsTransportTask;
- (void)setClientBundleID:(NSString *)arg0;
- (void)setWantsTransportTask:(char)arg0;
- (CPLResource *)cloudResource;
- (NSString *)clientBundleID;
- (char)isBackgroundTask;
- (char)transportOwnsTask;
- (void)setTransportOwnsTask:(char)arg0;
- (void)setCancelledByEngine:(char)arg0;
- (char)isCancelledByEngine;
- (unsigned int)taskIdentifierForQueue;
- (id /* block */)launchHandler;
- (id /* block */)cancelHandler;
- (void)cancelTask;

@end
