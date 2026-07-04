/* Runtime dump - IKMenuBarElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKMenuBarElement : IKCollectionElement
{
    IKAppMenuBarDocument * _menuBarDocument;
}

@property (readonly, nonatomic) IKAppMenuBarDocument * menuBarDocument;

+ (NSMutableDictionary *)supportedFeatures;

- (void).cxx_destruct;
- (IKMenuBarElement *)initWithDOMElement:(NSObject *)arg0 parent:(NSObject *)arg1 elementFactory:(IKViewElementFactory *)arg2;
- (IKAppMenuBarDocument *)menuBarDocument;

@end
