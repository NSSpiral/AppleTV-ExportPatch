/* Runtime dump - FMFLocation
 * Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFLocation : NSObject <NSCopying, NSSecureCoding, MKAnnotation>
{
    char _locatingInProgress;
    FMFHandle * _handle;
    CLLocation * _location;
    NSString * _longAddress;
    NSDate * _timestamp;
    NSString * _label;
    NSString * _shortAddressString;
    double _maxLocatingInterval;
    double _TTL;
}

@property (retain, nonatomic) FMFHandle * handle;
@property (retain, nonatomic) CLLocation * location;
@property (readonly, copy, nonatomic) NSString * shortAddress;
@property (copy, nonatomic) NSString * longAddress;
@property (copy, nonatomic) NSDate * timestamp;
@property (nonatomic) char locatingInProgress;
@property (readonly, nonatomic) struct ? coordinate;
@property (retain, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * shortAddressString;
@property (nonatomic) double maxLocatingInterval;
@property (nonatomic) double TTL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * subtitle;

+ (char)supportsSecureCoding;

- (FMFLocation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSDate *)timestamp;
- (char)isValid;
- (void)setTimestamp:(NSDate *)arg0;
- (NSString *)title;
- (FMFLocation *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (NSString *)subtitle;
- (void)setLabel:(NSString *)arg0;
- (CLLocation *)location;
- (void).cxx_destruct;
- (void)updateLocation:(NSObject *)arg0;
- (void)setMaxLocatingInterval:(double)arg0;
- (void)setTTL:(double)arg0;
- (void)setShortAddressString:(NSString *)arg0;
- (void)setLongAddress:(NSString *)arg0;
- (NSString *)shortAddressString;
- (NSString *)longAddress;
- (char)isLocatingInProgress;
- (void)setLocatingInProgress:(char)arg0;
- (double)maxLocatingInterval;
- (double)TTL;
- (NSString *)shortAddress;
- (id)locationAge;
- (id)locationShortAddressWithAge;
- (void)resetLocateInProgressTimer;
- (void)resetLocateInProgress:(id)arg0;
- (FMFLocation *)initWithDictionary:(NSDictionary *)arg0 forHandle:(_NSStdIOFileHandle *)arg1 maxLocatingInterval:(double)arg2 TTL:(double)arg3;
- (id)locationShortAddressWithAgeIncludeLocating;
- (void)updateHandle:(id)arg0;
- (FMFHandle *)handle;
- (void)setHandle:(FMFHandle *)arg0;
- (void)setLocation:(CLLocation *)arg0;
- (FMFLocation *)initWithLatitude:(double)arg0 longitude:(double)arg1;
- (struct ?)coordinate;

@end
