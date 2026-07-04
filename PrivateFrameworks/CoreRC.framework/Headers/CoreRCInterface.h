/* Runtime dump - CoreRCInterface
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCInterface : NSObject
{
    CoreRCInterfaceListener * _listener;
    id _testProperty;
}

@property (nonatomic) CoreRCInterfaceListener * listener;
@property (copy, nonatomic) id testProperty;

- (void)dealloc;
- (CoreRCInterfaceListener *)listener;
- (void)setListener:(CoreRCInterfaceListener *)arg0;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1 error:(id *)arg2;
- (NSString *)propertyForKey:(NSString *)arg0 error:(id *)arg1;
- (void)scheduleWithDispatchQueue:(VKDispatch *)arg0;
- (void)unscheduleFromDispatchQueue:(NSObject *)arg0;
- (char)doesNotImplement:(SEL)arg0 error:(id *)arg1;
- (void)setTestProperty:(NSObject *)arg0;
- (NSObject *)testProperty;

@end
