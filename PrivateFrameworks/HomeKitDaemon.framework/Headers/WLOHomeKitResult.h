/* Runtime dump - WLOHomeKitResult
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface WLOHomeKitResult : NSObject
{
    unsigned int _resultType;
    int _resultCode;
    unsigned int _duration;
    unsigned int _transportType;
    unsigned int _isClient;
    NSArray * _serviceTypes;
    NSArray * _characteristicTypes;
}

@property (nonatomic) unsigned int resultType;
@property (nonatomic) int resultCode;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) unsigned int isClient;
@property (retain, nonatomic) NSArray * serviceTypes;
@property (retain, nonatomic) NSArray * characteristicTypes;

- (NSString *)description;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg0;
- (void).cxx_destruct;
- (void)setTransportType:(unsigned int)arg0;
- (int)resultCode;
- (unsigned int)isClient;
- (NSArray *)serviceTypes;
- (NSArray *)characteristicTypes;
- (void)setResultCode:(int)arg0;
- (void)setIsClient:(unsigned int)arg0;
- (void)setServiceTypes:(NSArray *)arg0;
- (void)setCharacteristicTypes:(NSArray *)arg0;
- (void)setResultType:(unsigned int)arg0;
- (unsigned int)transportType;
- (unsigned int)resultType;

@end
