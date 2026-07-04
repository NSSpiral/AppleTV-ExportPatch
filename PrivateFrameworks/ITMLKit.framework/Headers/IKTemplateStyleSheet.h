/* Runtime dump - IKTemplateStyleSheet
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTemplateStyleSheet : NSObject
{
    IKStyleFactory * _styleFactory;
    NSDictionary * _templateTree;
    NSMutableDictionary * _templateKeyPathMap;
    NSMutableDictionary * _styleComposersByKeypath;
}

@property (readonly, retain, nonatomic) IKStyleFactory * styleFactory;
@property (readonly, copy, nonatomic) NSDictionary * templateTree;
@property (readonly, retain, nonatomic) NSMutableDictionary * templateKeyPathMap;
@property (readonly, retain, nonatomic) NSMutableDictionary * styleComposersByKeypath;

+ (NSString *)styleSheetForTemplateName:(NSString *)arg0;
+ (NSObject *)_templateTreeNodeWithXMLNode:(struct _xmlNode *)arg0;
+ (void)registerStyleSheetURL:(NSURL *)arg0 forTemplateName:(NSString *)arg1;

- (void).cxx_destruct;
- (IKTemplateStyleSheet *)initWithData:(NSData *)arg0 error:(id *)arg1;
- (IKStyleFactory *)styleFactory;
- (NSMutableDictionary *)styleComposersByKeypath;
- (NSObject *)styleComposerForElement:(NSObject *)arg0;
- (NSMutableDictionary *)templateKeyPathMap;
- (NSDictionary *)templateTree;

@end
