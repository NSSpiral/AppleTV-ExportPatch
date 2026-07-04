/* Runtime dump - PSRegion
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSRegion : NSObject
{
    NSString * _regionName;
    NSString * _regionCode;
}

@property (retain, nonatomic) NSString * regionName;
@property (retain, nonatomic) NSString * regionCode;

+ (NSString *)regionWithName:(NSString *)arg0 code:(id)arg1;

- (void)dealloc;
- (NSString *)regionCode;
- (void)setRegionCode:(NSString *)arg0;
- (void)setRegionName:(NSString *)arg0;
- (NSString *)regionName;

@end
