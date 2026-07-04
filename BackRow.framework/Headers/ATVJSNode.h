/* Runtime dump - ATVJSNode
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVJSObject;
@interface ATVJSNode : NSObject <ATVJSObject>
{
    struct OpaqueJSValue * jsObjectRef;
    ATVXMLNode * xmlNode;
}

@property (retain, nonatomic) ATVXMLNode * xmlNode;
@property (nonatomic) struct OpaqueJSValue * jsObjectRef;

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1;
+ (ATVJSNode *)nodeFromValue:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1 exception:(struct OpaqueJSValue * *)arg2;
+ (struct OpaqueJSValue *)constructObjectWithClassName:(NSString *)arg0 withATVJSNodeClass:(Class)arg1 inContext:(struct OpaqueJSContext *)arg2;
+ (NSString *)nodeInContext:(struct OpaqueJSContext *)arg0 withNode:(BWNode *)arg1;

- (void)setXmlNode:(ATVXMLNode *)arg0;
- (ATVXMLNode *)xmlNode;
- (void)setJsObjectRef:(struct OpaqueJSValue *)arg0;
- (void)dealloc;
- (struct OpaqueJSValue *)jsObjectRef;

@end
