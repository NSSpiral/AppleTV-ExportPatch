/* Runtime dump - CPGenericVisitor
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPGenericVisitor : NSObject <CPVisitor>

- (void)visitChunk:(id)arg0;
- (void)visitPage:(id)arg0;
- (void)visitShape:(id)arg0;
- (void)visitCompoundGraphic:(id)arg0;
- (void)visitImage:(UIImage *)arg0;
- (void)visitRegion:(NSObject *)arg0;
- (void)visitTextLine:(id)arg0;
- (void)visitParagraph:(id)arg0;
- (void)visitColumn:(id)arg0;
- (void)visitLayoutArea:(id)arg0;
- (void)visitTextBox:(id)arg0;
- (void)visitImageRegion:(NSObject *)arg0;
- (void)visitShapeRegion:(NSObject *)arg0;
- (void)visitZone:(NSObject *)arg0;
- (void)visitRotation:(id)arg0;
- (void)visitBody:(NSObject *)arg0;

@end
