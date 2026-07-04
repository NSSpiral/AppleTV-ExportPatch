/* Runtime dump - TSPDeepCopyReadAssistant
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDeepCopyReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate>
{
    TSPObjectContext * _context;
    TSPObject * _cachedMetadataObject;
    NSDictionary * _cachedDataMap;
    TSPComponent * _component;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (unsigned long long)fileFormatVersion;
- (char)hasDocumentVersionUUID;
- (long long)objectIdentifierForUUID:(id)arg0;
- (TSPObject *)cachedMetadataObject;
- (id)metadataComponent;
- (char)processMetadataObject:(NSObject *)arg0 error:(id *)arg1;
- (TSPComponent *)rootObjectComponent;
- (char)canResolveExternalReferences;
- (char)shouldResolveExternalReferencesUsingObjectUUID;
- (NSString *)objectUUIDForExternalReferenceToIdentifier:(long long)arg0;
- (NSString *)cachedDataForIdentifier:(long long)arg0;
- (NSString *)dataInfoForIdentifier:(long long)arg0;
- (char)isFromCopy;
- (char)isCrossDocumentPaste;
- (char)isCrossAppPaste;
- (TSPDeepCopyReadAssistant *)initWithContext:(TSPObjectContext *)arg0 cachedMetadataObject:(TSPObject *)arg1 cachedDataMap:(NSDictionary *)arg2;
- (NSData *)decodeDeepCopySerializedData:(NSData *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
- (TSPDeepCopyReadAssistant *)init;
- (void).cxx_destruct;

@end
