/* Runtime dump - ATVJSSKPaymentTransaction
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVJSObject;
@interface ATVJSSKPaymentTransaction : NSObject <ATVJSObject>
{
    struct OpaqueJSValue * _jsObjectRef;
    SKPaymentTransaction * _paymentTransaction;
}

@property (readonly, nonatomic) SKPaymentTransaction * paymentTransaction;

+ (ATVJSSKPaymentTransaction *)paymentTransactionFromJSValue:(struct OpaqueJSValue *)arg0 context:(struct OpaqueJSContext *)arg1;
+ (void)addClassDefinitionInContext:(struct OpaqueJSContext *)arg0;

- (SKPaymentTransaction *)paymentTransaction;
- (ATVJSSKPaymentTransaction *)initWithPaymentTransaction:(SKPaymentTransaction *)arg0 context:(struct OpaqueJSContext *)arg1;
- (void)dealloc;
- (ATVJSSKPaymentTransaction *)init;
- (struct OpaqueJSValue *)jsObjectRef;
- (void)_jsFinalize;

@end
