/* Runtime dump - NSRLEArray
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying>
{
    struct _NSRefCountedRunArray * theList;
}

- (NSObject *)objectAtIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1;
- (NSObject *)objectAtIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1 runIndex:(unsigned int *)arg2;
- (NSObject *)objectAtRunIndex:(unsigned int)arg0 length:(unsigned int *)arg1;
- (NSRLEArray *)initWithRefCountedRunArray:(struct _NSRefCountedRunArray *)arg0;
- (void)_makeNewListFrom:(struct _NSRefCountedRunArray *)arg0;
- (void)dealloc;
- (unsigned int)count;
- (NSRLEArray *)init;
- (NSString *)description;
- (NSRLEArray *)copyWithZone:(struct _NSZone *)arg0;
- (NSRLEArray *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
