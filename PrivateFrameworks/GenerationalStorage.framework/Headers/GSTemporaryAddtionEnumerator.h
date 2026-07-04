/* Runtime dump - GSTemporaryAddtionEnumerator
 * Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSTemporaryAddtionEnumerator : NSEnumerator <GSAdditionEnumerating>
{
    GSTemporaryStorage * _storage;
    NSString * _nameSpace;
    unsigned long long _withOptions;
    unsigned long long _withoutOption;
    NSError * _error;
    NSDirectoryEnumerator * _enumerator;
    NSArray * _array;
    unsigned int _pos;
}

@property (readonly, nonatomic) NSError * error;

- (void)dealloc;
- (NSObject *)nextObject;
- (NSError *)error;
- (GSTemporaryAddtionEnumerator *)initWithStorage:(GSTemporaryStorage *)arg0 nameSpace:(NSString *)arg1 withOptions:(unsigned long long)arg2 withoutOptions:(unsigned long long)arg3 ordering:(int)arg4;
- (NSURL *)_nextURL;

@end
