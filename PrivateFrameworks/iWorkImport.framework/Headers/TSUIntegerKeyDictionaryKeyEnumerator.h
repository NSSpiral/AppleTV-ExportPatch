/* Runtime dump - TSUIntegerKeyDictionaryKeyEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUIntegerKeyDictionaryKeyEnumerator : NSObject
{
    int * * _keys;
    unsigned int _count;
    unsigned int _index;
}

- (void)dealloc;
- (TSUIntegerKeyDictionaryKeyEnumerator *)initWithIntegerKeyDictionary:(NSDictionary *)arg0;
- (int)nextKey;

@end
