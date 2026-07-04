/* Runtime dump - SCRCMathRowExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathRowExpression : SCRCMathArrayExpression

- (char)isNumber;
- (int)integerValue;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1;
- (id)latexDescriptionInMathMode:(char)arg0;
- (unsigned int)fractionLevel;
- (id)speakableSummary;
- (char)canBeUsedWithRange;
- (char)canBeUsedWithBase;
- (char)isInteger;
- (char)isFunctionName;
- (char)isWordOrAbbreviation;
- (char)beginsWithSpace;
- (char)endsWithSpace;
- (NSObject *)childSpeakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 parentTreePosition:(NSObject *)arg2 childIndex:(unsigned int *)arg3;
- (id)_indexesOfCharactersInWords;
- (void)_addSpacingAndChild:(NSObject *)arg0 toResult:(NSObject *)arg1 nextChild:(NSObject *)arg2 previousChild:(NSObject *)arg3 numberOfOuterRadicals:(unsigned int)arg4 treePosition:(NSObject *)arg5;
- (NSString *)mathMLTag;

@end
