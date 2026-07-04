/* Runtime dump - IKJSObject
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSObject : NSObject
{
    IKAppContext * _appContext;
    NSMutableDictionary * _managedProperties;
}

@property (readonly, weak, nonatomic) IKAppContext * appContext;
@property (retain, nonatomic) NSMutableDictionary * managedProperties;

- (NSString *)invokeMethod:(NSString *)arg0 withArguments:(NSDictionary *)arg1;
- (IKJSObject *)init;
- (void).cxx_destruct;
- (IKAppContext *)appContext;
- (IKJSObject *)initWithAppContext:(IKAppContext *)arg0;
- (NSObject *)jsValueForProperty:(NSString *)arg0;
- (void)setJSValue:(JSValue *)arg0 forProperty:(NSString *)arg1;
- (NSMutableDictionary *)managedProperties;
- (void)setManagedProperties:(NSMutableDictionary *)arg0;

@end
