/* Runtime dump - CPHitTest
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPHitTest : NSObject
{
    CPPage * page;
    NSMutableArray * objectsOnPage;
    float mapTemp;
}

- (void)dealloc;
- (CPPage *)page;
- (CPHitTest *)initWithPage:(CPPage *)arg0;
- (void)findClickableObjects:(char)arg0;
- (NSObject *)objectAtPoint:(struct CGPoint)arg0;
- (id)paragraph:(struct CGPoint)arg0;
- (id)column:(struct CGPoint)arg0;
- (id)findObjectIn:(id)arg0 at:(struct CGPoint)arg1 count:(int *)arg2;
- (id)textLine:(struct CGPoint)arg0;
- (id)paragraphNear:(struct CGPoint)arg0;
- (id)layoutArea:(struct CGPoint)arg0;
- (unsigned int)columnsAt:(struct CGPoint)arg0;
- (int)compareByReadingOrder:(struct CGPoint)arg0 to:(struct CGPoint)arg1;
- (char)hitTestGraphicObject:(NSObject *)arg0 point:(struct CGPoint)arg1;
- (char)hitTestParagraph:(id)arg0 point:(struct CGPoint)arg1;
- (id)findBestMatch:(id)arg0 atPoint:(struct CGPoint)arg1;

@end
