/* Runtime dump - OITSUIntToIntDictionaryKeyEnumerator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUIntToIntDictionaryKeyEnumerator : NSObject
{
    int * * _keys;
    unsigned int _count;
    unsigned int _index;
}

- (void)dealloc;
- (OITSUIntToIntDictionaryKeyEnumerator *)initWithIntegerKeyDictionary:(NSDictionary *)arg0;
- (int)nextKey;

@end
