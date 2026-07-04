/* Runtime dump - TLVibrationPattern
 * Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationPattern : NSObject
{
    id _contextObject;
    id _propertyListRepresentation;
    id _complexPatternDescription;
    double _duration;
}

@property (readonly, nonatomic) id propertyListRepresentation;
@property (readonly, nonatomic) double computedDuration;
@property (retain, nonatomic) id contextObject;
@property (readonly, nonatomic) id _artificiallyRepeatingPropertyListRepresentation;
@property (nonatomic) double _duration;
@property (retain, nonatomic) id _propertyListRepresentation;
@property (retain, nonatomic) id _complexPatternDescription;

+ (char)isValidVibrationPatternPropertyListRepresentation:(NSDictionary *)arg0;
+ (NSObject *)noneVibrationPattern;
+ (NSNumber *)simpleVibrationPatternWithVibrationDuration:(double)arg0 pauseDuration:(double)arg1;
+ (TLVibrationPattern *)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg0;

- (void)dealloc;
- (TLVibrationPattern *)init;
- (double)_duration;
- (void)_setDuration:(double)arg0;
- (NSDictionary *)propertyListRepresentation;
- (TLVibrationPattern *)initWithPropertyListRepresentation:(NSDictionary *)arg0;
- (NSDictionary *)_artificiallyRepeatingPropertyListRepresentation;
- (NSDictionary *)_initWithPropertyListRepresentation:(NSDictionary *)arg0 skipValidation:(char)arg1;
- (void)_setPropertyListRepresentation:(NSDictionary *)arg0;
- (void)_setComplexPatternDescription:(NSString *)arg0;
- (void)setContextObject:(NSObject *)arg0;
- (NSDictionary *)_propertyListRepresentation;
- (NSString *)_complexPatternDescription;
- (double)computedDuration;
- (void)appendVibrationComponentWithDuration:(double)arg0 isPause:(char)arg1;
- (NSObject *)contextObject;

@end
