/* Runtime dump - TNPdfExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPdfExporter : TNRenderingExporter <TSKEncryptedDocumentExporter>
{
    NSDictionary * mOptions;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setPassphrase:(NSString *)arg0 hint:(id)arg1;
- (void)setPrintPassphrase:(id)arg0 hint:(id)arg1;
- (void)setCopyPassphrase:(id)arg0 hint:(id)arg1;
- (NSObject *)p_renderingExporterDelegate;
- (void)dealloc;
- (void)setOptions:(NSDictionary *)arg0;

@end
