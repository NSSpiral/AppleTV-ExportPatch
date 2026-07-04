/* Runtime dump - CPLProxySession
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxySession : CPLPlatformObject <CPLChangeSessionImplementation>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)beginSessionForProxy:(NSObject *)arg0 knownVersion:(NSString *)arg1 completionHandler:(id /* block */)arg2;

- (void)tearDownWithCompletionHandler:(id /* block */)arg0;
- (void)beginSessionWithKnownLibraryVersion:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (id)proxyWithErrorHandler:(SSErrorHandler *)arg0;
- (void)dispatchBlockWhenLibraryIsOpen:(id)arg0;
- (CPLProxyLibraryManager *)proxyLibraryManager;
- (void)finalizeWithCompletionHandler:(id /* block */)arg0;

@end
