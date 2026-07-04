/* Runtime dump - ICSConference
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSConference : ICSProperty

@property (retain, nonatomic) NSString * feature;
@property (retain, nonatomic) NSString * info;
@property (retain, nonatomic) NSString * language;
@property (retain, nonatomic) NSString * region;

- (NSString *)info;
- (void)setRegion:(NSString *)arg0;
- (NSString *)region;
- (NSString *)language;
- (void)setLanguage:(NSString *)arg0;
- (void)setInfo:(NSString *)arg0;
- (NSString *)feature;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (void)setFeature:(NSString *)arg0;

@end
