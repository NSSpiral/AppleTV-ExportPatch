/* Runtime dump - CPTextLineMerge
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTextLineMerge : NSObject
{
    NSMutableArray * avail;
}

- (void)mergeLinesIn:(id)arg0;
- (char)fits:(id)arg0 into:(id)arg1;
- (void)mergeColumn:(id)arg0;
- (void)addInterval:(UIKBKeyInterval *)arg0 to:(NSObject *)arg1;
- (void)mergeLinesInInterval:(id)arg0 from:(NSObject *)arg1;
- (void)detachDropCaps:(id)arg0 to:(NSObject *)arg1;
- (float)averageHeight:(id)arg0;
- (unsigned int)countOverlapsOfLineAtIndex:(unsigned int)arg0 in:(id)arg1;
- (id)findLineFor:(id)arg0 in:(id)arg1;
- (char)hasOverlappingLines;
- (void)makeOverlappingLinesTo:(id)arg0;
- (void)dropCaps:(id)arg0 to:(NSObject *)arg1;
- (void)eliminate:(id)arg0;
- (void)mergeByColumn:(id)arg0;
- (void)removeOverlapping:(id)arg0;

@end
