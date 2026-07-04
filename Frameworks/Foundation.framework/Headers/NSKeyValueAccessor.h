/* Runtime dump - NSKeyValueAccessor
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueAccessor : NSObject
{
    id _containerClassID;
    NSString * _key;
    /* block */ id * _implementation;
    SEL _selector;
    unsigned int _extraArgumentCount;
    void * _extraArgument1;
    void * _extraArgument2;
    void * _extraArgument3;
}

- (NSKeyValueAccessor *)initWithContainerClassID:(NSObject *)arg0 key:(NSString *)arg1 implementation:(/* block */ id *)arg2 selector:(SEL)arg3 extraArguments:(NSDictionary *)arg4 count:(void *)arg5;
- (NSObject *)containerClassID;
- (unsigned int)extraArgumentCount;
- (void *)extraArgument1;
- (void *)extraArgument2;
- (void)dealloc;
- (NSString *)key;
- (SEL)selector;

@end
