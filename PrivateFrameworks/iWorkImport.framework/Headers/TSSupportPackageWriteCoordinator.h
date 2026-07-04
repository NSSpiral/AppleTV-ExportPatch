/* Runtime dump - TSSupportPackageWriteCoordinator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSupportPackageWriteCoordinator : TSPPackageWriteCoordinator
{
    TSPPackageWriteCoordinator * _packageWriteCoordinator;
}

- (TSSupportPackageWriteCoordinator *)initWithContext:(TSPObjectContext *)arg0 documentRevision:(TSPDocumentRevision *)arg1 saveToken:(unsigned long long)arg2 packageIdentifier:(unsigned char)arg3 fileFormatVersion:(unsigned long long)arg4 preferredPackageType:(int)arg5 metadataObject:(TSPObject *)arg6 dataAttributesSnapshot:(TSPDataAttributesSnapshot *)arg7;
- (TSSupportPackageWriteCoordinator *)initWithContext:(NSObject *)arg0 documentRevision:(TSPDocumentRevision *)arg1 saveToken:(unsigned long long)arg2 fileFormatVersion:(unsigned long long)arg3 metadataObject:(TSPObject *)arg4 dataAttributesSnapshot:(TSPDataAttributesSnapshot *)arg5 packageWriteCoordinator:(TSPPackageWriteCoordinator *)arg6;
- (NSString *)objectForIdentifier:(long long)arg0;
- (void)didReferenceData:(NSData *)arg0;
- (char)shouldEnqueueComponent:(id)arg0;
- (char)isObjectInExternalPackage:(id)arg0 claimingComponent:(id *)arg1;
- (char)isComponentExternal:(id)arg0 wasWritten:(char *)arg1 wasCopied:(char *)arg2;
- (char)componentWriter:(NSObject *)arg0 externalPackageDidWriteObject:(NSObject *)arg1 claimingComponent:(id *)arg2;
- (long long)componentIdentifierForObjectIdentifier:(long long)arg0 objectOrNil:(id)arg1 objectUUIDOrNil:(id)arg2;
- (void).cxx_destruct;

@end
