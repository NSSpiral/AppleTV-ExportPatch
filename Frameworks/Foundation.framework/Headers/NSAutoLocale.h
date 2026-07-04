/* Runtime dump - NSAutoLocale
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAutoLocale : NSLocale
{
    NSLocale * loc;
}

+ (char)supportsSecureCoding;

- (unsigned char)_nullLocale;
- (void)_setNullLocale;
- (struct __SCPreferences *)_prefs;
- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (NSAutoLocale *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSAutoLocale *)_init;
- (NSAutoLocale *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (NSAutoLocale *)initWithLocaleIdentifier:(NSString *)arg0;
- (NSString *)displayNameForKey:(NSString *)arg0 value:(NSObject *)arg1;
- (void)_update:(NSDate *)arg0;

@end
