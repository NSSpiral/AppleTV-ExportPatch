/* Runtime dump - NSTextTab
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextTab : NSObject <NSCopying, NSCoding>
{
    struct ? _flags;
    float _location;
    id _reserved;
}

@property (readonly) int alignment;
@property (readonly) float location;
@property (readonly) NSDictionary * options;

+ (void)initialize;
+ (NSTextTab *)allocWithZone:(struct _NSZone *)arg0;
+ (NSLocale *)columnTerminatorsForLocale:(NSObject *)arg0;

- (NSTextTab *)retain;
- (void)release;
- (void)dealloc;
- (NSTextTab *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (NSString *)description;
- (NSTextTab *)copyWithZone:(struct _NSZone *)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (int)alignment;
- (float)location;
- (NSDictionary *)options;
- (unsigned int)tabStopType;
- (NSTextTab *)initWithType:(unsigned int)arg0 location:(float)arg1;
- (NSTextTab *)initWithTextAlignment:(int)arg0 location:(float)arg1 options:(NSDictionary *)arg2;

@end
