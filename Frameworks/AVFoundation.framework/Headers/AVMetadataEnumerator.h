/* Runtime dump - AVMetadataEnumerator
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataEnumerator : NSEnumerator
{
    struct OpaqueFigMetadataReader * _reader;
    NSEnumerator * _arrayEnumerator;
    id _key;
    NSString * _keySpace;
    NSLocale * _locale;
    long _count;
    long _index;
}

+ (AVMetadataEnumerator *)metadataEnumeratorWithMetadataReader:(struct OpaqueFigMetadataReader *)arg0;
+ (AVMetadataEnumerator *)metadataEnumeratorWithArray:(NSArray *)arg0 key:(NSString *)arg1 keySpace:(NSString *)arg2 locale:(NSLocale *)arg3;

- (AVMetadataEnumerator *)initWithMetadataReader:(struct OpaqueFigMetadataReader *)arg0;
- (AVMetadataEnumerator *)initWithArray:(NSArray *)arg0 key:(NSString *)arg1 keySpace:(NSString *)arg2 locale:(NSLocale *)arg3;
- (AVMetadataEnumerator *)initWithMetadataReader:(struct OpaqueFigMetadataReader *)arg0 array:(NSArray *)arg1 key:(NSString *)arg2 keySpace:(NSString *)arg3 locale:(NSLocale *)arg4;
- (void)_setMetadataReader:(struct OpaqueFigMetadataReader *)arg0;
- (void)_setArrayEnumerator:(NSEnumerator *)arg0;
- (void)_setKeySpace:(NSObject *)arg0;
- (void)_setKey:(NSString *)arg0;
- (void)dealloc;
- (NSObject *)nextObject;
- (void)_setLocale:(NSObject *)arg0;
- (void)finalize;

@end
