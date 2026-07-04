/* Runtime dump - NSCTRubyAnnotation
 * Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface NSCTRubyAnnotation : NSRubyAnnotation

+ (Class)classForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (unsigned long)_cfTypeID;
- (NSCTRubyAnnotation *)retain;
- (void)release;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (char)allowsWeakReference;
- (char)retainWeakReference;
- (void)finalize;

@end
