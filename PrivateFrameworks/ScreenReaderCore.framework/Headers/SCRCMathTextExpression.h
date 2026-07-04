/* Runtime dump - SCRCMathTextExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathTextExpression : SCRCMathSimpleExpression

- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (id)latexDescriptionInMathMode:(char)arg0;
- (NSString *)mathMLString;

@end
