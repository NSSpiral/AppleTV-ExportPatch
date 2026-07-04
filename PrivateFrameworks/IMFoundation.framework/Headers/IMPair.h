/* Runtime dump - IMPair
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMPair : NSObject <NSCopying>
{
    id _first;
    id _second;
}

@property (retain) id first;
@property (retain) id second;

+ (IMPair *)pairWithFirst:(NSString *)arg0 second:(int)arg1;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (IMPair *)copyWithZone:(struct _NSZone *)arg0;
- (int)second;
- (void)setSecond:(int)arg0;
- (IMPair *)initWithFirst:(NSString *)arg0 second:(int)arg1;
- (NSString *)first;
- (void)setFirst:(NSString *)arg0;

@end
