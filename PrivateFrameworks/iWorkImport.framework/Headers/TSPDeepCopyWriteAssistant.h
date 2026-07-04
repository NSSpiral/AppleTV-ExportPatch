/* Runtime dump - TSPDeepCopyWriteAssistant
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDeepCopyWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate>
{
    TSPObjectContext * _context;
    char _resetObjectUUIDs;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)encodeDeepCopyOfObject:(NSObject *)arg0 options:(NSDictionary *)arg1 completion:(id /* block */)arg2;
- (int)componentWriterMode;
- (NSObject *)createMetadataForRootObject:(NSObject *)arg0 dataArchiver:(id)arg1 objectUUIDToIdentifierDictionary:(NSDictionary *)arg2 externalReferences:(id)arg3 weakExternalReferences:(id)arg4 lazyReferences:(NSHashTable *)arg5 dataReferences:(NSHashTable *)arg6 error:(id *)arg7;
- (char)skipMetadataObjectSerialization;
- (TSPDeepCopyWriteAssistant *)init;
- (TSPDeepCopyWriteAssistant *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_destruct;

@end
