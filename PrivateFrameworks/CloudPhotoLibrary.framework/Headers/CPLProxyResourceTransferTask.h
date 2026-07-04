/* Runtime dump - CPLProxyResourceTransferTask
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxyResourceTransferTask : CPLResourceTransferTask
{
    CPLProxyLibraryManager * _proxyLibraryManager;
}

@property (retain, nonatomic) CPLProxyLibraryManager * proxyLibraryManager;

- (void).cxx_destruct;
- (void)setProxyLibraryManager:(CPLProxyLibraryManager *)arg0;
- (CPLProxyLibraryManager *)proxyLibraryManager;
- (void)cancelTask;

@end
