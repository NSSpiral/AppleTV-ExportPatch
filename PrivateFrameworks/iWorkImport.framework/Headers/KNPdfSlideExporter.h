/* Runtime dump - KNPdfSlideExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPdfSlideExporter : KNSlideExporter <TSKEncryptedDocumentExporter>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setPassphrase:(NSString *)arg0 hint:(id)arg1;
- (void)setPrintPassphrase:(id)arg0 hint:(id)arg1;
- (void)setCopyPassphrase:(id)arg0 hint:(id)arg1;
- (NSObject *)p_renderingExporterDelegate;

@end
