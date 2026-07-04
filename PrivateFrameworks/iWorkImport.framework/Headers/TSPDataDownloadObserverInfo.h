/* Runtime dump - TSPDataDownloadObserverInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataDownloadObserverInfo : TSPDataObserverInfo

- (char)shouldNotifyStatus:(int)arg0;
- (char)shouldClearObserverForStatus:(int)arg0;
- (TSPDataDownloadObserverInfo *)initWithDownloadObserver:(SSDownload *)arg0 data:(NSData *)arg1 options:(unsigned int)arg2 isInternalObserver:(char)arg3 completionHandler:(id /* block */)arg4;

@end
