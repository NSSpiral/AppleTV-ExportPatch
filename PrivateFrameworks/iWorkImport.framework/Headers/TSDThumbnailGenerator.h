/* Runtime dump - TSDThumbnailGenerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDThumbnailGenerator : NSObject
{
    TSDImager * _imager;
    TSKDocumentRoot * _documentRoot;
}

@property (nonatomic) struct CGColor * backgroundColor;

- (TSDThumbnailGenerator *)initWithDocumentRoot:(TSKDocumentRoot *)arg0;
- (NSObject *)drawImageSynchronouslyForThumbnailId:(NSObject *)arg0 producer:(<TSDThumbnailProducer> *)arg1;
- (void)generateThumbnailForThumbnailId:(NSObject *)arg0 consumer:(<DASearchQueryConsumer> *)arg1 producer:(<TSDThumbnailProducer> *)arg2 continueThumbnailing:(char)arg3;
- (void)idle;
- (void)generateThumbnailForConsumer:(NSObject *)arg0 producer:(<TSDThumbnailProducer> *)arg1;
- (char)p_initialReadCallback:(id /* block */)arg0;
- (void)p_writeCallback:(id /* block */)arg0;
- (void)p_mainThreadReadCallback:(id /* block */)arg0;
- (struct CGImage *)p_newThumbnailForProducer:(NSObject *)arg0 identifier:(NSString *)arg1;
- (void)dealloc;
- (void)setBackgroundColor:(struct CGColor *)arg0;
- (struct CGColor *)backgroundColor;

@end
