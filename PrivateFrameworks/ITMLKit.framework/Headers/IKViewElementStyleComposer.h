/* Runtime dump - IKViewElementStyleComposer
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElementStyleComposer : NSObject
{
    char _requiresMediaQueryEvaluation;
    IKViewElementStyleComposer * _defaultStyleComposer;
    IKViewElementStyleComposer * _parentStyleComposer;
    IKStyleList * _styleList;
    IKViewElementStyle * _elementStyleOverrides;
    IKViewElementStyle * _composedSansDefaultStyle;
    IKViewElementStyle * _composedStyle;
}

@property (readonly, retain, nonatomic) IKViewElementStyleComposer * defaultStyleComposer;
@property (readonly, retain, nonatomic) IKViewElementStyleComposer * parentStyleComposer;
@property (readonly, retain, nonatomic) IKStyleList * styleList;
@property (readonly, retain, nonatomic) IKViewElementStyle * elementStyleOverrides;
@property (readonly, nonatomic) char requiresMediaQueryEvaluation;
@property (retain, nonatomic) IKViewElementStyle * composedSansDefaultStyle;
@property (retain, nonatomic) IKViewElementStyle * composedStyle;

+ (IKViewElementStyleComposer *)styleComposerWithDefaultStyleComposer:(IKViewElementStyleComposer *)arg0 parentStyleComposer:(IKViewElementStyleComposer *)arg1 styleList:(IKStyleList *)arg2 elementStyleOverrides:(IKViewElementStyle *)arg3;

- (void).cxx_destruct;
- (char)requiresMediaQueryEvaluation;
- (IKViewElementStyleComposer *)initWithDefaultStyleComposer:(IKViewElementStyleComposer *)arg0 parentStyleComposer:(IKViewElementStyleComposer *)arg1 styleList:(IKStyleList *)arg2 elementStyleOverrides:(IKViewElementStyle *)arg3;
- (void)_composeWithMediaQueryEvaluator:(MPMediaQuery *)arg0;
- (IKViewElementStyle *)composedStyle;
- (void)setComposedSansDefaultStyle:(IKViewElementStyle *)arg0;
- (void)setComposedStyle:(IKViewElementStyle *)arg0;
- (IKStyleList *)styleList;
- (IKViewElementStyleComposer *)defaultStyleComposer;
- (void)setNeedsRecomposition;
- (IKViewElementStyle *)composedSansDefaultStyle;
- (IKViewElementStyleComposer *)parentStyleComposer;
- (id)composedSansDefaultStyleWithMediaQueryEvaluator:(MPMediaQuery *)arg0;
- (IKViewElementStyle *)elementStyleOverrides;
- (id)composedStyleWithMediaQueryEvaluator:(MPMediaQuery *)arg0;

@end
