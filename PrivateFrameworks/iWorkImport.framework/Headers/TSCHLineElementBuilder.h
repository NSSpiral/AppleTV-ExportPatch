/* Runtime dump - TSCHLineElementBuilder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLineElementBuilder : TSCHScatterElementBuilder

- (void)p_addKnobsForPoint:(struct CGPoint)arg0 strokedUnitSymbolRect:(struct CGRect)arg1 toKnobSet:(struct CGSize)arg2 symbolsShowing:(id)arg3 includePoint:(NSObject *)arg4;
- (struct CGPoint)labelPointForPosition:(unsigned int)arg0 rect:(struct CGRect)arg1 stringSize:(struct CGSize)arg2 symbolType:(int)arg3;
- (char)needsSeparateHitTestingPaths;

@end
