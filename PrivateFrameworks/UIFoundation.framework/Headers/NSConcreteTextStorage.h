/* Runtime dump - NSConcreteTextStorage
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSConcreteTextStorage : NSTextStorage
{
    NSConcreteNotifyingMutableAttributedString * _contents;
    struct _opaque_pthread_rwlock_t _lock;
    struct ? _pFlags;
}

+ (unsigned long)_writerCountTSDKey;

- (void)dealloc;
- (NSConcreteTextStorage *)init;
- (NSConcreteTextStorage *)initWithString:(NSString *)arg0 attributes:(NSDictionary *)arg1;
- (unsigned int)length;
- (NSString *)string;
- (Class)classForCoder;
- (void)addAttribute:(struct __CFString *)arg0 value:(NSObject *)arg1 range:(struct _NSRange)arg2;
- (void)removeAttribute:(NSObject *)arg0 range:(struct _NSRange)arg1;
- (NSConcreteTextStorage *)initWithString:(NSString *)arg0;
- (NSObject *)attribute:(NSObject *)arg0 atIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)setAttributes:(NSDictionary *)arg0 range:(struct _NSRange)arg1;
- (void)addAttributes:(NSDictionary *)arg0 range:(struct _NSRange)arg1;
- (NSConcreteTextStorage *)initWithAttributedString:(NSAttributedString *)arg0;
- (NSObject *)attribute:(NSObject *)arg0 atIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withString:(NSString *)arg1;
- (NSObject *)attributesAtIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1;
- (NSObject *)attributesAtIndex:(unsigned int)arg0 longestEffectiveRange:(struct _NSRange *)arg1 inRange:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg0 withAttributedString:(NSAttributedString *)arg1;
- (char)_lockForReading;
- (void)_unlock;
- (void)_setForceFixAttributes:(char)arg0;
- (char)_attributeFixingInProgress;
- (void)_setAttributeFixingInProgress:(char)arg0;
- (char)_lockForWritingWithExceptionHandler:(char)arg0;
- (char)fixesAttributesLazily;
- (char)_forceFixAttributes;
- (void)_initLocks;

@end
