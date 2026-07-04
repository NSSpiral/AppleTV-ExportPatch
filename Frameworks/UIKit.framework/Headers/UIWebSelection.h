/* Runtime dump - UIWebSelection
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelection : NSObject
{
    UIWebDocumentView * _documentView;
    <UIWebSelectionBlock> * _base;
    <UIWebSelectionBlock> * _extent;
    struct CGSize _desiredSize;
    UITextSelection * _textSelection;
}

@property (readonly, nonatomic) UIWebDocumentView * documentView;
@property (readonly, nonatomic) UITextSelection * textSelection;
@property (readonly, nonatomic) char valid;
@property (readonly, nonatomic) struct CGRect boundingRect;
@property (nonatomic) struct CGSize desiredSize;
@property (readonly, nonatomic) char textOnly;
@property (retain, nonatomic) <UIWebSelectionBlock> * base;
@property (retain, nonatomic) <UIWebSelectionBlock> * extent;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (<UIWebSelectionBlock> *)extent;
- (void)setSelectionWithPoint:(struct CGPoint)arg0;
- (void)selectionChanged;
- (UIWebView *)webView;
- (UIWebDocumentView *)documentView;
- (UITextSelection *)textSelection;
- (WebFrame *)webFrame;
- (id)textSelectionRects;
- (NSObject *)elementAtPoint:(struct CGPoint)arg0;
- (UIWebSelection *)initWithDocumentView:(UIWebDocumentView *)arg0;
- (void)setSelectionWithPoint:(struct CGPoint)arg0 ignoringLargeBlocks:(char)arg1;
- (char)valid;
- (struct CGRect)boundingRect;
- (char)isTextOnly;
- (struct CGRect)boundingTextSelectionRectAndInsideFixedPosition:(NSObject *)arg0;
- (struct CGRect)boundingRectAndInsideFixedPosition:(NSObject *)arg0;
- (char)blockContainsPoint:(struct CGPoint)arg0;
- (<UIWebSelectionBlock> *)base;
- (void)applySelectionToWebDocumentView;
- (void)setBase:(<UIWebSelectionBlock> *)arg0;
- (void)setExtent:(<UIWebSelectionBlock> *)arg0;
- (NSObject *)blockAtPoint:(struct CGPoint)arg0;
- (struct CGSize)desiredSize;
- (NSObject *)asDomRange;
- (WebArchive *)webArchive;
- (void)shrinkSelectionFromPoint:(struct CGPoint)arg0 towardsPoint:(struct CGPoint)arg1 withNewRect:(struct CGRect)arg2;
- (void)growSelectionTowardsPoint:(struct CGPoint)arg0;
- (void)useBlock;
- (float)distanceBetweenFirstRect:(struct CGRect)arg0 second:(struct CGSize)arg1 edge:(struct shared_ptr<geo::MapEdgeRoad>)arg2;
- (id)duplicate;
- (void)setDesiredSize:(struct CGSize)arg0;
- (char)tryToShrinkToBaseAndExtent;
- (char)isEqualToSelection:(id)arg0;
- (void)growFromEdge:(int)arg0;
- (void)shrinkFromEdge:(int)arg0;
- (NSObject *)domDocument;
- (NSObject *)blockOfSameWidthAtPoint:(struct CGPoint)arg0;
- (NSDictionary *)textRepresentation;
- (void)adjustSelectionFromPoint:(struct CGPoint)arg0 towardsPoint:(struct CGPoint)arg1 withNewRect:(struct CGRect)arg2;
- (void)moveEdge:(int)arg0 outwards:(char)arg1;
- (struct CGRect)boundingTextSelectionRect;

@end
