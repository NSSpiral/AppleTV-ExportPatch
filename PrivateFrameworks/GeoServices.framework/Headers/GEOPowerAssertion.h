/* Runtime dump - GEOPowerAssertion
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPowerAssertion : NSObject
{
    NSString * _identifier;
    double _timeout;
    unsigned int _assertion;
}

- (void)dealloc;
- (NSString *)description;
- (GEOPowerAssertion *)initWithIdentifier:(NSString *)arg0 timeout:(double)arg1;

@end
