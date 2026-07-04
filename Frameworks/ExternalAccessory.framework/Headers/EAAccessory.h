/* Runtime dump - EAAccessory
 * Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAAccessory : NSObject
{
    EAAccessoryInternal * _internal;
}

@property (readonly, nonatomic) char connected;
@property (readonly, nonatomic) unsigned int connectionID;
@property (readonly, nonatomic) NSString * manufacturer;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * modelNumber;
@property (readonly, nonatomic) NSString * serialNumber;
@property (readonly, nonatomic) NSString * firmwareRevision;
@property (readonly, nonatomic) NSString * hardwareRevision;
@property (readonly, nonatomic) NSArray * protocolStrings;
@property (nonatomic) <EAAccessoryDelegate> * delegate;

- (EAAccessory *)_initWithAccessory:(HMAccessory *)arg0;
- (unsigned int)_internalConnectionID;
- (void)_setConnected:(char)arg0;
- (void)_setNotPresentInIAPAccessoriesArray:(char)arg0;
- (char)_internalNotPresentInIAPAccessoriesArray;
- (void)_updateAccessoryInfo:(NSDictionary *)arg0;
- (void)_openCompleteForSession:(unsigned int)arg0;
- (void)_endSession:(unsigned int)arg0;
- (void)setEqNames:(NSArray *)arg0;
- (void)setEqIndex:(unsigned int)arg0;
- (void)setLocationSentenceTypesMask:(int)arg0;
- (void)setVehicleInfoSupportedTypes:(NSDictionary *)arg0;
- (NSString *)_protocolIDForProtocolString:(NSString *)arg0;
- (void)_addSession:(NSObject *)arg0;
- (void)_removeSession:(NSObject *)arg0;
- (NSString *)firmwareRevision;
- (NSString *)hardwareRevision;
- (NSArray *)protocolStrings;
- (NSString *)_createWakeToken;
- (NSArray *)allPublicProtocolStrings;
- (NSString *)preferredApp;
- (int)classType;
- (NSDictionary *)audioPorts;
- (NSArray *)eqNames;
- (unsigned int)eqIndex;
- (char)pointOfInterestHandoffEnabled;
- (unsigned int)pointOfInterestDataFormatMaximumSupportedVersion;
- (int)locationSentenceTypesMask;
- (NSDictionary *)vehicleInfoSupportedTypes;
- (NSDictionary *)vehicleInfoInitialData;
- (NSString *)wakeToken;
- (NSString *)bonjourName;
- (char)hasIPConnection;
- (char)isAvailableOverBonjour;
- (char)supportsCarPlay;
- (unsigned int)accessoryCapabilities;
- (char)supportsPublicIap;
- (char)shouldBeHiddenFromUI;
- (char)supportsLocation;
- (char)accessoryHasNMEASentencesAvailable;
- (char)getNMEASentence:(id *)arg0;
- (char)setNMEASentencesToFilter:(NSObject *)arg0;
- (void)setIAPTimeSyncParams:(id)arg0;
- (void)getIAPTimeSyncInfo:(NSDictionary *)arg0 completionHandler:(id /* block */)arg1;
- (void)resetIAPTimeSyncKalmanFilter;
- (char)getEphemerisURL:(id *)arg0;
- (char)getEphemerisRecommendRefreshInterval:(double *)arg0;
- (char)getEphemerisExpirationInterval:(double *)arg0;
- (char)sendGpsWeek:(unsigned int)arg0 gpsTOW:(double)arg1;
- (char)sendEphemerisPointDataGpsWeek:(unsigned int)arg0 gpsTOW:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(unsigned short)arg4;
- (char)sendEphemeris:(id)arg0;
- (char)sendPointOfInterestInformation:(id)arg0 identifier:(unsigned short)arg1;
- (void)setVehicleInfovehicleInfoInitialData:(NSData *)arg0;
- (NSData *)getVehicleInfoData;
- (char)supportsAccessibility;
- (void)updateSystemProperty:(int)arg0 withValue:(NSValue *)arg1;
- (void)updateItemProperty:(int)arg0 withValue:(NSValue *)arg1;
- (char)supportsPointOfInterest;
- (void)dealloc;
- (void)setDelegate:(<EAAccessoryDelegate> *)arg0;
- (EAAccessory *)init;
- (NSString *)description;
- (<EAAccessoryDelegate> *)delegate;
- (NSString *)name;
- (NSString *)modelNumber;
- (unsigned int)connectionID;
- (NSString *)manufacturer;
- (NSString *)serialNumber;
- (NSString *)_shortDescription;
- (NSString *)macAddress;
- (char)isConnected;

@end
