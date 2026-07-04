/* Runtime dump - KNSlideExporter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideExporter : KNRenderingExporter

- (struct CGRect)boundsRect;
- (char)drawCurrentPageInContext:(struct CGContext *)arg0 viewScale:(float)arg1 unscaledClipRect:(struct CGRect)arg2 createPage:(struct CGSize)arg3;
- (char)incrementPage;
- (void)setCurrentSlideNode:(KNSlideNode *)arg0;
- (void)setup;

@end
