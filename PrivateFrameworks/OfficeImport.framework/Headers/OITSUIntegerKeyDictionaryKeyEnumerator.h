/* Runtime dump - OITSUIntegerKeyDictionaryKeyEnumerator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUIntegerKeyDictionaryKeyEnumerator : NSObject
{
    int * * _keys;
    unsigned int _count;
    unsigned int _index;
}

- (void)dealloc;
- (OITSUIntegerKeyDictionaryKeyEnumerator *)initWithIntegerKeyDictionary:(NSDictionary *)arg0;
- (int)nextKey;

@end
