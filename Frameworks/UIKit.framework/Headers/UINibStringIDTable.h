/* Runtime dump - UINibStringIDTable
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibStringIDTable : NSObject
{
    struct UIStringIDTableBucket * * table;
    struct UIStringIDTableBucket * buckets;
    unsigned int hashMask;
    unsigned int count;
}

- (void)dealloc;
- (int)count;
- (char)lookupKey:(NSString *)arg0 identifier:(int *)arg1;
- (UINibStringIDTable *)initWithKeysTransferingOwnership:(id *)arg0 count:(unsigned int)arg1;

@end
