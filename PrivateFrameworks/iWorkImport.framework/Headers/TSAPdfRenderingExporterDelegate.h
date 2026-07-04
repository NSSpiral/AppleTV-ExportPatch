/* Runtime dump - TSAPdfRenderingExporterDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate>
{
    TSARenderingExporter * mRenderingExporter;
    NSString * mPassphraseOpen;
    NSString * mPassphrasePrintCopy;
    char mRequireOpenPassword;
    char mRequireCopyPassword;
    char mRequirePrintPassword;
    int mRenderingQuality;
}

- (void)setPassphrase:(NSString *)arg0 hint:(id)arg1;
- (void)setPrintPassphrase:(id)arg0 hint:(id)arg1;
- (void)setCopyPassphrase:(id)arg0 hint:(id)arg1;
- (float)viewScale;
- (struct CGContext *)newCGContextForURL:(NSURL *)arg0;
- (void)releaseCGContext:(struct CGContext *)arg0;
- (char)supportsPaging;
- (char)supportsRenderingQuality;
- (int)renderingQuality;
- (TSAPdfRenderingExporterDelegate *)initWithRenderingExporter:(TSARenderingExporter *)arg0;
- (void)setRenderingQuality:(int)arg0;
- (void)dealloc;
- (void)setup;
- (void)teardown;

@end
