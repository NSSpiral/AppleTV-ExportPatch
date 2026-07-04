/* Runtime dump - SCRCMathSpaceExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathSpaceExpression : SCRCMathExpression

- (SCRCMathSpaceExpression *)initWithDictionary:(NSDictionary *)arg0;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1;
- (char)beginsWithSpace;
- (char)endsWithSpace;
- (NSString *)mathMLString;

@end
