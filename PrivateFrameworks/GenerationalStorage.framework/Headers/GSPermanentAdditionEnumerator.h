/* Runtime dump - GSPermanentAdditionEnumerator
 * Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating>
{
    GSPermanentStorage * _storage;
    NSString * _nameSpace;
    unsigned long long _withOptions;
    unsigned long long _withoutOptions;
    NSArray * _array;
    unsigned int _pos;
    GSDaemonProxySync * _proxy;
    NSError * _error;
    id _token;
}

@property (readonly, nonatomic) NSError * error;

- (void)dealloc;
- (NSObject *)nextObject;
- (NSError *)error;
- (void)_fetchNextBatch;
- (GSPermanentAdditionEnumerator *)initWithStorage:(GSPermanentStorage *)arg0 nameSpace:(NSString *)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;

@end
