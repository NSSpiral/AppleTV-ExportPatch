/* Runtime dump - SAClassRegistry
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAClassRegistry : NSObject
{
    NSMutableDictionary * _classesByAceClassNameByGroupIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, nonatomic) NSMutableDictionary * classesByAceClassNameByGroupIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;

+ (SAClassRegistry *)sharedClassRegistry;

- (void)dealloc;
- (SAClassRegistry *)init;
- (NSOperationQueue *)_queue;
- (Class)classForAceClassWithName:(NSString *)arg0 inGroupWithIdentifier:(NSString *)arg1;
- (void)registerClass:(Class)arg0 forAceClassWithName:(NSString *)arg1 inGroupWithIdentifier:(NSString *)arg2;
- (NSString *)_classesByAceClassNameByGroupIdentifier;
- (void)_accessMutableStateWithBlock:(id /* block */)arg0;

@end
