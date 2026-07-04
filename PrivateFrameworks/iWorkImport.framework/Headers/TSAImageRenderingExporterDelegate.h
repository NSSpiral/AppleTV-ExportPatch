/* Runtime dump - TSAImageRenderingExporterDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAImageRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate>
{
    TSARenderingExporter<TSKImageExporter> * mRenderingExporter;
    unsigned int mWidth;
    unsigned int mHeight;
    char mScaleToFit;
    NSURL * mURL;
    NSString * mImageType;
    float mCompressionFactor;
}

@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) char scaleToFit;
@property (retain, nonatomic) NSString * imageType;
@property (nonatomic) float compressionFactor;

- (float)viewScale;
- (struct CGContext *)newCGContextForURL:(NSURL *)arg0;
- (void)releaseCGContext:(struct CGContext *)arg0;
- (char)supportsPaging;
- (char)supportsRenderingQuality;
- (TSAImageRenderingExporterDelegate *)initWithRenderingExporter:(TSARenderingExporter *)arg0;
- (float)compressionFactor;
- (char)scaleToFit;
- (void)setScaleToFit:(char)arg0;
- (void)setCompressionFactor:(float)arg0;
- (unsigned int)width;
- (unsigned int)height;
- (void)setWidth:(unsigned int)arg0;
- (void)setHeight:(unsigned int)arg0;
- (void)setImageType:(NSString *)arg0;
- (void)setup;
- (void)teardown;
- (NSString *)imageType;

@end
