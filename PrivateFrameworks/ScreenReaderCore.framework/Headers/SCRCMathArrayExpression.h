/* Runtime dump - SCRCMathArrayExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathArrayExpression : SCRCMathExpression
{
    NSArray * _children;
}

@property (readonly, nonatomic) NSString * mathMLTag;
@property (readonly, nonatomic) NSArray * mathMLAttributes;

- (void)dealloc;
- (NSString *)description;
- (SCRCMathArrayExpression *)initWithDictionary:(NSDictionary *)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (NSArray *)subExpressions;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2;
- (char)hasSimpleArrayOfChildren;
- (NSObject *)childSpeakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 parentTreePosition:(NSObject *)arg2 childIndex:(unsigned int *)arg3;
- (NSString *)mathMLTag;
- (NSObject *)prefixForChildAtIndex:(unsigned int)arg0;
- (NSObject *)suffixForChildAtIndex:(unsigned int)arg0;
- (NSArray *)mathMLAttributes;
- (NSObject *)localizablePrefixForChildAtIndex:(unsigned int)arg0;
- (NSObject *)localizableSuffixForChildAtIndex:(unsigned int)arg0;
- (NSString *)mathMLString;
- (NSArray *)children;

@end
