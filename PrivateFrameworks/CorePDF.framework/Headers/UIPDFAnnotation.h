/* Runtime dump - UIPDFAnnotation
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFAnnotation : NSObject
{
    struct CGPDFDictionary * _dictionary;
    struct CGColor * _color;
    void * _appearanceStream;
    struct CGPDFString * _pdfContents;
    NSString * _annotationID;
    char _hidden;
    UIPDFAnnotationView * _annotationView;
    UIPDFAnnotationController * _annotationController;
    NSMutableArray * _quadPoints;
    CALayer * _drawingLayer;
    UIPDFSelection * _selection;
    char editable;
    id data;
    NSString * _contents;
    int _index;
    UIPDFPopupAnnotation * _popup;
    NSString * _associatedAnnotationID;
    UIPDFPage * _page;
    unsigned int _tag;
}

@property (retain, nonatomic) CALayer * drawingLayer;
@property (retain, nonatomic) UIPDFAnnotationView * annotationView;
@property (nonatomic) UIPDFPage * page;
@property (nonatomic) UIPDFAnnotationController * annotationController;
@property (readonly, nonatomic) char recognizeGestures;
@property (nonatomic) char editable;
@property (nonatomic) UIPDFSelection * selection;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSString * contents;
@property (nonatomic) int index;
@property (nonatomic) UIPDFPopupAnnotation * popup;
@property (retain, nonatomic) NSString * associatedAnnotationID;
@property (nonatomic) unsigned int tag;

+ (UIPDFAnnotation *)newAnnotationWithPage:(UIPDFPage *)arg0 fromArchive:(GQZArchive *)arg1;

- (void)setAnnotationView:(UIPDFAnnotationView *)arg0;
- (UIPDFAnnotationView *)annotationView;
- (void)dealloc;
- (struct CGRect)bounds;
- (UIPDFAnnotation *)init;
- (struct CGRect)frame;
- (char)containsPoint:(struct CGPoint)arg0;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (NSString *)contents;
- (unsigned int)tag;
- (void)setTag:(unsigned int)arg0;
- (void)setContents:(NSString *)arg0;
- (void)drawLayer:(CALayer *)arg0 inContext:(struct CGContext *)arg1;
- (UIPDFSelection *)selection;
- (void)setSelection:(UIPDFSelection *)arg0;
- (void)setEditable:(char)arg0;
- (struct CGColor *)color;
- (void)setColor:(struct CGColor *)arg0;
- (int)index;
- (char)editable;
- (UIPDFPage *)page;
- (void)setPage:(UIPDFPage *)arg0;
- (void)drawInContext:(struct CGContext *)arg0;
- (Class)viewClass;
- (UIPDFAnnotationController *)annotationController;
- (struct CGRect)Rect;
- (void)setIndex:(int)arg0;
- (void)setPopup:(UIPDFPopupAnnotation *)arg0;
- (UIPDFPopupAnnotation *)popup;
- (void)setPageView:(UIPDFPageView *)arg0;
- (void)setAnnotationID:(NSString *)arg0;
- (void)setAssociatedAnnotationID:(NSString *)arg0;
- (void)setDrawingLayer:(CALayer *)arg0;
- (id)newSelection;
- (NSString *)annotationID;
- (struct CGRect)rectIn:(id)arg0;
- (void)makeQuadpointsFrom:(NSObject *)arg0;
- (UIPDFAnnotation *)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg0;
- (id)getImageNamed:(id)arg0 ofType:(NSString *)arg1;
- (char)hasPopUp;
- (char *)pdfContents;
- (struct CGRect)popUpAnnotationRect;
- (NSString *)descriptionHOLD;
- (void)setAnnotationController:(UIPDFAnnotationController *)arg0;
- (NSString *)associatedAnnotationID;
- (struct CGPath *)newPathFromQuadPoints;
- (char)recognizeGestures;
- (CALayer *)drawingLayer;
- (int)annotationType;
- (char)hidden;
- (QLZipArchive *)archive;

@end
