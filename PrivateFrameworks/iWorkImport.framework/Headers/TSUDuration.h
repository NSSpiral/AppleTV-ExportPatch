/* Runtime dump - TSUDuration
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUDuration : NSObject <NSCopying>
{
    double mTimeInterval;
}

+ (TSUDuration *)durationWithTimeInterval:(double)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSUDuration *)copyWithZone:(struct _NSZone *)arg0;
- (double)timeInterval;
- (TSUDuration *)initWithTimeInterval:(double)arg0;

@end
