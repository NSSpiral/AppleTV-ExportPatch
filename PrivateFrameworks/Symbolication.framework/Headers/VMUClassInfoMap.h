/* Runtime dump - VMUClassInfoMap
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUClassInfoMap : NSObject <NSCoding>
{
    void * _cppMap;
}

+ (void)initialize;
+ (NSObject *)infoMap;

- (void)dealloc;
- (VMUClassInfoMap *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (VMUClassInfoMap *)init;
- (NSString *)classInfoForAddress:(unsigned long long)arg0;
- (void)addClassInfo:(NSDictionary *)arg0 forAddress:(unsigned long long)arg1;
- (void)enumerateWithBlock:(id /* block */)arg0;
- (void)addClassInfosFromMap:(NSObject *)arg0;

@end
