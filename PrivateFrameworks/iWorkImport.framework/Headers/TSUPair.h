/* Runtime dump - TSUPair
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    id mFirst;
    id mSecond;
}

+ (TSUPair *)pairWithFirst:(NSString *)arg0 second:(int)arg1;
+ (TSUPair *)pairWithPair:(id)arg0;
+ (TSUPair *)pair;

- (void)dealloc;
- (TSUPair *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (TSUPair *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSUPair *)copyWithZone:(struct _NSZone *)arg0;
- (TSUPair *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (int)second;
- (TSUPair *)initWithFirst:(NSString *)arg0 second:(int)arg1;
- (TSUPair *)initWithPair:(id)arg0;
- (void)p_SetFirst:(id)arg0;
- (void)p_SetSecond:(id)arg0;
- (NSString *)first;

@end
