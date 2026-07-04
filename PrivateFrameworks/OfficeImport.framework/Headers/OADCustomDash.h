/* Runtime dump - OADCustomDash
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADCustomDash : OADDash
{
    NSMutableArray * mStops;
    id mAreStopsOverridden;
}

+ (OADCustomDash *)defaultProperties;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (OADCustomDash *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)stopCount;
- (float)dashAtIndex:(unsigned int)arg0;
- (float)spaceAtIndex:(unsigned int)arg0;
- (void)addStopWithDash:(float)arg0 space:(float)arg1;
- (OADCustomDash *)initWithDefaults;
- (void)setStops:(id)arg0;
- (char)areStopsOverridden;
- (id)stops;

@end
