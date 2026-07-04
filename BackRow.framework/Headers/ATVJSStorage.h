/* Runtime dump - ATVJSStorage
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVJSContext;
@interface ATVJSStorage : NSObject
{
    ATVJSContext * _context;
    struct OpaqueJSValue * _jsObjectRef;
    <ATVReadWriteFeedResource> * _resource;
}

@property (nonatomic) struct OpaqueJSValue * jsObjectRef;
@property (retain) ATVJSContext * context;
@property (retain, nonatomic) <ATVReadWriteFeedResource> * resource;

- (void)setJsObjectRef:(struct OpaqueJSValue *)arg0;
- (ATVJSStorage *)initWithContext:(ATVJSContext *)arg0 jsContext:(struct OpaqueJSContext *)arg1 resource:(<ATVReadWriteFeedResource> *)arg2;
- (void)dealloc;
- (ATVJSContext *)context;
- (void)setContext:(ATVJSContext *)arg0;
- (struct OpaqueJSValue *)jsObjectRef;
- (<ATVReadWriteFeedResource> *)resource;
- (void)setResource:(<ATVReadWriteFeedResource> *)arg0;

@end
