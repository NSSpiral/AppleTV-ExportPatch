/* Runtime dump - AVFigObjectInspector
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigObjectInspector : NSObject

+ (void)initialize;

- (struct ?)_timeForProperty:(struct __CFString *)arg0;
- (float)_floatForProperty:(struct __CFString *)arg0 defaultValue:(float)arg1;
- (struct CGAffineTransform)_affineTransformForProperty:(struct __CFString *)arg0;
- (long)_SInt32ForProperty:(struct __CFString *)arg0;
- (unsigned char)_booleanForProperty:(struct __CFString *)arg0;
- (NSObject *)_nonNilArrayForProperty:(struct __CFString *)arg0;
- (NSObject *)_dictionaryForProperty:(struct __CFString *)arg0;
- (NSObject *)_stringForProperty:(struct __CFString *)arg0;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg0;
- (NSObject *)_arrayForProperty:(struct __CFString *)arg0;
- (NSObject *)_nonNilDictionaryForProperty:(struct __CFString *)arg0;
- (NSObject *)_tollFreeBridgedObjectForProperty:(struct __CFString *)arg0;
- (NSObject *)_dataForProperty:(struct __CFString *)arg0;
- (long long)_longLongForProperty:(struct __CFString *)arg0;
- (float)_floatForProperty:(struct __CFString *)arg0;
- (struct CGSize)_sizeForProperty:(struct __CFString *)arg0 defaultValue:(struct CGSize)arg1;
- (struct CGSize)_sizeForProperty:(struct __CFString *)arg0;
- (short)_SInt16ForProperty:(struct __CFString *)arg0;
- (struct ?)_timeForProperty:(struct __CFString *)arg0 defaultValue:(struct ?)arg1;
- (struct ?)_timeRangeForProperty:(NSString *)arg0;

@end
