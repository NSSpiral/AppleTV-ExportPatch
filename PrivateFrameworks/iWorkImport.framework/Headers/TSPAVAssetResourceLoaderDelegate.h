/* Runtime dump - TSPAVAssetResourceLoaderDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    TSPData * _data;
    long long _dataLength;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _requestHandlingQueue;
    <TSUReadChannel> * _readChannel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_provideContentInformationToLoadingRequest:(NSURLRequest *)arg0;
- (void)_provideDataToLoadingRequest:(NSURLRequest *)arg0;
- (void)_provideNextDataBlockToLoadingRequest:(NSURLRequest *)arg0 completion:(id /* block */)arg1;
- (void)dealloc;
- (TSPAVAssetResourceLoaderDelegate *)initWithData:(TSPData *)arg0;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (char)resourceLoader:(AVAssetResourceLoader *)arg0 shouldWaitForLoadingOfRequestedResource:(NSObject *)arg1;

@end
