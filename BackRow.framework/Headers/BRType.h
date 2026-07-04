/* Runtime dump - BRType
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRType : NSObject
{
    NSString * _typeString;
}

+ (NSArray *)_unknownTypes;
+ (NSCache *)_typeCache;
+ (BRType *)typeEnumerator;
+ (char)unknown;
+ (BRType *)typeForString:(NSString *)arg0;

- (void)dealloc;
- (BRType *)initWithString:(NSString *)arg0;
- (NSString *)typeString;

@end
