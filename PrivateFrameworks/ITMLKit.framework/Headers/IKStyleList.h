/* Runtime dump - IKStyleList
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKStyleList : NSObject
{
    char _requiresMediaQueryEvaluation;
    NSString * _classSelector;
    IKStyleList * _baseStyleList;
    NSArray * _styles;
    IKViewElementStyle * _resolvedStyle;
}

@property (readonly, copy, nonatomic) NSString * classSelector;
@property (readonly, retain, nonatomic) IKStyleList * baseStyleList;
@property (readonly, copy, nonatomic) NSArray * styles;
@property (readonly, nonatomic) char requiresMediaQueryEvaluation;
@property (retain, nonatomic) IKViewElementStyle * resolvedStyle;

- (void).cxx_destruct;
- (NSString *)classSelector;
- (char)requiresMediaQueryEvaluation;
- (void)_resolveWithMediaQueryEvaluator:(MPMediaQuery *)arg0;
- (IKViewElementStyle *)resolvedStyle;
- (void)setResolvedStyle:(IKViewElementStyle *)arg0;
- (IKStyleList *)baseStyleList;
- (void)setNeedsReresolution;
- (id)resolvedStyleWithMediaQueryEvaluator:(MPMediaQuery *)arg0;
- (IKStyleList *)initWithClassSelector:(NSString *)arg0 styles:(NSArray *)arg1 baseStyleList:(IKStyleList *)arg2;
- (NSArray *)styles;

@end
