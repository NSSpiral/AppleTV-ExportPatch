/* Runtime dump - NSPlaceholderValue
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPlaceholderValue : NSNumber
{
    struct _NSZone * zoneForInstance;
}

+ (char)supportsSecureCoding;

- (NSPlaceholderValue *)retain;
- (void)release;
- (void)dealloc;
- (NSPlaceholderValue *)initWithCoder:(NSCoder *)arg0;
- (NSPlaceholderValue *)init;
- (NSPlaceholderValue *)autorelease;
- (unsigned int)retainCount;
- (void)getValue:(void *)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (char *)objCType;
- (NSPlaceholderValue *)initWithBytes:(void *)arg0 objCType:(void)arg1;
- (void)finalize;

@end
