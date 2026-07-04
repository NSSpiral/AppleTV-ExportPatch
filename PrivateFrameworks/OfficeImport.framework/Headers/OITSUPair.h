/* Runtime dump - OITSUPair
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    id mFirst;
    id mSecond;
}

+ (OITSUPair *)pairWithFirst:(NSString *)arg0 second:(int)arg1;
+ (OITSUPair *)pairWithPair:(id)arg0;
+ (OITSUPair *)pair;

- (void)dealloc;
- (OITSUPair *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (OITSUPair *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (OITSUPair *)copyWithZone:(struct _NSZone *)arg0;
- (OITSUPair *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (int)second;
- (OITSUPair *)initWithFirst:(NSString *)arg0 second:(int)arg1;
- (OITSUPair *)initWithPair:(id)arg0;
- (void)p_SetFirst:(id)arg0;
- (void)p_SetSecond:(id)arg0;
- (NSString *)first;

@end
