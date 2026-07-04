/* Runtime dump - TSPPasteboardReadAssistant
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate>
{
    char _isCrossAppPaste;
    char _isCrossDocumentPaste;
    NSDictionary * _dataInfos;
    TSPObjectContext * _pasteboardContext;
    TSPPasteboardObject * _pasteboardObject;
}

@property (readonly, nonatomic) TSPObjectContext * pasteboardContext;
@property (readonly, nonatomic) TSPPasteboardObject * pasteboardObject;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSPPasteboardReadAssistant *)contentDescriptionFromPasteboard:(id)arg0;

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
- (TSPPasteboardReadAssistant *)initWithPasteboard:(TSPPasteboard *)arg0 targetContext:(NSObject *)arg1;
- (TSPObjectContext *)pasteboardContext;
- (TSPPasteboardObject *)pasteboardObject;
- (void).cxx_destruct;

@end
