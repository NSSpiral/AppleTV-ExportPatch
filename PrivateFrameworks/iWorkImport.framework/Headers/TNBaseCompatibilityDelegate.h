/* Runtime dump - TNBaseCompatibilityDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)nestedDocumentFilename;
- (Class)exporterClassForType:(NSObject *)arg0 options:(NSDictionary *)arg1;
- (char)isSageDocumentType:(NSObject *)arg0;
- (Class)importerClassForType:(NSObject *)arg0;
- (Class)exportOptionsControllerClass;
- (NSArray *)exportableTypes;
- (char)isTCMessageExceptionErrorDomain:(NSString *)arg0;
- (NSString *)indexXmlFilename;
- (NSString *)needNewerVersionIndexXmlContentString;
- (NSObject *)backwardsCompatibleTypeForType:(NSObject *)arg0;
- (id)newExportableDocumentTypesForFlag:(unsigned int)arg0;

@end
