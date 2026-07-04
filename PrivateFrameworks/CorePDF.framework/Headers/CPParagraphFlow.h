/* Runtime dump - CPParagraphFlow
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPParagraphFlow : NSObject
{
    CPParagraph * paragraph;
    float fLeft;
    float fRight;
    float fTop;
    float fBottom;
    NSMutableArray * paragraphsAbove;
    NSMutableArray * paragraphsBelow;
    NSMutableArray * paragraphsLeft;
    NSMutableArray * paragraphsRight;
    char placed;
    char adjacentToCallout;
    int calloutType;
    CPParagraph * nextInColumn;
}

@property (retain, nonatomic) CPParagraph * paragraph;
@property (nonatomic) CPParagraph * nextInColumn;
@property float fLeft;
@property float fRight;
@property float fBottom;
@property char placed;
@property int calloutType;

- (void)dealloc;
- (NSString *)description;
- (int)leftOrder;
- (int)rightOrder;
- (int)outOrder;
- (int)inOrder;
- (void)setCalloutType:(int)arg0;
- (NSMutableArray *)paragraphsLeft;
- (NSMutableArray *)paragraphsRight;
- (float)dBelow;
- (float)dAbove;
- (NSMutableArray *)paragraphsAbove;
- (int)calloutType;
- (struct CGRect)belowBounds;
- (void)setParagraphsAboveIn:(id)arg0;
- (void)setParagraphsBelowIn:(id)arg0;
- (void)setParagraphsLeftIn:(id)arg0;
- (void)setParagraphsRightIn:(id)arg0;
- (int)topDescending:(id)arg0;
- (char)placed;
- (void)setPlaced:(char)arg0;
- (id)nextParagraphInColumn:(id)arg0;
- (char)intervalOverlapLeft:(float)arg0 right:(float)arg1 paragraphs:(id)arg2;
- (char)intervalOverlapLeft:(float)arg0 right:(float)arg1 rects:(NSArray *)arg2;
- (char)intervalOverlapTop:(float)arg0 bottom:(float)arg1 paragraphs:(id)arg2;
- (int)inOrder:(char)arg0;
- (NSMutableArray *)paragraphsBelow;
- (void)setNextInColumn:(CPParagraph *)arg0;
- (NSObject *)simpleRule:(unsigned int)arg0;
- (id)ignoreCallouts:(unsigned int)arg0;
- (id)twoSides:(unsigned int)arg0;
- (id)belowTwoSides:(unsigned int)arg0;
- (void)removeFromBelow:(id)arg0;
- (void)removeFromAbove:(UITextEffectsWindowNoAbove *)arg0;
- (void)replaceBelow:(id)arg0 withOneOf:(id)arg1;
- (void)replaceAbove:(id)arg0 withOneOf:(id)arg1;
- (void)setParagraph:(CPParagraph *)arg0;
- (float)fLeft;
- (void)setFLeft:(float)arg0;
- (float)fRight;
- (void)setFRight:(float)arg0;
- (float)fBottom;
- (void)setFBottom:(float)arg0;
- (CPParagraph *)nextInColumn;
- (float)area;
- (CPParagraph *)paragraph;
- (CPParagraphFlow *)initWithParagraph:(CPParagraph *)arg0;

@end
