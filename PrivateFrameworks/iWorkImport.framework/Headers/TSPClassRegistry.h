/* Runtime dump - TSPClassRegistry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPClassRegistry : NSObject
{
    NSMutableDictionary * _registry;
    char _didFinishRegistration;
}

- (void)registerClass:(Class)arg0 forExtensionNumber:(int)arg1;
- (Class)classForMessage:(struct Message *)arg0;
- (Class)classForExtensionNumber:(int)arg0;
- (TSPClassRegistry *)init;
- (void).cxx_destruct;

@end
