/* Runtime dump - TSWPTOCRep
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTOCRep : TSWPShapeRep

- (NSObject *)hitRep:(struct CGPoint)arg0;
- (TSWPTOCInfo *)tocInfo;
- (unsigned int)charIndexAtPoint:(struct CGPoint)arg0;
- (NSObject *)paragraphStylesBetweenCharIndex:(unsigned int)arg0 andCharIndex:(unsigned int)arg1;
- (char)shouldCreateKnobs;
- (char)shouldShowKnobs;
- (char)canMakePathEditable;
- (NSObject *)i_paragraphStyleAtPoint:(struct CGPoint)arg0;
- (unsigned int)i_indexOfHitTOCEntryAtPoint:(struct CGPoint)arg0;

@end
