/* Runtime dump - TSUIntToIntDictionaryKeyEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUIntToIntDictionaryKeyEnumerator : NSObject
{
    int * * _keys;
    unsigned int _count;
    unsigned int _index;
}

- (void)dealloc;
- (TSUIntToIntDictionaryKeyEnumerator *)initWithIntegerKeyDictionary:(NSDictionary *)arg0;
- (int)nextKey;

@end
