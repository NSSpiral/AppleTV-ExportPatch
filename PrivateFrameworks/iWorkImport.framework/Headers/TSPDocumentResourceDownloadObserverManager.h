/* Runtime dump - TSPDocumentResourceDownloadObserverManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceDownloadObserverManager : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _downloadObserversMap;
}

+ (TSPDocumentResourceDownloadObserverManager *)sharedManager;

- (void)addDownloadObserver:(NSObject *)arg0 forData:(NSData *)arg1 digestString:(NSString *)arg2 options:(unsigned int)arg3 isInternalObserver:(char)arg4 completionHandler:(id /* block */)arg5;
- (void)notifyDownloadObserversForDigestString:(NSString *)arg0 withStatus:(int)arg1 info:(NSDictionary *)arg2 wait:(char)arg3;
- (TSPDocumentResourceDownloadObserverManager *)init;
- (void).cxx_destruct;

@end
