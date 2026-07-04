/* Runtime dump - CPZoneMaker
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPZoneMaker : NSObject
{
    CPCharSequence * charactersOnPage;
}

- (void)dealloc;
- (void)makeZonesIn:(id)arg0;
- (unsigned int)categorizeGraphicsIn:(id)arg0;
- (void)mergeQualifyingRectanglesIn:(id)arg0;
- (void)makeZonesWithBoundaryIn:(id)arg0;
- (void)cutHorizontalBorders:(id)arg0 whereObscuredByShape:(id)arg1;
- (void)cutVerticalBorders:(id)arg0 whereObscuredByShape:(id)arg1;
- (NSObject *)newZoneForStraddlersFrom:(NSObject *)arg0;
- (void)addObjectsToStraddler:(id)arg0 from:(NSObject *)arg1;
- (char)overlap:(float)arg0 with:(id)arg1;

@end
