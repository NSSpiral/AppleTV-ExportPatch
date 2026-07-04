/* Runtime dump - KNPreviewExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPreviewExporter : KNSlideExporter <TSKImageExporter>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) char scaleToFit;

- (NSObject *)p_renderingExporterDelegate;
- (char)scaleToFit;
- (void)setScaleToFit:(char)arg0;
- (unsigned int)width;
- (unsigned int)height;
- (void)setWidth:(unsigned int)arg0;
- (void)setHeight:(unsigned int)arg0;
- (void)setup;

@end
