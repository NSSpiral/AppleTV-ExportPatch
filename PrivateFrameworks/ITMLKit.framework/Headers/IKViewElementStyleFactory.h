/* Runtime dump - IKViewElementStyleFactory
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKViewElementStyleFactory : NSObject
{
    IKStyleFactory * _styleFactory;
    IKTemplateStyleSheet * _styleSheet;
}

@property (readonly, retain, nonatomic) IKStyleFactory * styleFactory;
@property (readonly, retain, nonatomic) IKTemplateStyleSheet * styleSheet;

+ (IKViewElementStyleFactory *)styleFactoryWithMarkup:(id)arg0 styleSheet:(IKTemplateStyleSheet *)arg1;

- (void).cxx_destruct;
- (IKStyleFactory *)styleFactory;
- (NSObject *)styleComposerForElement:(NSObject *)arg0 elementStyleOverrides:(IKViewElementStyle *)arg1;
- (IKViewElementStyleFactory *)initWithMarkup:(id)arg0 styleSheet:(IKTemplateStyleSheet *)arg1;
- (IKTemplateStyleSheet *)styleSheet;

@end
