/* Runtime dump - WKFormInputControl
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKFormInputControl : NSObject <WKFormPeripheral>
{
    struct RetainPtr<id<WKFormControl> > _control;
}

+ (NSObject *)createPeripheralWithView:(NSObject *)arg0;

- (void)beginEditing;
- (void)endEditing;
- (WKFormInputControl *)initWithView:(WKContentView *)arg0;
- (void).cxx_construct;
- (NSObject *)assistantView;
- (void).cxx_destruct;

@end
