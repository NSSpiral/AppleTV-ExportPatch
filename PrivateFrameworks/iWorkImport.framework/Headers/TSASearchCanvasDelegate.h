/* Runtime dump - TSASearchCanvasDelegate
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSASearchCanvasDelegate : NSObject <TSDCanvasDelegate, TSKSearchCanvasDelegate>
{
    TSKDocumentRoot * mDocumentRoot;
    TSDCanvas * mCanvas;
}

@property (readonly, nonatomic) TSDCanvas * canvas;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSASearchCanvasDelegate *)initWithDocumentRoot:(NSObject *)arg0 canvas:(TSDCanvas *)arg1;
- (NSDictionary *)canvasSelectionPathForInfo:(NSDictionary *)arg0;
- (void)dealloc;
- (TSASearchCanvasDelegate *)init;
- (NSString *)documentRoot;
- (TSDCanvas *)canvas;

@end
