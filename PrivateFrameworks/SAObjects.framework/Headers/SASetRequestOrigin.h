/* Runtime dump - SASetRequestOrigin
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand>

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (copy, nonatomic) NSNumber * age;
@property (nonatomic) double altitude;
@property (copy, nonatomic) NSString * desiredAccuracy;
@property (nonatomic) double direction;
@property (nonatomic) double speed;
@property (copy, nonatomic) NSString * status;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SASetRequestOrigin *)setRequestOrigin;
+ (NSDictionary *)setRequestOriginWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)desiredAccuracy;
- (void)setSpeed:(double)arg0;
- (double)speed;
- (void)setDirection:(double)arg0;
- (double)direction;
- (NSString *)status;
- (void)setStatus:(NSString *)arg0;
- (void)setLatitude:(double)arg0;
- (void)setLongitude:(double)arg0;
- (void)setHorizontalAccuracy:(double)arg0;
- (void)setAltitude:(double)arg0;
- (void)setVerticalAccuracy:(double)arg0;
- (double)latitude;
- (double)longitude;
- (double)horizontalAccuracy;
- (double)verticalAccuracy;
- (void)setDesiredAccuracy:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSNumber *)age;
- (void)setAge:(NSNumber *)arg0;
- (double)altitude;

@end
