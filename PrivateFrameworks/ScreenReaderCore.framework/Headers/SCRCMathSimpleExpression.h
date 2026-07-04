/* Runtime dump - SCRCMathSimpleExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathSimpleExpression : SCRCMathExpression
{
    NSString * _content;
}

@property (copy, nonatomic) NSString * content;

- (void)dealloc;
- (NSString *)description;
- (SCRCMathSimpleExpression *)initWithDictionary:(NSDictionary *)arg0;
- (int)integerValue;
- (NSString *)content;
- (void)setContent:(NSString *)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1;
- (NSString *)latexMathModeDescription;
- (char)canBeUsedWithBase;
- (char)isInteger;
- (char)isFunctionName;
- (char)isWordOrAbbreviation;
- (NSArray *)_functionNames;

@end
