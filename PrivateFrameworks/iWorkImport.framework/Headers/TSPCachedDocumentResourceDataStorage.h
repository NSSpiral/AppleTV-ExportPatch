/* Runtime dump - TSPCachedDocumentResourceDataStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCachedDocumentResourceDataStorage : TSPDocumentResourceDataStorage
{
    char _isValidated;
}

- (char)needsDownload;
- (void)addDownloadObserver:(NSObject *)arg0 forData:(NSData *)arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)performReadWithAccessor:(TSCH3DScenePropertyAccessor *)arg0;
- (TSPCachedDocumentResourceDataStorage *)initWithManager:(NSObject *)arg0 documentResourceInfo:(TSPDocumentResourceInfo *)arg1 isValidated:(char)arg2;
- (TSPCachedDocumentResourceDataStorage *)initWithManager:(TSPDocumentResourceManager *)arg0 documentResourceInfo:(TSPDocumentResourceInfo *)arg1;
- (void)dealloc;
- (unsigned long long)length;
- (NSURL *)fileURL;
- (char)isReadable;
- (unsigned long long)encodedLength;

@end
