/* Runtime dump - ICSStructuredLocation
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSStructuredLocation : ICSProperty

@property (retain, nonatomic) NSString * fmtype;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * loctype;
@property (retain, nonatomic) NSString * abURLString;
@property (nonatomic) double radius;
@property (retain, nonatomic) NSString * displayName;
@property (retain, nonatomic) NSString * address;
@property (retain, nonatomic) NSString * routing;

- (NSString *)routing;
- (NSString *)fmtype;
- (void)setFmtype:(NSString *)arg0;
- (void)setRouting:(NSString *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)displayName;
- (NSString *)abURLString;
- (void)setAbURLString:(NSString *)arg0;
- (void)setDisplayName:(NSString *)arg0;
- (double)radius;
- (void)setRadius:(double)arg0;
- (void)setAddress:(NSString *)arg0;
- (NSString *)address;
- (id)propertiesToObscure;
- (id)parametersToObscure;
- (char)shouldObscureValue;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (NSString *)loctype;
- (void)setLoctype:(NSString *)arg0;

@end
