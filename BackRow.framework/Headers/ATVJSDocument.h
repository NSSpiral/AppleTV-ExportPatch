/* Runtime dump - ATVJSDocument
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVJSNode.h>
@interface ATVJSDocument : ATVJSNode
{
    ATVXMLSchema * xmlSchema;
}

@property (readonly, retain, nonatomic) ATVXMLDocument * xmlDocument;
@property (retain, nonatomic) ATVXMLSchema * xmlSchema;

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1;
+ (NSString *)documentInContext:(struct OpaqueJSContext *)arg0 withDocument:(NSObject *)arg1 withSchema:(IKDOMSchema *)arg2;
+ (ATVJSDocument *)documentFromValue:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1 exception:(struct OpaqueJSValue * *)arg2;

- (void)setXmlSchema:(ATVXMLSchema *)arg0;
- (ATVXMLSchema *)xmlSchema;
- (void)dealloc;
- (ATVXMLDocument *)xmlDocument;

@end
