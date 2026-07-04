/* Runtime dump - CPLRUDictionaryNode
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPLRUDictionaryNode : NSObject
{
    id _key;
    id _object;
    CPLRUDictionaryNode * next;
    CPLRUDictionaryNode * prev;
}

@property (readonly, nonatomic) id key;
@property (retain, nonatomic) id object;

- (void)dealloc;
- (NSString *)key;
- (NSObject *)object;
- (void)setObject:(NSObject *)arg0;
- (CPLRUDictionaryNode *)initWithKey:(NSString *)arg0 object:(NSObject *)arg1;

@end
