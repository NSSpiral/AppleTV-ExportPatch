/* Runtime dump - ATVJSElement
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVJSNode.h>
@interface ATVJSElement : ATVJSNode
{
    ATVXMLSchema * xmlSchema;
}

@property (readonly, retain, nonatomic) ATVXMLElement * xmlElement;
@property (retain, nonatomic) ATVXMLSchema * xmlSchema;

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1;
+ (NSString *)elementInContext:(struct OpaqueJSContext *)arg0 withElement:(NSObject *)arg1 withSchema:(IKDOMSchema *)arg2;
+ (ATVJSElement *)elementFromValue:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1 exception:(struct OpaqueJSValue * *)arg2;

- (void)setXmlSchema:(ATVXMLSchema *)arg0;
- (ATVXMLElement *)xmlElement;
- (ATVXMLSchema *)xmlSchema;
- (void)dealloc;

@end
