/* Runtime dump - TSPSupportPackageReadCoordinator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPSupportPackageReadCoordinator : TSPPackageReadCoordinator
{
    TSPPackage * _documentPackage;
    NSObject<OS_dispatch_queue> * _documentComponentReadQueue;
}

- (TSPSupportPackageReadCoordinator *)initWithContext:(NSObject *)arg0 package:(TSPDirectoryPackage *)arg1 packageURLOrNil:(id)arg2 finalizeHandlerQueue:(TSPFinalizeHandlerQueue *)arg3 documentResourceDataProvider:(TSPDocumentResourceDataProvider *)arg4 areExternalDataReferencesAllowed:(char)arg5 skipDocumentUpgrade:(char)arg6;
- (TSPSupportPackageReadCoordinator *)initWithContext:(NSObject *)arg0 package:(TSPDirectoryPackage *)arg1 packageURLOrNil:(id)arg2 finalizeHandlerQueue:(TSPFinalizeHandlerQueue *)arg3 documentResourceDataProvider:(TSPDocumentResourceDataProvider *)arg4 areExternalDataReferencesAllowed:(char)arg5 skipDocumentUpgrade:(char)arg6 documentPackage:(TSPPackage *)arg7;
- (char)endReading;
- (long long)metadataObjectIdentifier;
- (void)prepareToReadComponentWithIdentifier:(long long)arg0 forObjectIdentifier:(long long)arg1 isWeakReference:(char)arg2 queue:(NSObject *)arg3 completion:(id /* block */)arg4;
- (void).cxx_destruct;

@end
