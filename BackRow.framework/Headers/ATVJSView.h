/* Runtime dump - ATVJSView
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl;
@interface ATVJSView : NSObject
{
    BRControl * _control;
}

@property (readonly, retain, nonatomic) BRControl * control;

+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1;
+ (ATVJSView *)viewFromValue:(struct OpaqueJSValue *)arg0 inContext:(struct OpaqueJSContext *)arg1 exception:(struct OpaqueJSValue * *)arg2;
+ (struct OpaqueJSValue *)constructObjectWithClassName:(NSString *)arg0 withATVJSViewClass:(Class)arg1 inContext:(struct OpaqueJSContext *)arg2;

- (id)makeControl;
- (void)dealloc;
- (BRControl *)control;

@end
