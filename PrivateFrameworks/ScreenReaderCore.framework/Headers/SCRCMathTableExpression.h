/* Runtime dump - SCRCMathTableExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathTableExpression : SCRCMathArrayExpression

- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2;
- (unsigned int)numberOfTables;
- (id)latexDescriptionInMathMode:(char)arg0;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1 openOperator:(id)arg2 openOperatorTreePosition:(NSObject *)arg3 closeOperator:(id)arg4 closeOperatorTreePosition:(NSObject *)arg5;
- (char)isMultiRowTable;
- (char)canBeWrappedInLatexMathIndicators;
- (NSString *)mathMLTag;
- (unsigned int)_numberOfColumns;

@end
