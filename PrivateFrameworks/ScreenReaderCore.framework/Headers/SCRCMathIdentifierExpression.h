/* Runtime dump - SCRCMathIdentifierExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression
{
    int _fontStyle;
}

@property (readonly, nonatomic) int fontStyle;

- (char)isNumber;
- (NSString *)description;
- (SCRCMathIdentifierExpression *)initWithDictionary:(NSDictionary *)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1 isPartOfWord:(char)arg2;
- (char)isNaturalSuperscript;
- (char)canFormWordStartingWithExpression:(NSObject *)arg0;
- (char)_isPrime;
- (NSString *)mathMLString;
- (int)fontStyle;

@end
