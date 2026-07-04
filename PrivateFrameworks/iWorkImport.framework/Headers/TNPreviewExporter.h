/* Runtime dump - TNPreviewExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNPreviewExporter : TNRenderingExporter <TSKImageExporter>
{
    struct CGRect mClipRect;
}

@property (nonatomic) struct CGRect clipRect;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) char scaleToFit;

- (TNPreviewExporter *)initWithDocumentRoot:(NSObject *)arg0;
- (NSObject *)p_renderingExporterDelegate;
- (struct CGRect)unscaledClipRect;
- (char)scaleToFit;
- (void)setScaleToFit:(char)arg0;
- (struct CGRect)clipRect;
- (void)setClipRect:(struct CGRect)arg0;
- (unsigned int)width;
- (unsigned int)height;
- (void).cxx_construct;
- (void)setWidth:(unsigned int)arg0;
- (void)setHeight:(unsigned int)arg0;

@end
