/* Runtime dump - OITSUDuration
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDuration : NSObject <NSCopying>
{
    double mTimeInterval;
}

+ (OITSUDuration *)durationWithTimeInterval:(double)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OITSUDuration *)copyWithZone:(struct _NSZone *)arg0;
- (double)timeInterval;
- (OITSUDuration *)initWithTimeInterval:(double)arg0;

@end
