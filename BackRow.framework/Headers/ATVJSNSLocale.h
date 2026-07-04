/* Runtime dump - ATVJSNSLocale
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVJSObject;
@interface ATVJSNSLocale : NSObject <ATVJSObject>
{
    struct OpaqueJSValue * _jsObjectRef;
    NSLocale * _locale;
}

@property (retain, nonatomic) NSLocale * locale;

+ (void)addClassDefinitionInContext:(struct OpaqueJSContext *)arg0;
+ (ATVJSNSLocale *)localeFromJSValue:(struct OpaqueJSValue *)arg0 context:(struct OpaqueJSContext *)arg1;

- (ATVJSNSLocale *)initWithLocale:(NSLocale *)arg0 context:(struct OpaqueJSContext *)arg1;
- (ATVJSNSLocale *)init;
- (void)setLocale:(NSLocale *)arg0;
- (NSLocale *)locale;
- (void).cxx_destruct;
- (struct OpaqueJSValue *)jsObjectRef;
- (void)_jsFinalize;

@end
