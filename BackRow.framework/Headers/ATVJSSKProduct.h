/* Runtime dump - ATVJSSKProduct
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVJSObject;
@interface ATVJSSKProduct : NSObject <ATVJSObject>
{
    struct OpaqueJSValue * _jsObjectRef;
    SKProduct * _product;
}

@property (readonly, nonatomic) SKProduct * product;

+ (ATVJSSKProduct *)productFromJSValue:(struct OpaqueJSValue *)arg0 context:(struct OpaqueJSContext *)arg1;
+ (void)addClassDefinitionInContext:(struct OpaqueJSContext *)arg0;

- (ATVJSSKProduct *)initWithProduct:(SKProduct *)arg0 context:(struct OpaqueJSContext *)arg1;
- (void)dealloc;
- (ATVJSSKProduct *)init;
- (struct OpaqueJSValue *)jsObjectRef;
- (void)_jsFinalize;
- (SKProduct *)product;

@end
